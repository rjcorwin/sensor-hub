<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function shub_sensor_hub_groups_public_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "spaces" && $api == "spaces") {
    return array("version" => 3);
  }
}
