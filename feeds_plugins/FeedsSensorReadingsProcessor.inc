<?php
function shub_feed_on_sensor_board__sb_data_to_sensor_readings__process($sensor_readings) {

  // Save each sensor reading
  foreach($sensor_readings as $sensor_id => $sensor_reading) {
    shub_sensor_reading_save($sensor_reading['data'], $sensor_reading['sensor_id'], $sensor_reading['timestamp'], $sensor_reading['sensor_board_id']);
  }
  drupal_set_message("Saved " . count($sensor_readings) . " Sensor Reading Nodes.");
  
}

