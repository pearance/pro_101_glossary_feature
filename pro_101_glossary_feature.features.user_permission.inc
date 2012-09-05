<?php
/**
 * @file
 * pro_101_glossary_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pro_101_glossary_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: access lexicon.
  $permissions['access lexicon'] = array(
    'name' => 'access lexicon',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'assistant',
      2 => 'authenticated user',
      3 => 'developer',
      4 => 'professional',
      5 => 'support',
    ),
    'module' => 'lexicon',
  );

  // Exported permission: administer lexicon.
  $permissions['administer lexicon'] = array(
    'name' => 'administer lexicon',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'lexicon',
  );

  // Exported permission: delete terms in glossary.
  $permissions['delete terms in glossary'] = array(
    'name' => 'delete terms in glossary',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in glossary.
  $permissions['edit terms in glossary'] = array(
    'name' => 'edit terms in glossary',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
