<?php
/*
 * returns
 *    $sensor_readings[] = array(
 *      "sensor_id" => $sensor->id,
 *      "data" => $reading_data,
 *      "timestamp" => $timestamp,
 *      "sensor_board_id" => $sensor_board->id
 *    );
 */
function shub_feed_on_sensor_board__sb_data_to_sensor_readings__parse($sensor_board_data_fetched) {
  $sensor_readings = array();
  foreach($sensor_board_data_fetched as $sensor_board_data) {

    $data = $sensor_board_data->body;
    $sensor_board = node_load($sensor_board_data->field_sb_data_to_sb[0]['nid']);
            
    // Make sure this is the format we support or else skip Sensor Board Data node
    if(!$pos = strpos($data, 'DATE')) {
      drupal_set_message("Reason: The data in the Sensor Board Data does not have the DATE identifier: $data");
      continue;
    }

    // Get the date and time from the reading
    $date  = substr($data, $pos+5, 10);
    $time  = substr($data, $pos+16, 8);
    $datetime = new DateTime($date . "T" . $time . "Z", new DateTimeZone(date_default_timezone_name()));
    $timestamp = $datetime->format('U');

    // Make sure we have a timestamp or else skip Sensor Board Data node
    if(!$timestamp) {
      drupal_set_message("Reason: Cannot find the date/time in the Sensor Board Data node data: $data");
      continue;
    }

    // Parse out the sensor readings
    $pos = $pos + 25;
    $sensor_readings_string  = substr($data , $pos, strlen($data));
    $sensor_reading_strings = explode(',', $sensor_readings_string);
    
    // If this is not an array skip the Sensor Board Data node
    if(!is_array($sensor_reading_strings)) {
      drupal_set_message("Reason: The data in the Sensor Board Data does not appear to be comma delimited: $data");
      continue;
    }

    // Place each reading in a temporary array
    foreach ($sensor_reading_strings as $sensor_string) {
      $arr = explode(':', $sensor_string);
      // Make sure this is an array or skip this Sensor Board Data node
      if(!is_array($arr)) {
        return "Reason: A reading in the Sensor Board Data does not appear to be formed correctly : $data";
        continue 2;
      }
      $sensor_readings_temp[] = array("sensor_id" => ltrim($arr[0]), "data" => $arr[1],
          "timestamp" => $timestamp, "sensor_board_id" => $sensor_board->id);
    }
    
    // Find Sensors in our data not attached to the Sensor Board
    foreach ($sensor_readings_temp as $sensor_reading) {
      if(!$sensor_board->sensors[$sensor_reading['sensor_id']]) {
        $unmatched_sensors[] = $sensor_reading['sensor_id'];
      }
    }
    
    // Issue warning if there are unmatched sensors and skip this Sensor Board Data node
    if ($unmatched_sensors) {
      drupal_set_message("Sensor Board {$sensor_board->id} is receiving data for sensors which is not assigned
            to that Sensor Board node: " . implode(',', $unmatched_sensors));
      unset($unmatched_sensors);
      continue;
    }

    // Save the parsed readings into $sensor_readings
    $sensor_readings = array_merge($sensor_readings, $sensor_readings_temp);
    unset($sensor_readings_temp);
    
    // Mark this Sensor Board Data node as processed
    $sensor_board_data->field_sb_data_process_status = array( 0 => array( 'value' => 'processed'));
    node_save($sensor_board_data);
  }
  return $sensor_readings;
}
