
<?php

class FeedsTravistaParser extends FeedsParser {
  
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
    foreach($sensor_board_data_fetched as $sensor_board_data) {
      
      $sensor_board_data = $this->parseSensorBoardData($sensor_board_data);
      
      $sensor_readings = array_merge($sensor_readings, $this->prepareSensorReadings($sensor_board_data));
      
    }
    $batch->items = $sensor_readings;
  }
  
  /*
   *  
   */
  public function parseSensorBoardData($sensor_board_data) {
    $data_string = $sensor_board_data['data'];
    // Make sure this is the format we support or else skip Sensor Board Data node
    if(!$pos = strpos($data_string, 'DATE')) {
      drupal_set_message("Reason: The data in the Sensor Board Data does not have the DATE 
        identifier: " . $data_string);
      return;
    }
     
    // Get the date and time from the reading
    $date  = substr($data_string, $pos+5, 10);
    $time  = substr($data_string, $pos+16, 8);
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
      drupal_set_message("Reason: Cannot find the date/time in the Sensor Board Data 
        node data: " . $data_string);
      return;
    }
    
    // Parse out the sensor readings
    $pos = $pos + 25;
    $sensor_readings_string  = substr($data_string, $pos, strlen($data_string));
    $data['sensor_reading_strings'] = explode(',', $sensor_readings_string);
    
    // If this is not an array skip the Sensor Board Data node
    if(!is_array($data['sensor_reading_strings'])) {
      drupal_set_message("Reason: The data in the Sensor Board Data does not appear to be comma 
        delimited correctly: " . $data_string);
      return;
    }
    
    return $data;
  }
  
  /*
   * Parse a Sensor String into a Sensor Reading that is ready to be processed.
   * Sensor Boards are auto configured here if they need to be.
   */
  public function prepareSensorReadings($sensor_board_data) {
    
    $sensor_board = og_get_group_context();
    $sensors = shub_sensor_board_sensors_load($sensor_board->nid);
    $sensor_ids = array();
    
    foreach ($sensors as $sensor) {
      $sensor_ids[] = $sensor->field_sensor_id[0]['value'];
    }
    
    foreach($sensor_board_data['sensor_reading_strings'] as  $sensor_string) {
      
      $arr = explode(':', $sensor_string);
      
      // Make sure this is an array or skip this Sensor Board Data node
      if(!is_array($arr)) {
        return "Reason: A reading in the Sensor Board Data does not appear to be formed correctly : $sensor_string";
      }
      
      $sensor_id = ltrim($arr[0]);
      $sensor_reading = ltrim($arr[1]);
      
      // Make sure this entry has a matching sensor otherwise create it
      if(!in_array($sensor_id, $sensor_ids)) {
        shub_sensor_board_attach_sensor($sensor_board->nid, $sensor_id);
        $sensors = shub_sensor_board_sensors_load($sensor_board->nid, TRUE);
      } 
      $sensor_readings[] = array(
        "sensor_id" => $sensor_id,
        "sensor_nid" => $sensors[$sensor_id]->nid,
        "sensor_data" => $sensor_reading,
        "timestamp" => $sensor_board_data['timestamp'],
        "sensor_board_nid" => $sensor_board->nid,
        //"sensor_board_id" => $sensor_board->id
      );
    }
    
    return $sensor_readings;
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
