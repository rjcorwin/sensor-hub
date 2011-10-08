<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function shub_source_csv_file_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'shub_source_csv_file';
  $feeds_importer->config = array(
    'name' => 'Source: CSV File',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsDataProcessor',
      'config' => array(
        'update_existing' => 0,
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'data',
            'target' => 'data',
            'unique' => FALSE,
          ),
        ),
        'delete_with_source' => 0,
        'table_name' => 'shub_sensor_board_data',
      ),
    ),
    'content_type' => 'shub_source_csv_file',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );
  $export['shub_source_csv_file'] = $feeds_importer;

  return $export;
}
