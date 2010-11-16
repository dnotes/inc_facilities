<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function inc_facilities_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function inc_facilities_node_info() {
  $items = array(
    'facility' => array(
      'name' => t('Facility'),
      'module' => 'features',
      'description' => t('A Baha\'i Center or other public facility often used for community events.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
