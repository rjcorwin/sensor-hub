<?php

/**
 * Implementation of hook_strongarm().
 */
function shub_processor_csv_to_travista_data_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_shub_processor_csv_to_travista';
  $strongarm->value = 0;
  $export['comment_anonymous_shub_processor_csv_to_travista'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_shub_processor_csv_to_travista';
  $strongarm->value = '3';
  $export['comment_controls_shub_processor_csv_to_travista'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_shub_processor_csv_to_travista';
  $strongarm->value = '4';
  $export['comment_default_mode_shub_processor_csv_to_travista'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_shub_processor_csv_to_travista';
  $strongarm->value = '1';
  $export['comment_default_order_shub_processor_csv_to_travista'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_shub_processor_csv_to_travista';
  $strongarm->value = '50';
  $export['comment_default_per_page_shub_processor_csv_to_travista'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_shub_processor_csv_to_travista';
  $strongarm->value = '0';
  $export['comment_form_location_shub_processor_csv_to_travista'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_shub_processor_csv_to_travista';
  $strongarm->value = '1';
  $export['comment_preview_shub_processor_csv_to_travista'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_shub_processor_csv_to_travista';
  $strongarm->value = '0';
  $export['comment_shub_processor_csv_to_travista'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_shub_processor_csv_to_travista';
  $strongarm->value = '1';
  $export['comment_subject_field_shub_processor_csv_to_travista'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_shub_processor_csv_to_travista';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_shub_processor_csv_to_travista'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_shub_processor_csv_to_travista';
  $strongarm->value = '1';
  $export['upload_shub_processor_csv_to_travista'] = $strongarm;

  return $export;
}