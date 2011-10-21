<?php

/**
 * Implementation of hook_views_default_views().
 */
function shub_sensor_board_data_directory_views_default_views() {
  $views = array();

  // Exported view: shub_sensor_board_data_directory
  $view = new view;
  $view->name = 'shub_sensor_board_data_directory';
  $view->description = 'Default view for data table Sensor Board Data';
  $view->tag = 'data table';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Default', 'default');
  $handler->override_option('relationships', array(
    'feed_nid' => array(
      'label' => 'shub_sensor_board_data.feed_nid -> node.nid',
      'required' => 1,
      'id' => 'feed_nid',
      'table' => 'shub_sensor_board_data',
      'field' => 'feed_nid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'id' => array(
      'label' => 'ID',
      'id' => 'id',
      'table' => 'shub_sensor_board_data',
      'field' => 'id',
      'exclude' => 0,
      'relationship' => 'none',
    ),
    'feed_nid' => array(
      'label' => 'Feed NID',
      'id' => 'feed_nid',
      'table' => 'shub_sensor_board_data',
      'field' => 'feed_nid',
      'exclude' => 0,
      'relationship' => 'none',
    ),
    'data' => array(
      'label' => 'Data',
      'id' => 'data',
      'table' => 'shub_sensor_board_data',
      'field' => 'data',
      'exclude' => 0,
      'relationship' => 'none',
    ),
    'status' => array(
      'label' => 'Status',
      'id' => 'status',
      'table' => 'shub_sensor_board_data',
      'field' => 'status',
      'exclude' => 0,
      'relationship' => 'none',
    ),
    'timestamp' => array(
      'label' => 'Timestamp',
      'id' => 'timestamp',
      'table' => 'shub_sensor_board_data',
      'field' => 'timestamp',
      'exclude' => 0,
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
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'feed_nid',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'spaces_feature',
    'spaces_feature' => 'shub_sensor_board_data_directory',
    'perm' => 'access content',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Sensor Board Data');
  $handler->override_option('empty', 'There is no data in this table.');
  $handler->override_option('empty_format', '1');
  $handler->override_option('items_per_page', 50);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 1,
    'order' => 'asc',
    'columns' => array(
      'id' => 'id',
      'feed_nid' => 'feed_nid',
      'data' => 'data',
      'status' => 'status',
      'timestamp' => 'timestamp',
    ),
    'info' => array(
      'id' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'feed_nid' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'data' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'status' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'timestamp' => array(
        'sortable' => 1,
        'separator' => '',
      ),
    ),
    'default' => -1,
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'sensor-board-data');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Sensor Board Data',
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
  $translatables['shub_sensor_board_data_directory'] = array(
    t('Default'),
    t('Page'),
    t('Sensor Board Data'),
    t('There is no data in this table.'),
  );

  $views[$view->name] = $view;

  return $views;
}
