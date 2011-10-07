<?php

/**
 * Implementation of hook_views_default_views().
 */
function shub_sensor_readings_graph_views_default_views() {
  $views = array();

  // Exported view: shub_sensor_readings_graph
  $view = new view;
  $view->name = 'shub_sensor_readings_graph';
  $view->description = '';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'shub_sensor_readings';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'sensor_nid' => array(
      'label' => 'shub_sensor_readings.sensor_nid -> node.nid',
      'required' => 1,
      'id' => 'sensor_nid',
      'table' => 'shub_sensor_readings',
      'field' => 'sensor_nid',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'data' => array(
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
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => ',',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'data',
      'table' => 'shub_sensor_readings',
      'field' => 'data',
      'relationship' => 'none',
    ),
    'timestamp' => array(
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
      'date_format' => 'large',
      'custom_date_format' => '',
      'reldate' => '0',
      'exclude' => 0,
      'id' => 'timestamp',
      'table' => 'shub_sensor_readings',
      'field' => 'timestamp',
      'relationship' => 'none',
    ),
    'field_sensor_id_value' => array(
      'label' => 'Sensor ID',
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
      'id' => 'field_sensor_id_value',
      'table' => 'node_data_field_sensor_id',
      'field' => 'field_sensor_id_value',
      'relationship' => 'sensor_nid',
    ),
    'title' => array(
      'label' => 'Sensor Label',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 1,
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
      'spaces' => array(
        'frontpage' => 0,
        'type' => 'spaces_og',
      ),
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'sensor_nid',
    ),
  ));
  $handler->override_option('sorts', array(
    'timestamp' => array(
      'order' => 'DESC',
      'granularity' => 'second',
      'id' => 'timestamp',
      'table' => 'shub_sensor_readings',
      'field' => 'timestamp',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
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
      'relationship' => 'sensor_nid',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'spaces_feature',
    'spaces_feature' => 'shub_sensor_readings_graph',
    'perm' => 'access content',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('style_plugin', 'charts');
  $handler->override_option('style_options', array(
    'grouping' => 'title',
    'views_charts_series_fields' => array(
      'data' => 'data',
      'timestamp' => 'timestamp',
    ),
    'views_charts_x_labels' => 'data',
    'width' => '400',
    'height' => '350',
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
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'graph');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Graph',
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
  $translatables['shub_sensor_readings_graph'] = array(
    t('Defaults'),
    t('Page'),
  );

  $views[$view->name] = $view;

  return $views;
}
