<?php
/**
 * @file
 * spnet_content_persoon.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function spnet_content_persoon_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'kandidaten_partijbestuur_2015';
  $page->task = 'page';
  $page->admin_title = 'Kandidaten partijbestuur 2015';
  $page->admin_description = '';
  $page->path = 'congres/2015/kandidaten-partijbestuur';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_kandidaten_partijbestuur_2015__panel';
  $handler->task = 'page';
  $handler->subtask = 'kandidaten_partijbestuur_2015';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => 'content',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
    'style' => 'clean_element',
  );
  $display->cache = array();
  $display->title = 'Kandidaten partijbestuur';
  $display->uuid = 'ef5ed676-edcc-443a-98e7-eb9a4fb4d2ad';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ed04e411-cbcc-4ad5-b3c9-e780f80da672';
    $pane->panel = 'left';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '220',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'spnet_kandidaat',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ed04e411-cbcc-4ad5-b3c9-e780f80da672';
    $display->content['new-ed04e411-cbcc-4ad5-b3c9-e780f80da672'] = $pane;
    $display->panels['left'][0] = 'new-ed04e411-cbcc-4ad5-b3c9-e780f80da672';
    $pane = new stdClass();
    $pane->pid = 'new-dcddb297-9150-42eb-8b3a-f869ba64fdd3';
    $pane->panel = 'right';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '222',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'spnet_kandidaat',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dcddb297-9150-42eb-8b3a-f869ba64fdd3';
    $display->content['new-dcddb297-9150-42eb-8b3a-f869ba64fdd3'] = $pane;
    $display->panels['right'][0] = 'new-dcddb297-9150-42eb-8b3a-f869ba64fdd3';
    $pane = new stdClass();
    $pane->pid = 'new-216f082f-b91e-46bc-9860-26b46f1f0be7';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Dit zijn onze kandidaten voor het partijbestuur.</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '216f082f-b91e-46bc-9860-26b46f1f0be7';
    $display->content['new-216f082f-b91e-46bc-9860-26b46f1f0be7'] = $pane;
    $display->panels['top'][0] = 'new-216f082f-b91e-46bc-9860-26b46f1f0be7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ed04e411-cbcc-4ad5-b3c9-e780f80da672';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['kandidaten_partijbestuur_2015'] = $page;

  return $pages;

}
