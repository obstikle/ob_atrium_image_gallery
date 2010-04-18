<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _ob_atrium_image_gallery_content_default_fields() {
  $fields = array();

  // Exported field: field_galleryreference
  $fields[] = array(
    'field_name' => 'field_galleryreference',
    'type_name' => 'gallery',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'gallery' => 'gallery',
      'blog' => 0,
      'book' => 0,
      'casetracker_basic_case' => 0,
      'event' => 0,
      'group' => 0,
      'image' => 0,
      'profile' => 0,
      'casetracker_basic_project' => 0,
      'shoutbox' => 0,
      'feed_ical_item' => 0,
      'feed_ical' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'node_link' => array(
        'teaser' => 0,
        'full' => 1,
        'title' => 'Add sub-gallery',
        'hover_title' => 'Add a sub-gallery to this gallery',
        'destination' => 'default',
      ),
      'fallback' => 'select',
      'edit_fallback' => NULL,
      'label' => 'Gallery Reference',
      'weight' => '-3',
      'description' => '',
      'type' => 'nodereference_url',
      'module' => 'nodereference_url',
    ),
  );

  // Exported field: field_imagereference
  $fields[] = array(
    'field_name' => 'field_imagereference',
    'type_name' => 'gallery',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'image' => 'image',
      'blog' => 0,
      'book' => 0,
      'casetracker_basic_case' => 0,
      'event' => 0,
      'gallery' => 0,
      'group' => 0,
      'profile' => 0,
      'casetracker_basic_project' => 0,
      'shoutbox' => 0,
      'feed_ical_item' => 0,
      'feed_ical' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_imagereference][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Images',
      'weight' => 0,
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_galleryreference
  $fields[] = array(
    'field_name' => 'field_galleryreference',
    'type_name' => 'image',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'gallery' => 'gallery',
      'blog' => 0,
      'book' => 0,
      'casetracker_basic_case' => 0,
      'event' => 0,
      'group' => 0,
      'image' => 0,
      'profile' => 0,
      'casetracker_basic_project' => 0,
      'shoutbox' => 0,
      'feed_ical_item' => 0,
      'feed_ical' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'node_link' => array(
        'teaser' => 0,
        'full' => 1,
        'title' => 'Add image',
        'hover_title' => 'Upload an image to this gallery',
        'destination' => 'node',
      ),
      'fallback' => 'select',
      'edit_fallback' => 0,
      'label' => 'Gallery Reference',
      'weight' => '-3',
      'description' => '',
      'type' => 'nodereference_url',
      'module' => 'nodereference_url',
    ),
  );

  // Exported field: field_imagefile
  $fields[] = array(
    'field_name' => 'field_imagefile',
    'type_name' => 'image',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'ob_atrium_image_gallery-thumbnail_default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'ob_atrium_image_gallery-nodeview_linked',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '1',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'images/[site-date-yyyy]-[site-date-mon]',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '8MB',
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
      'label' => 'Image',
      'weight' => '-2',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  array(
    t('Gallery Reference'),
    t('Image'),
    t('Images'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _ob_atrium_image_gallery_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'spaces-feature-ob_atrium_image_gallery';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'gallery' => 'gallery',
        'image' => 'image',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'views' => array(
      'values' => array(
        'ob_atrium_image_gallery' => 'ob_atrium_image_gallery',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ob_atrium_image_gallery-block_1' => array(
          'module' => 'views',
          'delta' => 'ob_atrium_image_gallery-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-ob_atrium_image_gallery-block_2' => array(
          'module' => 'views',
          'delta' => 'ob_atrium_image_gallery-block_2',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-ob_atrium_image_gallery-block_4' => array(
          'module' => 'views',
          'delta' => 'ob_atrium_image_gallery-block_4',
          'region' => 'right',
          'weight' => 2,
        ),
        'views-ob_atrium_image_gallery-block_3' => array(
          'module' => 'views',
          'delta' => 'ob_atrium_image_gallery-block_3',
          'region' => 'right',
          'weight' => 3,
        ),
      ),
    ),
    'menu' => 'gallery',
  );
  $context->condition_mode = 0;

  $translatables['spaces-feature-ob_atrium_image_gallery'] = array(

  );

  $export['spaces-feature-ob_atrium_image_gallery'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _ob_atrium_image_gallery_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  else if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_imagecache_default_presets().
 */
function _ob_atrium_image_gallery_imagecache_default_presets() {
  $items = array(
    'ob_atrium_image_gallery-nodeview' => array(
      'presetname' => 'ob_atrium_image_gallery-nodeview',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '600',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'ob_atrium_image_gallery-thumbnail' => array(
      'presetname' => 'ob_atrium_image_gallery-thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '80%',
            'height' => '80%',
            'xoffset' => 'center',
            'yoffset' => 'center',
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '150',
            'height' => '150',
          ),
        ),
      ),
    ),
    'ob_atrium_image_gallery-thumbnail-sml' => array(
      'presetname' => 'ob_atrium_image_gallery-thumbnail-sml',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '75%',
            'height' => '75%',
            'xoffset' => 'center',
            'yoffset' => 'center',
          ),
        ),
        '1' => array(
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
  );
  return $items;
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _ob_atrium_image_gallery_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Gallery',
    'path' => 'gallery',
    'weight' => '0',
    'description' => 'The gallery lets you upload and organise images',
  );
  // Translatables
  array(
    t('Gallery'),
    t('The gallery lets you upload and organise images'),
  );


  return $items;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _ob_atrium_image_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: create gallery content
  $permissions[] = array(
    'name' => 'create gallery content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'all',
      '2' => 'half manager',
      '3' => 'manager',
    ),
  );

  // Exported permission: create image content
  $permissions[] = array(
    'name' => 'create image content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'all',
      '2' => 'authenticated user',
      '3' => 'half manager',
      '4' => 'manager',
    ),
  );

  // Exported permission: delete own gallery content
  $permissions[] = array(
    'name' => 'delete own gallery content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'all',
      '2' => 'authenticated user',
      '3' => 'half manager',
      '4' => 'manager',
    ),
  );

  // Exported permission: delete own image content
  $permissions[] = array(
    'name' => 'delete own image content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'all',
      '2' => 'authenticated user',
      '3' => 'half manager',
      '4' => 'manager',
    ),
  );

  // Exported permission: edit own gallery content
  $permissions[] = array(
    'name' => 'edit own gallery content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'all',
      '2' => 'authenticated user',
      '3' => 'half manager',
      '4' => 'manager',
    ),
  );

  // Exported permission: edit own image content
  $permissions[] = array(
    'name' => 'edit own image content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'all',
      '2' => 'authenticated user',
      '3' => 'half manager',
      '4' => 'manager',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _ob_atrium_image_gallery_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_gallery';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-1',
    'revision_information' => '4',
    'comment_settings' => '5',
    'menu' => '-2',
    'book' => '2',
    'attachments' => '6',
    'og_nodeapi' => '1',
    'ob_atrium_gallery_node_content_1' => '3',
  );

  $export['content_extra_weights_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_gallery';
  $strongarm->value = array(
    '0' => 'status',
    '1' => 'promote',
  );

  $export['node_options_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_image';
  $strongarm->value = array(
    '0' => 'status',
  );

  $export['node_options_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_gallery';
  $strongarm->value = 'group_post_standard';

  $export['og_content_type_usage_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_image';
  $strongarm->value = 'group_post_standard';

  $export['og_content_type_usage_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xref_view_gallery';
  $strongarm->value = 0;

  $export['xref_view_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xref_view_image';
  $strongarm->value = 0;

  $export['xref_view_image'] = $strongarm;
  return $export;
}
