<?php
/**
 * @file
 * spnet_nieuws.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function spnet_nieuws_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function spnet_nieuws_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function spnet_nieuws_node_info() {
  $items = array(
    'nieuws' => array(
      'name' => t('Nieuws'),
      'base' => 'node_content',
      'description' => t('Nieuwsbericht dat op SPNet zichtbaar is voor alle leden'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
