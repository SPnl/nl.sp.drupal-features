<?php
/**
 * @file
 * spnet_content_persoon.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function spnet_content_persoon_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'full_name';
  $ds_field->label = 'Full name';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'spnet_person|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '[node:field-spnet-person-firstname] [node:field-spnet-person-suffix-lastnm] [node:field-spnet-person-lastname]',
      'format' => 'plain_text',
    ),
    'use_token' => 1,
  );
  $export['full_name'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function spnet_content_persoon_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'spnet_kandidaat';
  $ds_view_mode->label = 'spnet kandidaat';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['spnet_kandidaat'] = $ds_view_mode;

  return $export;
}
