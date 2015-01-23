<?php
/**
 * @file
 * profile2_spnet.features.inc
 */

/**
 * Implements hook_default_profile2_type().
 */
function profile2_spnet_default_profile2_type() {
  $items = array();
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "main",
    "label" : "Profiel",
    "weight" : "0",
    "data" : { "registration" : 0 },
    "rdf_mapping" : []
  }');
  return $items;
}
