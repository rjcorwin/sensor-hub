<?php

/**
 * Implementation of hook_views_default_views().
 */
function shub_views_default_views() {
  $views = array();

  // Exported view: shub_sensor_board_data
  $view = new view;
  $view->name = 'shub_sensor_board_data';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 10, 20, 40, 60, 100, 500';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'body' => 'body',
    'created' => 'created',
    'edit_node' => 'edit_node',
    'view_node' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'body' => array(
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'edit_node' => array(
      'separator' => '',
    ),
    'view_node' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['label'] = '';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'nothing found';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Relationship: Content: Sensor Board (field_sb_data_to_sb) */
  $handler->display->display_options['relationships']['field_sb_data_to_sb_nid']['id'] = 'field_sb_data_to_sb_nid';
  $handler->display->display_options['relationships']['field_sb_data_to_sb_nid']['table'] = 'node_data_field_sb_data_to_sb';
  $handler->display->display_options['relationships']['field_sb_data_to_sb_nid']['field'] = 'field_sb_data_to_sb_nid';
  /* Field: Node: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Data';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['path'] = '[view_node]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  /* Field: Node: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  /* Field: Node: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['path'] = '[view_node]';
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  /* Argument: Node: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_sb_data_to_sb_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sensor_board_data' => 'sensor_board_data',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Content: Processing Status (field_sb_data_process_status) */
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['id'] = 'field_sb_data_process_status_value';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['table'] = 'node_data_field_sb_data_process_status';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['field'] = 'field_sb_data_process_status_value';

  /* Display: block_table_sensor_board_data_not_processed */
  $handler = $view->new_display('block', 'block_table_sensor_board_data_not_processed', 'block_1');
  $handler->display->display_options['defaults']['items_per_page'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sensor_board_data' => 'sensor_board_data',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Content: Processing Status (field_sb_data_process_status) */
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['id'] = 'field_sb_data_process_status_value';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['table'] = 'node_data_field_sb_data_process_status';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['field'] = 'field_sb_data_process_status_value';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['value'] = 'not processed';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['case'] = 1;

  /* Display: block_table_sensor_board_data_processed */
  $handler = $view->new_display('block', 'block_table_sensor_board_data_processed', 'block_2');
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sensor_board_data' => 'sensor_board_data',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Content: Processing Status (field_sb_data_process_status) */
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['id'] = 'field_sb_data_process_status_value';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['table'] = 'node_data_field_sb_data_process_status';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['field'] = 'field_sb_data_process_status_value';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['value'] = 'processed';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['case'] = 1;

  /* Display: block_sensor_board_data_recently_processed */
  $handler = $view->new_display('block', 'block_sensor_board_data_recently_processed', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recently Processed';
  $handler->display->display_options['defaults']['items_per_page'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Data';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['path'] = '[view_node]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  /* Field: Node: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  /* Field: Node: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['path'] = '[view_node]';
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sensor_board_data' => 'sensor_board_data',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Content: Processing Status (field_sb_data_process_status) */
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['id'] = 'field_sb_data_process_status_value';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['table'] = 'node_data_field_sb_data_process_status';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['field'] = 'field_sb_data_process_status_value';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['value'] = 'processed';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['case'] = 1;

  /* Display: block_sensor_board_data_recent_not_processed */
  $handler = $view->new_display('block', 'block_sensor_board_data_recent_not_processed', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Not Processed';
  $handler->display->display_options['defaults']['items_per_page'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Data';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['path'] = '[view_node]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  /* Field: Node: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  /* Field: Node: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['path'] = '[view_node]';
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sensor_board_data' => 'sensor_board_data',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Content: Processing Status (field_sb_data_process_status) */
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['id'] = 'field_sb_data_process_status_value';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['table'] = 'node_data_field_sb_data_process_status';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['field'] = 'field_sb_data_process_status_value';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['value'] = 'not processed';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['case'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sensor_board_data' => 'sensor_board_data',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Content: Processing Status (field_sb_data_process_status) */
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['id'] = 'field_sb_data_process_status_value';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['table'] = 'node_data_field_sb_data_process_status';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['field'] = 'field_sb_data_process_status_value';
  $handler->display->display_options['path'] = 'sensor-board-data-/processed';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Sensor Board Data Processed';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'primary-links';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sensor_board_data' => 'sensor_board_data',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Content: Processing Status (field_sb_data_process_status) */
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['id'] = 'field_sb_data_process_status_value';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['table'] = 'node_data_field_sb_data_process_status';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['field'] = 'field_sb_data_process_status_value';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['value'] = 'not processed';
  $handler->display->display_options['filters']['field_sb_data_process_status_value']['case'] = 1;
  $handler->display->display_options['path'] = 'sensor-board-data/queue';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Sensor Board Data Queue';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'primary-links';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sensor_board_data' => 'sensor_board_data',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'sensor-board-data';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Sensor Board Data';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  $translatables['shub_sensor_board_data'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort By'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('nothing found'),
    t('Sensor Board'),
    t('Data'),
    t('[view_node]'),
    t('Post date'),
    t('All'),
    t('block_table_sensor_board_data_not_processed'),
    t('block_table_sensor_board_data_processed'),
    t('block_sensor_board_data_recently_processed'),
    t('Recently Processed'),
    t('block_sensor_board_data_recent_not_processed'),
    t('Not Processed'),
    t('Page'),
  );

  $views[$view->name] = $view;

  // Exported view: shub_sensor_boards
  $view = new view;
  $view->name = 'shub_sensor_boards';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Sensor Boards';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sensor_board' => 'sensor_board',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: all_sensor_boards */
  $handler = $view->new_display('block', 'all_sensor_boards', 'block_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'sensor-boards';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Sensor Boards';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  $translatables['shub_sensor_boards'] = array(
    t('Defaults'),
    t('Sensor Boards'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort By'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('all_sensor_boards'),
    t('Page'),
  );

  $views[$view->name] = $view;

  // Exported view: shub_sensor_readings
  $view = new view;
  $view->name = 'shub_sensor_readings';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '50, 100, 200, 500, 1000, 2000, 4000, 6000, 8000, 10000';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'body' => 'body',
    'field_sensor_reading_to_sensor_nid' => 'field_sensor_reading_to_sensor_nid',
    'created' => 'created',
    'view_node' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'body' => array(
      'separator' => '',
    ),
    'field_sensor_reading_to_sensor_nid' => array(
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'view_node' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['label'] = '';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'No readings found.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Relationship: Content: Sensor Board (field_sensor_reading_to_sb) */
  $handler->display->display_options['relationships']['field_sensor_reading_to_sb_nid']['id'] = 'field_sensor_reading_to_sb_nid';
  $handler->display->display_options['relationships']['field_sensor_reading_to_sb_nid']['table'] = 'node_data_field_sensor_reading_to_sb';
  $handler->display->display_options['relationships']['field_sensor_reading_to_sb_nid']['field'] = 'field_sensor_reading_to_sb_nid';
  /* Field: Node: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Temperature';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['path'] = 'node/%1';
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  /* Field: Content: Sensor reference by Sensor Node ID (field_sensor_reading_to_sensor) */
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['id'] = 'field_sensor_reading_to_sensor_nid';
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['table'] = 'node_data_field_sensor_reading_to_sensor';
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['field'] = 'field_sensor_reading_to_sensor_nid';
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['label'] = 'Sensor reference by Sensor Node ID';
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['link_to_node'] = 0;
  /* Field: Node: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  /* Field: Node: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  /* Field: Content: Sensor Board (field_sensor_reading_to_sb) */
  $handler->display->display_options['fields']['field_sensor_reading_to_sb_nid']['id'] = 'field_sensor_reading_to_sb_nid';
  $handler->display->display_options['fields']['field_sensor_reading_to_sb_nid']['table'] = 'node_data_field_sensor_reading_to_sb';
  $handler->display->display_options['fields']['field_sensor_reading_to_sb_nid']['field'] = 'field_sensor_reading_to_sb_nid';
  /* Sort criterion: Node: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Argument: Node: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sensor_reading' => 'sensor_reading',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Data between:';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.created' => 'node.created',
  );
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'minute';
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['default_date'] = '-365 days';
  $handler->display->display_options['filters']['date_filter']['default_to_date'] = 'now';

  /* Display: block_flot_sensor_readings_for_sensor_board */
  $handler = $view->new_display('block', 'block_flot_sensor_readings_for_sensor_board', 'block_2');
  $handler->display->display_options['defaults']['items_per_page'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'charts';
  $handler->display->display_options['style_options']['grouping'] = 'field_sensor_reading_to_sensor_nid';
  $handler->display->display_options['style_options']['width'] = '100%';
  $handler->display->display_options['style_options']['height'] = '700px';
  $handler->display->display_options['style_options']['type'] = array(
    'amcharts' => 'line',
    'flot' => 'line',
    'google-charts' => 'line',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Sensor Board (field_sensor_reading_to_sb) */
  $handler->display->display_options['relationships']['field_sensor_reading_to_sb_nid']['id'] = 'field_sensor_reading_to_sb_nid';
  $handler->display->display_options['relationships']['field_sensor_reading_to_sb_nid']['table'] = 'node_data_field_sensor_reading_to_sb';
  $handler->display->display_options['relationships']['field_sensor_reading_to_sb_nid']['field'] = 'field_sensor_reading_to_sb_nid';
  $handler->display->display_options['relationships']['field_sensor_reading_to_sb_nid']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Temperature';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['body']['alter']['path'] = 'node/%1';
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  /* Field: Content: Sensor reference by Sensor Node ID (field_sensor_reading_to_sensor) */
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['id'] = 'field_sensor_reading_to_sensor_nid';
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['table'] = 'node_data_field_sensor_reading_to_sensor';
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['field'] = 'field_sensor_reading_to_sensor_nid';
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['label_type'] = 'none';
  /* Field: Node: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Argument: Node: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_sensor_reading_to_sb_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;

  /* Display: block_table_sensor_readings_for_sensor_board */
  $handler = $view->new_display('block', 'block_table_sensor_readings_for_sensor_board', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '20, 50, 100, 200, 500, 1000, 2000, 4000, 6000';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Argument: Node: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_sensor_reading_to_sb_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;

  /* Display: page_flot_sensor_readings_all */
  $handler = $view->new_display('page', 'page_flot_sensor_readings_all', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Sensor Readings';
  $handler->display->display_options['defaults']['items_per_page'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'charts';
  $handler->display->display_options['style_options']['grouping'] = 'field_sensor_reading_to_sensor_nid';
  $handler->display->display_options['style_options']['width'] = '100%';
  $handler->display->display_options['style_options']['height'] = '600px';
  $handler->display->display_options['style_options']['type'] = array(
    'amcharts' => 'line',
    'flot' => 'line',
    'google-charts' => 'line',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Temperature';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['path'] = 'node/%1';
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  /* Field: Content: Sensor reference by Sensor Node ID (field_sensor_reading_to_sensor) */
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['id'] = 'field_sensor_reading_to_sensor_nid';
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['table'] = 'node_data_field_sensor_reading_to_sensor';
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['field'] = 'field_sensor_reading_to_sensor_nid';
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['label'] = 'Sensor reference by Sensor Node ID';
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['link_to_node'] = 0;
  /* Field: Node: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'sensor-readings';

  /* Display: block_sensor_readings_all */
  $handler = $view->new_display('block', 'block_sensor_readings_all', 'block_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: block_table_sensor_readings_for_sensor */
  $handler = $view->new_display('block', 'block_table_sensor_readings_for_sensor', 'block_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Sensor reference by Sensor Node ID (field_sensor_reading_to_sensor) */
  $handler->display->display_options['relationships']['field_sensor_reading_to_sensor_nid']['id'] = 'field_sensor_reading_to_sensor_nid';
  $handler->display->display_options['relationships']['field_sensor_reading_to_sensor_nid']['table'] = 'node_data_field_sensor_reading_to_sensor';
  $handler->display->display_options['relationships']['field_sensor_reading_to_sensor_nid']['field'] = 'field_sensor_reading_to_sensor_nid';
  $handler->display->display_options['relationships']['field_sensor_reading_to_sensor_nid']['required'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Argument: Node: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_sensor_reading_to_sensor_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;

  /* Display: block_flot_sensor_readings_for_sensor */
  $handler = $view->new_display('block', 'block_flot_sensor_readings_for_sensor', 'block_5');
  $handler->display->display_options['defaults']['items_per_page'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'charts';
  $handler->display->display_options['style_options']['grouping'] = 'field_sensor_reading_to_sensor_nid';
  $handler->display->display_options['style_options']['width'] = '100%';
  $handler->display->display_options['style_options']['height'] = '600px';
  $handler->display->display_options['style_options']['type'] = array(
    'amcharts' => 'line',
    'flot' => 'line',
    'google-charts' => 'line',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Sensor reference by Sensor Node ID (field_sensor_reading_to_sensor) */
  $handler->display->display_options['relationships']['field_sensor_reading_to_sensor_nid']['id'] = 'field_sensor_reading_to_sensor_nid';
  $handler->display->display_options['relationships']['field_sensor_reading_to_sensor_nid']['table'] = 'node_data_field_sensor_reading_to_sensor';
  $handler->display->display_options['relationships']['field_sensor_reading_to_sensor_nid']['field'] = 'field_sensor_reading_to_sensor_nid';
  $handler->display->display_options['relationships']['field_sensor_reading_to_sensor_nid']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Temperature';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['body']['alter']['path'] = 'node/%1';
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  /* Field: Content: Sensor reference by Sensor Node ID (field_sensor_reading_to_sensor) */
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['id'] = 'field_sensor_reading_to_sensor_nid';
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['table'] = 'node_data_field_sensor_reading_to_sensor';
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['field'] = 'field_sensor_reading_to_sensor_nid';
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['label'] = 'Sensor reference by Sensor Node ID';
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sensor_nid']['link_to_node'] = 0;
  /* Field: Node: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Argument: Node: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_sensor_reading_to_sensor_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;

  /* Display: attachment_table_sensor_readings_all */
  $handler = $view->new_display('attachment', 'attachment_table_sensor_readings_all', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 100;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = 1;
  $handler->display->display_options['inherit_pager'] = 1;
  $handler->display->display_options['render_pager'] = TRUE;
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'block_2' => 0,
    'block_1' => 0,
    'page_1' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
  );

  /* Display: attachment_table_sensor_readings_for_sensor_board */
  $handler = $view->new_display('attachment', 'attachment_table_sensor_readings_for_sensor_board', 'attachment_2');
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 100;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Sensor Board (field_sensor_reading_to_sb) */
  $handler->display->display_options['relationships']['field_sensor_reading_to_sb_nid']['id'] = 'field_sensor_reading_to_sb_nid';
  $handler->display->display_options['relationships']['field_sensor_reading_to_sb_nid']['table'] = 'node_data_field_sensor_reading_to_sb';
  $handler->display->display_options['relationships']['field_sensor_reading_to_sb_nid']['field'] = 'field_sensor_reading_to_sb_nid';
  $handler->display->display_options['relationships']['field_sensor_reading_to_sb_nid']['required'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Argument: Node: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_sensor_reading_to_sb_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = 1;
  $handler->display->display_options['inherit_pager'] = 1;
  $handler->display->display_options['render_pager'] = TRUE;
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'block_2' => 0,
    'block_1' => 0,
    'page_1' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
  );

  /* Display: attachment_table_sensor_readings_for_sensor */
  $handler = $view->new_display('attachment', 'attachment_table_sensor_readings_for_sensor', 'attachment_3');
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 100;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Sensor reference by Sensor Node ID (field_sensor_reading_to_sensor) */
  $handler->display->display_options['relationships']['field_sensor_reading_to_sensor_nid']['id'] = 'field_sensor_reading_to_sensor_nid';
  $handler->display->display_options['relationships']['field_sensor_reading_to_sensor_nid']['table'] = 'node_data_field_sensor_reading_to_sensor';
  $handler->display->display_options['relationships']['field_sensor_reading_to_sensor_nid']['field'] = 'field_sensor_reading_to_sensor_nid';
  $handler->display->display_options['relationships']['field_sensor_reading_to_sensor_nid']['required'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Argument: Node: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_sensor_reading_to_sensor_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = 1;
  $handler->display->display_options['inherit_pager'] = 1;
  $handler->display->display_options['render_pager'] = TRUE;
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'block_2' => 0,
    'block_1' => 0,
    'page_1' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
  );

  /* Display: Block Pie Chart of Sensor Reading by SB */
  $handler = $view->new_display('block', 'Block Pie Chart of Sensor Reading by SB', 'block_charts_readings_all_groupby_sb');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'charts';
  $handler->display->display_options['style_options']['type'] = array(
    'amcharts' => 'line',
    'google-charts' => 'pie',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: SQL Aggregation: Group By Fields */
  $handler->display->display_options['fields']['views_sql_groupedfields']['id'] = 'views_sql_groupedfields';
  $handler->display->display_options['fields']['views_sql_groupedfields']['table'] = 'views_groupby';
  $handler->display->display_options['fields']['views_sql_groupedfields']['field'] = 'views_sql_groupedfields';
  $handler->display->display_options['fields']['views_sql_groupedfields']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_sql_groupedfields']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['views_sql_groupedfields']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_sql_groupedfields']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_sql_groupedfields']['empty_zero'] = 0;
  /* Field: Node: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Temperature';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['path'] = 'node/%1';
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  /* Field: Content: Sensor Board (field_sensor_reading_to_sb) */
  $handler->display->display_options['fields']['field_sensor_reading_to_sb_nid']['id'] = 'field_sensor_reading_to_sb_nid';
  $handler->display->display_options['fields']['field_sensor_reading_to_sb_nid']['table'] = 'node_data_field_sensor_reading_to_sb';
  $handler->display->display_options['fields']['field_sensor_reading_to_sb_nid']['field'] = 'field_sensor_reading_to_sb_nid';
  $handler->display->display_options['fields']['field_sensor_reading_to_sb_nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sb_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sb_nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sb_nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sb_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sb_nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sb_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sensor_reading_to_sb_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sensor_reading_to_sb_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sb_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sb_nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_sensor_reading_to_sb_nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sensor_reading_to_sb_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sb_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sb_nid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_sensor_reading_to_sb_nid']['label_type'] = 'none';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['block_description'] = 'Pie of sensor readings by sensor board';
  $translatables['shub_sensor_readings'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort By'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Text area'),
    t('No readings found.'),
    t('Sensor Board'),
    t('Temperature'),
    t('node/%1'),
    t('Sensor reference by Sensor Node ID'),
    t('Post date'),
    t('Link'),
    t('All'),
    t('Data between:'),
    t('block_flot_sensor_readings_for_sensor_board'),
    t('block_table_sensor_readings_for_sensor_board'),
    t('page_flot_sensor_readings_all'),
    t('All Sensor Readings'),
    t('block_sensor_readings_all'),
    t('block_table_sensor_readings_for_sensor'),
    t('block_flot_sensor_readings_for_sensor'),
    t('attachment_table_sensor_readings_all'),
    t('attachment_table_sensor_readings_for_sensor_board'),
    t('attachment_table_sensor_readings_for_sensor'),
    t('Block Pie Chart of Sensor Reading by SB'),
    t('Group By Fields'),
    t('Pie of sensor readings by sensor board'),
  );

  $views[$view->name] = $view;

  // Exported view: shub_sensors
  $view = new view;
  $view->name = 'shub_sensors';
  $view->description = 'Sensors attached to a sensor board';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Sensors Connected';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['label'] = '';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'No sensors found. <a href="/node/add/sensor">Add a sensor</a>.';
  $handler->display->display_options['empty']['text']['format'] = '3';
  /* Relationship: Content: Sensor Board Parent (field_sensor_to_sb) */
  $handler->display->display_options['relationships']['field_sensor_to_sb_nid']['id'] = 'field_sensor_to_sb_nid';
  $handler->display->display_options['relationships']['field_sensor_to_sb_nid']['table'] = 'node_data_field_sensor_to_sb';
  $handler->display->display_options['relationships']['field_sensor_to_sb_nid']['field'] = 'field_sensor_to_sb_nid';
  $handler->display->display_options['relationships']['field_sensor_to_sb_nid']['required'] = 1;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Sensor Board Parent (field_sensor_to_sb) */
  $handler->display->display_options['fields']['field_sensor_to_sb_nid']['id'] = 'field_sensor_to_sb_nid';
  $handler->display->display_options['fields']['field_sensor_to_sb_nid']['table'] = 'node_data_field_sensor_to_sb';
  $handler->display->display_options['fields']['field_sensor_to_sb_nid']['field'] = 'field_sensor_to_sb_nid';
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Argument: Node: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_sensor_to_sb_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sensor' => 'sensor',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: block_sensors_attached_to_sensor_board */
  $handler = $view->new_display('block', 'block_sensors_attached_to_sensor_board', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_sensor_to_sb_nid' => 'field_sensor_to_sb_nid',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_sensor_to_sb_nid' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Sensor Board Parent (field_sensor_to_sb) */
  $handler->display->display_options['fields']['field_sensor_to_sb_nid']['id'] = 'field_sensor_to_sb_nid';
  $handler->display->display_options['fields']['field_sensor_to_sb_nid']['table'] = 'node_data_field_sensor_to_sb';
  $handler->display->display_options['fields']['field_sensor_to_sb_nid']['field'] = 'field_sensor_to_sb_nid';
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  /* Field: Node: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['delete_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['delete_node']['empty_zero'] = 0;

  /* Display: all_sensors */
  $handler = $view->new_display('block', 'all_sensors', 'block_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Sensor Board Parent (field_sensor_to_sb) */
  $handler->display->display_options['fields']['field_sensor_to_sb_nid']['id'] = 'field_sensor_to_sb_nid';
  $handler->display->display_options['fields']['field_sensor_to_sb_nid']['table'] = 'node_data_field_sensor_to_sb';
  $handler->display->display_options['fields']['field_sensor_to_sb_nid']['field'] = 'field_sensor_to_sb_nid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'sensors';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Sensors';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  $translatables['shub_sensors'] = array(
    t('Defaults'),
    t('Sensors Connected'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort By'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('No sensors found. <a href="/node/add/sensor">Add a sensor</a>.'),
    t('Sensor Board Parent'),
    t('Edit link'),
    t('All'),
    t('block_sensors_attached_to_sensor_board'),
    t('all_sensors'),
    t('Page'),
  );

  $views[$view->name] = $view;

  return $views;
}
