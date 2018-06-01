<?php
/**
 * @file
 * content_civinews.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_civinews_node_info() {
  $items = array(
    'news' => array(
      'name' => t('CiviCRM-nieuwsitem'),
      'base' => 'node_content',
      'description' => t('CiviCRM-nieuwsitems verschijnen op het dashboard van CiviCRM-gebruikers.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
