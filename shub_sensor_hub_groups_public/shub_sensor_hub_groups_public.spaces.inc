<?php

/**
 * Implementation of hook_spaces_presets().
 */
function shub_sensor_hub_groups_public_spaces_presets() {
  $export = array();

  $spaces_presets = new stdClass;
  $spaces_presets->disabled = FALSE; /* Edit this to true to make a default spaces_presets disabled initially */
  $spaces_presets->api_version = 3;
  $spaces_presets->name = 'sensor_hub_groups_public';
  $spaces_presets->title = 'Public Sensor Hub group';
  $spaces_presets->description = 'A public sensor hub group is accessible to all users on the site. Users can join and leave public groups freely.';
  $spaces_presets->space_type = 'og';
  $spaces_presets->value = array(
    'variable' => array(
      'spaces_features' => array(
        'atrium_blog' => '0',
        'atrium_book' => '0',
        'atrium_calendar' => '0',
        'atrium_casetracker' => '0',
        'atrium_members' => '1',
        'atrium_shoutbox' => '0',
        'spaces_dashboard' => '1',
      ),
      'site_frontpage' => 'dashboard',
      'spaces_dashboard_custom' => array(
        'custom-1' => 'Dashboard',
      ),
      'spaces_og_selective' => 0,
      'spaces_og_directory' => 1,
      'spaces_og_register' => 1,
      'spaces_og_private' => 0,
      'designkit_color' => array(
        'background' => '#969696',
      ),
      'space_menu_items' => array(
        'dashboard' => -20,
        'blog' => -19,
        'notebook' => -18,
        'casetracker' => -17,
        'shoutbox' => -16,
        'calendar' => -15,
        'members' => -14,
      ),
      'site_frontpage_path' => 'dashboard',
      'designkit_image' => array(
        'logo' => 0,
      ),
    ),
    'context' => array(
      'spaces_dashboard-custom-1:reaction:block' => array(
        'blocks' => array(
          'atrium-welcome_member' => array(
            'module' => 'atrium',
            'delta' => 'welcome_member',
            'region' => 'content',
            'weight' => 0,
          ),
          'views-activity_listing-block_1' => array(
            'module' => 'views',
            'delta' => 'activity_listing-block_1',
            'region' => 'content',
            'weight' => 1,
          ),
          'views-blog_comments-block_1' => array(
            'module' => 'views',
            'delta' => 'blog_comments-block_1',
            'region' => 'right',
            'weight' => 0,
          ),
        ),
      ),
      'spaces_dashboard-custom-2:reaction:block' => array(
        'blocks' => array(),
      ),
      'spaces_dashboard-custom-3:reaction:block' => array(
        'blocks' => array(),
      ),
      'spaces_dashboard-custom-4:reaction:block' => array(
        'blocks' => array(),
      ),
      'spaces_dashboard-custom-5:reaction:block' => array(
        'blocks' => array(),
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A public sensor hub group is accessible to all users on the site. Users can join and leave public groups freely.');
  t('Public Sensor Hub group');
  $export['sensor_hub_groups_public'] = $spaces_presets;

  return $export;
}
