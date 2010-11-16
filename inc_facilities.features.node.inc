<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _inc_facilities_node_info() {
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
