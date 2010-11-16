<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function inc_facilities_user_default_permissions() {
  $permissions = array();

  // Exported permission: create facility content
  $permissions['create facility content'] = array(
    'name' => 'create facility content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any facility content
  $permissions['delete any facility content'] = array(
    'name' => 'delete any facility content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own facility content
  $permissions['delete own facility content'] = array(
    'name' => 'delete own facility content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any facility content
  $permissions['edit any facility content'] = array(
    'name' => 'edit any facility content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own facility content
  $permissions['edit own facility content'] = array(
    'name' => 'edit own facility content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
