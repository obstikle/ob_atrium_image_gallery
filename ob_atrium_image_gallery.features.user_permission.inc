<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ob_atrium_image_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: create gallery content
  $permissions['create gallery content'] = array(
    'name' => 'create gallery content',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: create image content
  $permissions['create image content'] = array(
    'name' => 'create image content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete any gallery content
  $permissions['delete any gallery content'] = array(
    'name' => 'delete any gallery content',
    'roles' => array(),
  );

  // Exported permission: delete any image content
  $permissions['delete any image content'] = array(
    'name' => 'delete any image content',
    'roles' => array(),
  );

  // Exported permission: delete own gallery content
  $permissions['delete own gallery content'] = array(
    'name' => 'delete own gallery content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete own image content
  $permissions['delete own image content'] = array(
    'name' => 'delete own image content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own gallery content
  $permissions['edit own gallery content'] = array(
    'name' => 'edit own gallery content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own image content
  $permissions['edit own image content'] = array(
    'name' => 'edit own image content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  // Exported permission: view imagecache ob_atrium_image_gallery-nodeview
  $permissions['view imagecache ob_atrium_image_gallery-nodeview'] = array(
    'name' => 'view imagecache ob_atrium_image_gallery-nodeview',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  // Exported permission: view imagecache ob_atrium_image_gallery-thumbnail
  $permissions['view imagecache ob_atrium_image_gallery-thumbnail'] = array(
    'name' => 'view imagecache ob_atrium_image_gallery-thumbnail',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  // Exported permission: view imagecache ob_atrium_image_gallery-thumbnail-sml
  $permissions['view imagecache ob_atrium_image_gallery-thumbnail-sml'] = array(
    'name' => 'view imagecache ob_atrium_image_gallery-thumbnail-sml',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  return $permissions;
}
