<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ob_atrium_image_gallery_content_default_fields() {
  module_load_include('inc', 'ob_atrium_image_gallery', 'ob_atrium_image_gallery.defaults');
  $args = func_get_args();
  return call_user_func_array('_ob_atrium_image_gallery_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function ob_atrium_image_gallery_context_default_contexts() {
  module_load_include('inc', 'ob_atrium_image_gallery', 'ob_atrium_image_gallery.defaults');
  $args = func_get_args();
  return call_user_func_array('_ob_atrium_image_gallery_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ob_atrium_image_gallery_ctools_plugin_api() {
  module_load_include('inc', 'ob_atrium_image_gallery', 'ob_atrium_image_gallery.defaults');
  $args = func_get_args();
  return call_user_func_array('_ob_atrium_image_gallery_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function ob_atrium_image_gallery_imagecache_default_presets() {
  module_load_include('inc', 'ob_atrium_image_gallery', 'ob_atrium_image_gallery.defaults');
  $args = func_get_args();
  return call_user_func_array('_ob_atrium_image_gallery_imagecache_default_presets', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function ob_atrium_image_gallery_menu_default_items() {
  module_load_include('inc', 'ob_atrium_image_gallery', 'ob_atrium_image_gallery.defaults');
  $args = func_get_args();
  return call_user_func_array('_ob_atrium_image_gallery_menu_default_items', $args);
}

/**
 * Implementation of hook_node_info().
 */
function ob_atrium_image_gallery_node_info() {
  module_load_include('inc', 'ob_atrium_image_gallery', 'ob_atrium_image_gallery.features.node');
  $args = func_get_args();
  return call_user_func_array('_ob_atrium_image_gallery_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function ob_atrium_image_gallery_user_default_permissions() {
  module_load_include('inc', 'ob_atrium_image_gallery', 'ob_atrium_image_gallery.defaults');
  $args = func_get_args();
  return call_user_func_array('_ob_atrium_image_gallery_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function ob_atrium_image_gallery_strongarm() {
  module_load_include('inc', 'ob_atrium_image_gallery', 'ob_atrium_image_gallery.defaults');
  $args = func_get_args();
  return call_user_func_array('_ob_atrium_image_gallery_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function ob_atrium_image_gallery_views_default_views() {
  module_load_include('inc', 'ob_atrium_image_gallery', 'ob_atrium_image_gallery.features.views');
  $args = func_get_args();
  return call_user_func_array('_ob_atrium_image_gallery_views_default_views', $args);
}
