<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function ob_atrium_image_gallery_context_default_contexts() {
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

  $export['spaces-feature-ob_atrium_image_gallery'] = $context;
  return $export;
}
