<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ob_atrium_image_gallery_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function ob_atrium_image_gallery_imagecache_default_presets() {
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
 * Implementation of hook_node_info().
 */
function ob_atrium_image_gallery_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Gallery'),
      'module' => 'features',
      'description' => t('A gallery that image and other gallery nodes can reference.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'image' => array(
      'name' => t('Image'),
      'module' => 'features',
      'description' => t('For uploading images. Image nodes can reference a gallery.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ob_atrium_image_gallery_views_api() {
  return array(
    'api' => '2',
  );
}
