<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _ob_atrium_image_gallery_content_default_fields() {
  $fields = array();

  // Exported field: field_gallery_titleimage
  $fields[] = array(
    'field_name' => 'field_gallery_titleimage',
    'type_name' => 'gallery',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
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
    'type' => 'viewfield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'viewfield',
    'active' => '1',
    'allowed_views' => array(
      'ob_atrium_gallery' => 0,
      'xref' => 0,
      'comments_recent' => 0,
      'tracker' => 0,
      'frontpage' => 0,
      'glossary' => 0,
      'archive' => 0,
      'backlinks' => 0,
      'taxonomy_term' => 0,
      'casetracker_project_options' => 0,
      'casetracker_project_cases' => 0,
      'casetracker_assignee_options' => 0,
      'date_browser' => 0,
      'feeds' => 0,
      'posts_by_term' => 0,
      'og_unread' => 0,
      'og_ghp_ron' => 0,
      'og_members' => 0,
      'og_recent_type_term' => 0,
      'og_members_block' => 0,
      'og_files' => 0,
      'og_search' => 0,
      'og_mytracker' => 0,
      'og_tracker' => 0,
      'og_my' => 0,
      'og' => 0,
      'og_members_faces' => 0,
      'admin_content' => 0,
      'atrium_book_current' => 0,
      'atrium_search' => 0,
      'atrium_taxonomy' => 0,
      'atrium_taxonomy_autocomplete' => 0,
      'litecal' => 0,
      'messaging_shoutbox' => 0,
      'atrium_blog' => 0,
      'atrium_blog_comments' => 0,
      'atrium_book' => 0,
      'atrium_calendar' => 0,
      'atrium_calendar_feed_items' => 0,
      'atrium_calendar_feeds' => 0,
      'atrium_calendar_upcoming' => 0,
      'atrium_casetracker' => 0,
      'atrium_casetracker_projects' => 0,
      'atrium_ct_assignee_options' => 0,
      'atrium_ct_project_options' => 0,
      'atrium_dashboard' => 0,
      'atrium_groups' => 0,
      'atrium_members' => 0,
      'atrium_profile' => 0,
      'atrium_shoutbox' => 0,
      'atrium_shoutbox_shouts' => 0,
      'atrium_shoutbox_unread' => 0,
      'atrium_shoutbox_users' => 0,
      'feed_admin' => 0,
    ),
    'super_default' => 0,
    'token_enabled' => 0,
    'super_default_widget' => array(
      'vname' => 'ob_atrium_gallery|default',
      'vargs' => '%nid',
    ),
    'widget' => array(
      'force_default' => 1,
      'label' => 'Title Image',
      'weight' => '-4',
      'description' => '',
      'type' => 'viewfield_select',
      'module' => 'viewfield',
    ),
  );

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
      'feed' => 0,
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
      'label' => 'Gallery Reference',
      'weight' => '-3',
      'description' => '',
      'type' => 'nodereference_url',
      'module' => 'nodereference_url',
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
      'feed' => 0,
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
        'format' => 'ob_gallery-thumbnail_default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'ob_gallery-nodeview_imagelink',
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
    t('Title Image'),
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
  $context->name = 'spaces-feature-ob_atrium_gallery';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        '0' => 'gallery',
        '1' => 'image',
      ),
      'options' => array(),
    ),
    'views' => array(
      'values' => array(
        '0' => 'ob_atrium_gallery',
      ),
      'options' => array(),
    ),
  );
  $context->reactions = array(
    'menu' => 'gallery',
    'block' => array(
      'blocks' => array(
        'views-ob_atrium_gallery-block_1' => array(
          'module' => 'views',
          'delta' => 'ob_atrium_gallery-block_1',
          'weight' => 35,
          'region' => 'right',
          'status' => '0',
          'label' => 'Parent Gallery',
          'type' => 'context_ui',
        ),
        'views-ob_atrium_gallery-block_2' => array(
          'module' => 'views',
          'delta' => 'ob_atrium_gallery-block_2',
          'weight' => 36,
          'region' => 'right',
          'status' => '0',
          'label' => 'Sub-Galleries',
          'type' => 'context_ui',
        ),
        'views-ob_atrium_gallery-block_3' => array(
          'module' => 'views',
          'delta' => 'ob_atrium_gallery-block_3',
          'weight' => 37,
          'region' => 'right',
          'status' => '0',
          'label' => 'Gallery Comments',
          'type' => 'context_ui',
        ),
        'views-ob_atrium_gallery-block_4' => array(
          'module' => 'views',
          'delta' => 'ob_atrium_gallery-block_4',
          'weight' => 38,
          'region' => 'right',
          'status' => '0',
          'label' => 'Gallery Image Browser',
          'type' => 'context_ui',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['spaces-feature-ob_atrium_gallery'] = array(

  );

  $export['spaces-feature-ob_atrium_gallery'] = $context;
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
    'ob_gallery-nodeview' => array(
      'presetname' => 'ob_gallery-nodeview',
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
    'ob_gallery-thumbnail' => array(
      'presetname' => 'ob_gallery-thumbnail',
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
    'ob_gallery-thumbnail-sml' => array(
      'presetname' => 'ob_gallery-thumbnail-sml',
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
