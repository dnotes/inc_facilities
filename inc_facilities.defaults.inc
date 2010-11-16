<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _inc_facilities_content_default_fields() {
  $fields = array();

  // Exported field: field_gallery
  $fields[] = array(
    'field_name' => 'field_gallery',
    'type_name' => 'facility',
    'display_settings' => array(
      'weight' => '6',
      'parent' => 'group_images',
      'token' => array(
        'format' => 'facility-gallery_default',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '3' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'facility-gallery_default',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'facility-gallery_imagelink',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'images/gallery',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'filefield_sources' => array(
        'remote' => 'remote',
        'reference' => 'reference',
      ),
      'filefield_source_autocomplete' => '0',
      'label' => 'Gallery Images',
      'weight' => '6',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_main_image
  $fields[] = array(
    'field_name' => 'field_main_image',
    'type_name' => 'facility',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'token' => array(
        'format' => 'facility-main_default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'facility-gallery_linked',
        'exclude' => 1,
      ),
      '3' => array(
        'format' => 'facility-gallery_linked',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'facility-main_default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'facility-gallery_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'facility-main_imagelink',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'images/main',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'filefield_sources' => array(
        'remote' => 'remote',
        'reference' => 'reference',
      ),
      'filefield_source_autocomplete' => '1',
      'label' => 'Main Image',
      'weight' => '-4',
      'description' => '<ul><li>640px minimum for good display</li>
<li>Will display on page, teaser and rss feeds</li></ul>',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  array(
    t('Gallery Images'),
    t('Main Image'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _inc_facilities_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_fieldgroup_default_groups().
 */
function _inc_facilities_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_images
  $groups[] = array(
    'group_type' => 'standard',
    'type_name' => 'facility',
    'group_name' => 'group_images',
    'label' => 'Image Gallery',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-1',
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
      ),
    ),
    'weight' => '-1',
    'fields' => array(
      '0' => 'field_gallery',
    ),
  );

  // Translatables
  array(
    t('Image Gallery'),
  );

  return $groups;
}

/**
 * Helper to implementation of hook_imagecache_default_presets().
 */
function _inc_facilities_imagecache_default_presets() {
  $items = array(
    'facility-gallery' => array(
      'presetname' => 'facility-gallery',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '80',
            'height' => '80',
          ),
        ),
      ),
    ),
    'facility-main' => array(
      'presetname' => 'facility-main',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '280',
            'height' => '280',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _inc_facilities_user_default_permissions() {
  $permissions = array();

  // Exported permission: create facility content
  $permissions[] = array(
    'name' => 'create facility content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: delete any facility content
  $permissions[] = array(
    'name' => 'delete any facility content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: delete own facility content
  $permissions[] = array(
    'name' => 'delete own facility content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any facility content
  $permissions[] = array(
    'name' => 'edit any facility content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: view imagecache facility-gallery
  $permissions[] = array(
    'name' => 'view imagecache facility-gallery',
    'roles' => array(),
  );

  // Exported permission: view imagecache facility-main
  $permissions[] = array(
    'name' => 'view imagecache facility-main',
    'roles' => array(),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _inc_facilities_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_facility';
  $strongarm->value = 0;

  $export['comment_anonymous_facility'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_facility';
  $strongarm->value = '3';

  $export['comment_controls_facility'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_facility';
  $strongarm->value = '4';

  $export['comment_default_mode_facility'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_facility';
  $strongarm->value = '1';

  $export['comment_default_order_facility'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_facility';
  $strongarm->value = '50';

  $export['comment_default_per_page_facility'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_facility';
  $strongarm->value = '0';

  $export['comment_facility'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_facility';
  $strongarm->value = '0';

  $export['comment_form_location_facility'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_facility';
  $strongarm->value = '1';

  $export['comment_preview_facility'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_facility';
  $strongarm->value = '1';

  $export['comment_subject_field_facility'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_facility';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '3',
    'author' => '2',
    'options' => '4',
    'comment_settings' => '5',
    'menu' => '0',
    'path' => '1',
    'locations' => '-3',
  );

  $export['content_extra_weights_facility'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_facility';
  $strongarm->value = 'form-38f3c54e57c255c6e9c12cffeb284976';

  $export['form_build_id_facility'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_facility';
  $strongarm->value = '1';

  $export['location_defaultnum_facility'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_facility';
  $strongarm->value = '1';

  $export['location_maxnum_facility'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_facility';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '1',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '-3',
      'collapsible' => 0,
      'collapsed' => 0,
      'fields' => array(
        'name' => array(
          'collect' => '2',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '2',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '2',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '2',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '2',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '-3',
      'hide' => array(
        'country' => 'country',
        'locpick' => 'locpick',
        'province_name' => 'province_name',
        'country_name' => 'country_name',
        'map_link' => 'map_link',
        'coords' => 'coords',
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );

  $export['location_settings_node_facility'] = $strongarm;
  return $export;
}
