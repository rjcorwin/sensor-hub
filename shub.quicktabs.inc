<?php

/**
 * Implementation of hook_quicktabs_default_quicktabs().
 */
function shub_quicktabs_default_quicktabs() {
  $export = array();
  $quicktabs = new stdClass;
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'shub_sensor_board_views_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = 0;
  $quicktabs->default_tab = FALSE;
  $quicktabs->title = 'Sensor Board Views Tabs';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'shub_sensor_board_data',
      'display' => 'block_1',
      'args' => '',
      'get_displays' => 'vdisp_0',
      'title' => 'Data Not Processed',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'shub_sensor_board_data',
      'display' => 'block_2',
      'args' => '',
      'get_displays' => 'vdisp_1',
      'title' => 'Data Processed',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->style = 'Sky';

  $export['shub_sensor_board_views_tabs'] = $quicktabs;
  return $export;
}
