
<?php

class FeedsSensorBoardDataTravistaParser extends FeedsParser {

  /**
   * Parses a raw string and populates FeedsImportBatch object from it.
   *
   * returns
   *    $sensor_readings[] = array(
   *         "sensor_id" => ltrim($arr[0]),
   *         "sensor_nid" => $sensor_board->sensors[ltrim($arr[0])]->nid,
   *         "sensor_data" => $arr[1],
   *         "timestamp" => $timestamp,
   *         "sensor_board_nid" => $sensor_board->nid,
   *         "sensor_board_id" => $sensor_board->id
   *       );
   */
  public function parse(FeedsImportBatch $batch, FeedsSource $source) {

    $sensor_board_data_fetched = $batch->getRaw();
    $sensor_readings = array();
    
    // Parse each Fetched Sensor Board Data string
    // TODO Is there a way to get one item from batch at a time?
    foreach($sensor_board_data_fetched as $sensor_board_data) {

      // Get a fresh load of our sensor board as config may have changed from auto config
      $sensor_board = node_load($sensor_board_data->field_sb_data_to_sb[0]['nid'], NULL, TRUE);

      // Get the timestamp, sensor board, and sensor reading strings for this Sensor Board Data node
      $data = $this->parseSensorBoardData($sensor_board_data);
      
      // Parse each sensor reading string
      foreach ($data['sensor_reading_strings'] as $sensor_string) {
        $sensor_readings[] = $this->parseSensorString($sensor_string, $data['timestamp'], &$sensor_board);
      }

      // Mark this Sensor Board Data node as processed
      $sensor_board_data->field_sb_data_process_status = array( 0 => array( 'value' => 'processed'));
      node_save($sensor_board_data);
      
    }
    $batch->items = $sensor_readings;
  }

  /*
   *  Parse a Sensor Board Data node into unique parts
   */
  public function parseSensorBoardData($sensor_board_data) {

    $string = $sensor_board_data->body;

    // Make sure this is the format we support or else skip Sensor Board Data node
    if(!$pos = strpos($string, 'DATE')) {
      drupal_set_message("Reason: The data in the Sensor Board Data does not have the DATE identifier: $string");
    }

    // Get the date and time from the reading
    $date  = substr($string, $pos+5, 10);
    $time  = substr($string, $pos+16, 8);
    $date = explode("/", $date);
    $time = explode(":", $time);

    // TODO Timezone should be configured on the Sensor Board node instead of using
    // site's default timezone.
    $tz_string = date_default_timezone_name();
    $tz_object = new DateTimeZone($tz_string);

    $datetime = new DateTime();
    $datetime->setTimezone($tz_object);
    $datetime->setDate($date[0], $date[1], $date[2]);
    $datetime->setTime($time[0], $time[1], $time[2]);

    $data['timestamp'] = $datetime->format('U');

    // Make sure we have a timestamp or else skip Sensor Board Data node
    if(!$data['timestamp']) {
      drupal_set_message("Reason: Cannot find the date/time in the Sensor Board Data node data: $string");
    }

    // Parse out the sensor readings
    $pos = $pos + 25;
    $sensor_readings_string  = substr($string , $pos, strlen($string));
    $data['sensor_reading_strings'] = explode(',', $sensor_readings_string);

    // If this is not an array skip the Sensor Board Data node
    if(!is_array($data['sensor_reading_strings'])) {
      drupal_set_message("Reason: The data in the Sensor Board Data does not appear to be comma delimited: $string");
    }

    return $data;
  }

  /*
   * Parse a Sensor String into a Sensor Reading that is ready to be processed.
   * Sensor Boards are auto configured here if they need to be.
   */
  public function parseSensorString($sensor_string, $timestamp, $sensor_board) {

    $arr = explode(':', $sensor_string);

    // Make sure this is an array or skip this Sensor Board Data node
    if(!is_array($arr)) {
      return "Reason: A reading in the Sensor Board Data does not appear to be formed correctly : $sensor_string";
    }

    $sensor_id = ltrim($arr[0]);
    $sensor_reading = ltrim($arr[1]);

    // If this Sensor ID does not match this Sensor Board's Sensors, create/relate it
    // TODO Users should have an option here to have it create sensors automatically or kill
    // process and warn.
    if (!$sensor_board->sensors[$sensor_id]) {

      if($sensor = shub_sensor_load_by_id($sensor_id)) {
        $sensor->field_sensor_to_sb[0]['nid'] = $sensor_board->nid;
        node_save($sensor);
        drupal_set_message("Sensor $sensor->id was assigned to $sensor_board->id");
        $sensor_board->sensor[$sensor->id] = $sensor;
      }
      else {
        if($sensor_id) {
          $sensor = new stdClass();
          $sensor->type = "sensor";
          $sensor->field_sensor_id = array(array('value' => $sensor_id));
          $sensor->title = $sensor_id;
          $sensor->field_sensor_to_sb = array(array('nid' =>  $sensor_board->nid));
          node_save($sensor);
          // Attach to the sensor board and
          $sensor_board->sensors[$sensor_id] = $sensor;
          drupal_set_message("Created new sensor with ID $sensor->id and attached to Sensor Board {$sensor_board->id}");
        }
        else {
          drupal_set_message("Reading with no sensor id found in Sensor Board Data node $sensor_board_data->nid");
        }
      }
    }

    $sensor_reading = array(
      "sensor_id" => $sensor_id,
      "sensor_nid" => $sensor_board->sensors[$sensor_id]->nid,
      "sensor_data" => $sensor_reading,
      "timestamp" => $timestamp,
      "sensor_board_nid" => $sensor_board->nid,
      "sensor_board_id" => $sensor_board->id
    );

    return $sensor_reading;
  }


  public function getMappingSources() {
    return array(
      'sensor_nid' => array(
        'name' => t('Sensor NID'),
        'description' => t('Unique Sensor NID.'),
      ),
      'sensor_board_nid' => array(
        'name' => t('Sensor Board NID'),
        'description' => t('Unique Sensor Board NID'),
      ),
      'sensor_id' => array(
        'name' => t('Sensor ID'),
        'description' => t('Unique Sensor ID.'),
      ),
      'sensor_board_id' => array(
        'name' => t('Sensor Board ID'),
        'description' => t('Unique Sensor Board ID'),
      ),
      'sensor_data' => array(
        'name' => t('Sensor Data'),
        'description' => t('Data read from the sensor'),
      ),
      'timestamp' => array(
        'name' => t('Timestamp'),
        'description' => t('The time on the sensor board when the sensor was polled.'),
      ),
    );
  }
}
