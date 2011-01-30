<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function ob_atrium_image_gallery_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:gallery
  $menu_links['features:gallery'] = array(
    'menu_name' => 'features',
    'link_path' => 'gallery',
    'router_path' => 'gallery',
    'link_title' => 'Gallery',
    'options' => array(
      'attributes' => array(
        'title' => 'The gallery lets you upload and organise images',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Gallery');


  return $menu_links;
}
