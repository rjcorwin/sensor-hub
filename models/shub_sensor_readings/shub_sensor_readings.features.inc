<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function shub_sensor_readings_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "data" && $api == "data_default") {
    return array("version" => 1);
  }
}
