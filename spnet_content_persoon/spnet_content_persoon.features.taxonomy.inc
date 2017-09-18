<?php
/**
 * @file
 * spnet_content_persoon.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function spnet_content_persoon_taxonomy_default_vocabularies() {
  return array(
    'spnet_person_group' => array(
      'name' => 'Spnet person group',
      'machine_name' => 'spnet_person_group',
      'description' => 'Groepen van personen',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
