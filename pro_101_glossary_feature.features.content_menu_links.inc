<?php
/**
 * @file
 * pro_101_glossary_feature.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function pro_101_glossary_feature_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: menu-auxiliary:glossary
  $menu_links['menu-auxiliary:glossary'] = array(
    'menu_name' => 'menu-auxiliary',
    'link_path' => 'glossary',
    'router_path' => 'glossary',
    'link_title' => 'Glossary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Glossary');


  return $menu_links;
}
