<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function shub_travista_adapter_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'shub_travista_data_adapter';
  $feeds_importer->config = array(
    'name' => 'Travista Data Adapter',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsShubSensorBoardDataFetcher',
      'config' => array(),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsTravistaParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsDataProcessor',
      'config' => array(
        'update_existing' => 0,
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'timestamp',
            'target' => 'timestamp',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'sensor_nid',
            'target' => 'sensor_nid',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'sensor_data',
            'target' => 'data',
            'unique' => FALSE,
          ),
        ),
        'delete_with_source' => 0,
        'table_name' => 'shub_sensor_readings',
      ),
    ),
    'content_type' => 'shub_travista_data_adapter',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );
  $export['shub_travista_data_adapter'] = $feeds_importer;

  return $export;
}
