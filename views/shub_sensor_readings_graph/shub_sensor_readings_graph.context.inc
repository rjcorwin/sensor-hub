<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function shub_sensor_readings_graph_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'shub_sensor_readings_graph';
  $context->description = '';
  $context->tag = 'shub';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'graph' => 'graph',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-c032905e8be7d5ae59d219abb1f52e37' => array(
          'module' => 'views',
          'delta' => 'c032905e8be7d5ae59d219abb1f52e37',
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
  $export['shub_sensor_readings_graph'] = $context;

  return $export;
}
