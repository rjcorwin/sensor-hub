<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function shub_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'shub_dashboard';
  $context->description = '';
  $context->tag = 'Sensor Hub';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'sensor-readings' => 'sensor-readings',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-shub_sensor_boards-block_2' => array(
          'module' => 'views',
          'delta' => 'shub_sensor_boards-block_2',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-shub_sensors-block_2' => array(
          'module' => 'views',
          'delta' => 'shub_sensors-block_2',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-shub_sensor_board_data-block_3' => array(
          'module' => 'views',
          'delta' => 'shub_sensor_board_data-block_3',
          'region' => 'right',
          'weight' => 2,
        ),
        'views-shub_sensor_board_data-block_4' => array(
          'module' => 'views',
          'delta' => 'shub_sensor_board_data-block_4',
          'region' => 'right',
          'weight' => 3,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sensor Hub');

  $export['shub_dashboard'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'shub_sensor';
  $context->description = 'The sensor node page';
  $context->tag = 'Sensor Hub';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'sensor' => 'sensor',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-shub_sensor_readings-block_5' => array(
          'module' => 'views',
          'delta' => 'shub_sensor_readings-block_5',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sensor Hub');
  t('The sensor node page');

  $export['shub_sensor'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'shub_sensor_board';
  $context->description = '';
  $context->tag = 'Sensor Hub';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'sensor_board' => 'sensor_board',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-shub_sensor_board_views_tabs' => array(
          'module' => 'quicktabs',
          'delta' => 'shub_sensor_board_views_tabs',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sensor Hub');

  $export['shub_sensor_board'] = $context;
  return $export;
}
