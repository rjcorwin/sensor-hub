<?php

/**
 * Implementation of hook_data_default().
 */
function shub_sensor_board_data_data_default() {
  $export = array();

  $data_table = new stdClass;
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Sensor Board Data';
  $data_table->name = 'shub_sensor_board_data';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'id' => array(
        'type' => 'serial',
        'size' => 'normal',
        'not null' => TRUE,
        'description' => '',
      ),
      'feed_nid' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'data' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'status' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'timestamp' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => FALSE,
      ),
    ),
    'name' => 'shub_sensor_board_data',
    'indexes' => array(
      'feed_nid' => array(
        0 => 'feed_nid',
      ),
      'id' => array(
        0 => 'id',
      ),
      'status' => array(
        0 => 'status',
      ),
    ),
    'primary key' => array(
      0 => 'id',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'id' => array(
        'label' => 'ID',
      ),
      'feed_nid' => array(
        'label' => 'Feed NID',
      ),
      'data' => array(
        'label' => 'Data',
      ),
      'status' => array(
        'label' => 'Status',
      ),
      'timestamp' => array(
        'label' => 'Timestamp',
      ),
    ),
    'join' => array(
      'node' => array(
        'left_field' => 'nid',
        'field' => 'feed_nid',
        'inner_join' => '0',
      ),
    ),
  );
  $export['shub_sensor_board_data'] = $data_table;

  return $export;
}
