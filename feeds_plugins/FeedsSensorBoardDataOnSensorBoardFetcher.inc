<?php
/* 
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

function shub_feed_on_sensor_board__sb_data_to_sensor_readings__fetch($sensor_board) {

  // Get all Sensor Board Data nodes for this Sensor Board that are not marked as
  // processed.
  $query = "SELECT node.nid AS nid, node_revisions.body AS node_revisions_body, node_revisions.format AS node_revisions_format, node.created AS node_created, node.uid AS node_uid, node.type AS node_type FROM node node  LEFT JOIN content_type_sensor_board_data node_data_field_sb_data_to_sb ON node.vid = node_data_field_sb_data_to_sb.vid INNER JOIN node node_node_data_field_sb_data_to_sb ON node_data_field_sb_data_to_sb.field_sb_data_to_sb_nid = node_node_data_field_sb_data_to_sb.nid LEFT JOIN content_type_sensor_board_data node_data_field_sb_data_process_status ON node.vid = node_data_field_sb_data_process_status.vid LEFT JOIN node_revisions node_revisions ON node.vid = node_revisions.vid WHERE (node.type in ('sensor_board_data')) AND ((node_data_field_sb_data_process_status.field_sb_data_process_status_value) = ('not processed')) AND (node_node_data_field_sb_data_to_sb.nid = %d)";
  $result = db_query($query, $sensor_board->nid);

  // Put each
  while($sensor_board_data = db_fetch_array($result) ) {
    $sensor_board_data = node_load($sensor_board_data['nid']);
    $sensor_board_data->sensor_board = $sensor_board;
    $sensor_board_data_fetched[] = $sensor_board_data;
  }
  
  return $sensor_board_data_fetched;
}

