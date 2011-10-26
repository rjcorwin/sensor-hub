<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function shub_sensor_board_data_directory_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'shub_sensor_board_data_directory';
  $context->description = '';
  $context->tag = 'shub';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'sensor-board-data' => 'sensor-board-data',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-feed_shub_sources_feeds-block_1' => array(
          'module' => 'views',
          'delta' => 'feed_shub_sources_feeds-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('shub');
  $export['shub_sensor_board_data_directory'] = $context;

  return $export;
}
