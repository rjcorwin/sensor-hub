<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function shub_feeds_importer_default() {
  $export = array();
  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'sensor_board_data_to_sensor_readings';
  $feeds_importer->config = array(
    'name' => 'Sensor Board Data to Sensor Readings',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsSensorBoardDataOnSensorBoardFetcher',
      'config' => array(),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSensorBoardDataTravistaParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'sensor_reading',
        'input_format' => '0',
        'update_existing' => '0',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'sensor_id',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'sensor_data',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'timestamp',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'sensor_nid',
            'target' => 'field_sensor_reading_to_sensor:nid',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'sensor_board_nid',
            'target' => 'field_sensor_reading_to_sb:nid',
            'unique' => FALSE,
          ),
        ),
        'author' => 0,
      ),
    ),
    'content_type' => 'sensor_board',
    'update' => 0,
    'import_period' => '900',
    'expire_period' => 3600,
    'import_on_create' => 0,
  );

  $export['sensor_board_data_to_sensor_readings'] = $feeds_importer;
  return $export;
}
