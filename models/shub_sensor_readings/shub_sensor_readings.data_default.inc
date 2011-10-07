<?php

/**
 * Implementation of hook_data_default().
 */
function shub_sensor_readings_data_default() {
  $export = array();

  $data_table = new stdClass;
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Sensor Readings';
  $data_table->name = 'shub_sensor_readings';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'feed_nid' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'id' => array(
        'type' => 'serial',
        'size' => 'normal',
        'not null' => TRUE,
        'description' => '',
      ),
      'data' => array(
        'type' => 'float',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'timestamp' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'sensor_nid' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => FALSE,
      ),
    ),
    'name' => 'shub_sensor_readings',
    'indexes' => array(
      'feed_nid' => array(
        0 => 'feed_nid',
      ),
      'id' => array(
        0 => 'id',
      ),
      'timestamp' => array(
        0 => 'timestamp',
      ),
    ),
    'primary key' => array(
      0 => 'id',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'feed_nid' => array(
        'label' => 'Feed Source',
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
        'search' => 0,
      ),
      'id' => array(
        'label' => 'ID',
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
        'search' => 0,
      ),
      'data' => array(
        'label' => 'Data',
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_float',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
        'search' => 1,
      ),
      'timestamp' => array(
        'label' => 'Timestamp',
        'views_field_handler' => 'views_handler_field_date',
        'views_filter_handler' => 'views_handler_filter_date',
        'views_argument_handler' => 'views_handler_argument_date',
        'views_sort_handler' => 'views_handler_sort_date',
        'search' => 0,
      ),
      'sensor_nid' => array(
        'label' => 'Sensor NID',
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
        'search' => 0,
      ),
    ),
    'data_node' => array(
      'content_type' => 'shub_sensor',
      'id' => 'sensor_nid',
    ),
  );
  $export['shub_sensor_readings'] = $data_table;

  return $export;
}
