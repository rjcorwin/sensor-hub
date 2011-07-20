<?php

/**
 * Implementation of hook_strongarm().
 */
function shub_sensor_reading_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_shub_sensor_reading';
  $strongarm->value = 0;
  $export['comment_anonymous_shub_sensor_reading'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_shub_sensor_reading';
  $strongarm->value = '3';
  $export['comment_controls_shub_sensor_reading'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_shub_sensor_reading';
  $strongarm->value = '4';
  $export['comment_default_mode_shub_sensor_reading'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_shub_sensor_reading';
  $strongarm->value = '1';
  $export['comment_default_order_shub_sensor_reading'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_shub_sensor_reading';
  $strongarm->value = '50';
  $export['comment_default_per_page_shub_sensor_reading'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_shub_sensor_reading';
  $strongarm->value = '0';
  $export['comment_form_location_shub_sensor_reading'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_shub_sensor_reading';
  $strongarm->value = '1';
  $export['comment_preview_shub_sensor_reading'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_shub_sensor_reading';
  $strongarm->value = '2';
  $export['comment_shub_sensor_reading'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_shub_sensor_reading';
  $strongarm->value = '1';
  $export['comment_subject_field_shub_sensor_reading'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_shub_sensor_reading';
  $strongarm->value = array(
    'title' => '44',
    'body_field' => '47',
    'revision_information' => '50',
    'author' => '49',
    'options' => '51',
    'comment_settings' => '52',
    'menu' => '45',
    'book' => '48',
    'attachments' => '53',
    'og_nodeapi' => '46',
  );
  $export['content_extra_weights_shub_sensor_reading'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_shub_sensor_reading';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_shub_sensor_reading'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_shub_sensor_reading';
  $strongarm->value = '1';
  $export['upload_shub_sensor_reading'] = $strongarm;

  return $export;
}
