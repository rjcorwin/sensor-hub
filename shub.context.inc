<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function shub_context_default_contexts() {
  $export = array();
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
