<?php
/**
 * @file
 * spnet_content_persoon.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function spnet_content_persoon_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function spnet_content_persoon_node_info() {
  $items = array(
    'spnet_person' => array(
      'name' => t('Persoon'),
      'base' => 'node_content',
      'description' => t('Weergave van belangrijke personen in de organisatie'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
