<?php

/**
 * Implementation of hook_views_default_views().
 */
function shub_sensor_reading_graph_views_default_views() {
  $views = array();

  // Exported view: shub_sensor_reading_graph
  $view = new view;
  $view->name = 'shub_sensor_reading_graph';
  $view->description = '';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'field_shub_sensor_reading_data_value' => array(
      'label' => 'Data',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'us_2',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_shub_sensor_reading_data_value',
      'table' => 'node_data_field_shub_sensor_reading_data',
      'field' => 'field_shub_sensor_reading_data_value',
      'relationship' => 'none',
    ),
    'field_sensor_reading_to_sensor_nid' => array(
      'label' => 'Sensor',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_sensor_reading_to_sensor_nid',
      'table' => 'node_data_field_sensor_reading_to_sensor',
      'field' => 'field_sensor_reading_to_sensor_nid',
      'relationship' => 'none',
    ),
    'field_timestamp_value' => array(
      'label' => 'Timestamp',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'group' => '',
      ),
      'repeat' => array(
        'show_repeat_rule' => '',
      ),
      'fromto' => array(
        'fromto' => 'both',
      ),
      'exclude' => 0,
      'id' => 'field_timestamp_value',
      'table' => 'node_data_field_timestamp',
      'field' => 'field_timestamp_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'field_timestamp_value' => array(
      'order' => 'DESC',
      'delta' => -1,
      'id' => 'field_timestamp_value',
      'table' => 'node_data_field_timestamp',
      'field' => 'field_timestamp_value',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'shub_sensor_reading' => 'shub_sensor_reading',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'current' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'current',
      'table' => 'spaces',
      'field' => 'current',
      'relationship' => 'none',
    ),
    'field_shub_sensor_reading_data_value' => array(
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '15',
        'max' => '100',
      ),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_shub_sensor_reading_data_value_op',
        'identifier' => 'field_shub_sensor_reading_data_value',
        'label' => 'Upper/Lower <br>Bounds',
        'bef_filter_description' => '',
        'optional' => 1,
        'remember' => 0,
      ),
      'id' => 'field_shub_sensor_reading_data_value',
      'table' => 'node_data_field_shub_sensor_reading_data',
      'field' => 'field_shub_sensor_reading_data_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_sensor_reading_to_sensor_nid' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_sensor_reading_to_sensor_nid_op',
        'identifier' => 'field_sensor_reading_to_sensor_nid',
        'label' => 'Sensors',
        'bef_filter_description' => '',
        'bef_format' => 'bef_ul',
        'optional' => 0,
        'single' => 0,
        'remember' => 0,
        'reduce' => 0,
        'bef_select_all_none' => 1,
        'bef_collapsible' => 1,
      ),
      'id' => 'field_sensor_reading_to_sensor_nid',
      'table' => 'node_data_field_sensor_reading_to_sensor',
      'field' => 'field_sensor_reading_to_sensor_nid',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'spaces_feature',
    'spaces_feature' => 'shub_sensor_reading_graph',
    'perm' => 'access content',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('header', '<style type=\'text/css\'>
#edit-field-shub-sensor-reading-data-value-max-wrapper label {display: none; }
#edit-field-shub-sensor-reading-data-value-max-wrapper { 
position: relative;
bottom: 32px;
}
#edit-field-shub-sensor-reading-data-value-min-wrapper { 
position: relative;
top: 32px;
}
</style>');
  $handler->override_option('header_format', '6');
  $handler->override_option('header_empty', 0);
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('items_per_page', 1000);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('exposed_block', TRUE);
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('style_plugin', 'charts');
  $handler->override_option('style_options', array(
    'grouping' => 'field_sensor_reading_to_sensor_nid',
    'views_charts_series_fields' => array(
      'field_shub_sensor_reading_data_value' => 'field_shub_sensor_reading_data_value',
      'field_timestamp_value' => 'field_timestamp_value',
    ),
    'views_charts_x_labels' => 'field_timestamp_value',
    'width' => '100%',
    'height' => '400px',
    'engine' => 'flot',
    'type' => array(
      'flot' => 'line',
    ),
    'wmode' => 'window',
    'y_min' => '',
    'y_max' => '',
    'y_step' => '',
    'y_legend' => '',
    'background_colour' => '',
    'series_colours' => '',
  ));
  $handler->override_option('path', 'sensor-reading-chart');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Sensor Reading Graph',
    'description' => '',
    'weight' => '0',
    'name' => 'features',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'shub_sensor_reading' => 'shub_sensor_reading',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'current' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'current',
      'table' => 'spaces',
      'field' => 'current',
      'relationship' => 'none',
    ),
    'field_shub_sensor_reading_data_value' => array(
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '15',
        'max' => '65',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => 'field_shub_sensor_reading_data_value_op',
        'label' => 'Upper/Lower <br>Bounds',
        'use_operator' => 0,
        'identifier' => 'field_shub_sensor_reading_data_value',
        'bef_filter_description' => '',
        'optional' => 1,
        'remember' => 0,
      ),
      'id' => 'field_shub_sensor_reading_data_value',
      'table' => 'node_data_field_shub_sensor_reading_data',
      'field' => 'field_shub_sensor_reading_data_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'field_sensor_reading_to_sensor_nid' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => 'field_sensor_reading_to_sensor_nid_op',
        'label' => 'Sensors',
        'use_operator' => 0,
        'identifier' => 'field_sensor_reading_to_sensor_nid',
        'bef_filter_description' => '',
        'bef_format' => 'bef_ul',
        'optional' => 0,
        'single' => 0,
        'remember' => 0,
        'reduce' => 0,
        'bef_select_all_none' => 1,
        'bef_collapsible' => 1,
      ),
      'id' => 'field_sensor_reading_to_sensor_nid',
      'table' => 'node_data_field_sensor_reading_to_sensor',
      'field' => 'field_sensor_reading_to_sensor_nid',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Use default',
      ),
    ),
  ));
  $handler->override_option('items_per_page', 100);
  $handler->override_option('style_plugin', 'charts');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'views_charts_series_fields' => array(
      'field_shub_sensor_reading_data_value' => 'field_shub_sensor_reading_data_value',
      'field_timestamp_value' => 'field_timestamp_value',
    ),
    'views_charts_x_labels' => 'field_shub_sensor_reading_data_value',
    'width' => '275px',
    'height' => '175px',
    'engine' => 'flot',
    'type' => array(
      'flot' => 'line',
    ),
    'wmode' => 'window',
    'y_min' => '',
    'y_max' => '',
    'y_step' => '',
    'y_legend' => '',
    'background_colour' => '',
    'series_colours' => '',
  ));
  $handler->override_option('exposed_block', FALSE);
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);
  $translatables['shub_sensor_reading_graph'] = array(
    t('<style type=\'text/css\'>
#edit-field-shub-sensor-reading-data-value-max-wrapper label {display: none; }
#edit-field-shub-sensor-reading-data-value-max-wrapper { 
position: relative;
bottom: 32px;
}
#edit-field-shub-sensor-reading-data-value-min-wrapper { 
position: relative;
top: 32px;
}
</style>'),
    t('Block'),
    t('Defaults'),
    t('Page'),
  );

  $views[$view->name] = $view;

  return $views;
}
