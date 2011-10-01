<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function shub_sensor_board_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function shub_sensor_board_node_info() {
  $items = array(
    'shub_sensor_board' => array(
      'name' => t('Sensor Board'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Label'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
