<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function shub_processor_csv_to_travista_data_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function shub_processor_csv_to_travista_data_node_info() {
  $items = array(
    'shub_processor_csv_to_travista' => array(
      'name' => t('CSV File to Travista Data Processor'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
