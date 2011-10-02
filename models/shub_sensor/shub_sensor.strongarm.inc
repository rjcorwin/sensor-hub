<?php

/**
 * Implementation of hook_strongarm().
 */
function shub_sensor_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_shub_sensor';
  $strongarm->value = 0;
  $export['comment_anonymous_shub_sensor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_shub_sensor';
  $strongarm->value = '3';
  $export['comment_controls_shub_sensor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_shub_sensor';
  $strongarm->value = '4';
  $export['comment_default_mode_shub_sensor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_shub_sensor';
  $strongarm->value = '1';
  $export['comment_default_order_shub_sensor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_shub_sensor';
  $strongarm->value = '50';
  $export['comment_default_per_page_shub_sensor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_shub_sensor';
  $strongarm->value = '0';
  $export['comment_form_location_shub_sensor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_shub_sensor';
  $strongarm->value = '1';
  $export['comment_preview_shub_sensor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_shub_sensor';
  $strongarm->value = '2';
  $export['comment_shub_sensor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_shub_sensor';
  $strongarm->value = '1';
  $export['comment_subject_field_shub_sensor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_shub_sensor';
  $strongarm->value = array(
    'title' => '-3',
    'body_field' => '0',
    'revision_information' => '3',
    'author' => '2',
    'options' => '4',
    'comment_settings' => '5',
    'menu' => '-2',
    'book' => '1',
    'attachments' => '6',
    'og_nodeapi' => '-1',
  );
  $export['content_extra_weights_shub_sensor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_shub_sensor';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_shub_sensor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_shub_sensor';
  $strongarm->value = 'group_post_wiki';
  $export['og_content_type_usage_shub_sensor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_max_groups_shub_sensor';
  $strongarm->value = '';
  $export['og_max_groups_shub_sensor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_shub_sensor';
  $strongarm->value = '1';
  $export['upload_shub_sensor'] = $strongarm;

  return $export;
}
