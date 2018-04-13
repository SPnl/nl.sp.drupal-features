<?php
/**
 * @file
 * spnet_nieuws.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function spnet_nieuws_taxonomy_default_vocabularies() {
  return array(
    'nieuwscategorie' => array(
      'name' => 'Nieuwscategorie',
      'machine_name' => 'nieuwscategorie',
      'description' => 'Categorie voor nieuwsbericht',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
