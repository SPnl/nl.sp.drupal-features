<?php
/**
 * @file
 * spnet_content_persoon.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function spnet_content_persoon_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_spnet_person';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_spnet_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_spnet_person';
  $strongarm->value = '[node:field-spnet-person-ref-group] [node:field-spnet-person-firstname] [node:field_spnet_person_suffix_lastnm] [node:field-spnet-person-lastname] ';
  $export['auto_entitylabel_pattern_node_spnet_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_spnet_person';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_spnet_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_spnet_person';
  $strongarm->value = 0;
  $export['comment_anonymous_spnet_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_spnet_person';
  $strongarm->value = 1;
  $export['comment_default_mode_spnet_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_spnet_person';
  $strongarm->value = '50';
  $export['comment_default_per_page_spnet_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_spnet_person';
  $strongarm->value = 1;
  $export['comment_form_location_spnet_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_spnet_person';
  $strongarm->value = '1';
  $export['comment_preview_spnet_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_spnet_person';
  $strongarm->value = '2';
  $export['comment_spnet_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_spnet_person';
  $strongarm->value = 1;
  $export['comment_subject_field_spnet_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__spnet_person';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'spnet_kandidaat' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'redirect' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__spnet_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_spnet_person';
  $strongarm->value = '0';
  $export['language_content_type_spnet_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_spnet_person';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_spnet_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_spnet_person';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_spnet_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_spnet_person';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_spnet_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_spnet_person';
  $strongarm->value = '1';
  $export['node_preview_spnet_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_spnet_person';
  $strongarm->value = 0;
  $export['node_submitted_spnet_person'] = $strongarm;

  return $export;
}
