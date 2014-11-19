<?php
/**
 * @file
 * views_cursussen.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_cursussen_views_default_views() {
	$export = array();

	$view = new view();
	$view->name = 'cursussen';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'civicrm_event';
	$view->human_name = 'Cursussen';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

	/* Display: Master */
	$handler = $view->new_display('default', 'Master', 'default');
	$handler->display->display_options['title'] = 'Cursussen';
	$handler->display->display_options['use_more_always'] = FALSE;
	$handler->display->display_options['use_more_text'] = 'meer';
	$handler->display->display_options['access']['type'] = 'role';
	$handler->display->display_options['access']['role'] = array(
		2 => '2',
	);
	$handler->display->display_options['cache']['type'] = 'none';
	$handler->display->display_options['query']['type'] = 'views_query';
	$handler->display->display_options['exposed_form']['type'] = 'basic';
	$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
	$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
	$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
	$handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
	$handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
	$handler->display->display_options['pager']['type'] = 'full';
	$handler->display->display_options['pager']['options']['items_per_page'] = '20';
	$handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
	$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
	$handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
	$handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
	$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
	$handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
	$handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
	$handler->display->display_options['style_plugin'] = 'list';
	$handler->display->display_options['row_plugin'] = 'fields';
	/* Veld: CiviCRM Events: Titel */
	$handler->display->display_options['fields']['title']['id'] = 'title';
	$handler->display->display_options['fields']['title']['table'] = 'civicrm_event';
	$handler->display->display_options['fields']['title']['field'] = 'title';
	$handler->display->display_options['fields']['title']['label'] = '';
	$handler->display->display_options['fields']['title']['element_type'] = 'h2';
	$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
	/* Veld: CiviCRM Events: Begindatum */
	$handler->display->display_options['fields']['start_date']['id'] = 'start_date';
	$handler->display->display_options['fields']['start_date']['table'] = 'civicrm_event';
	$handler->display->display_options['fields']['start_date']['field'] = 'start_date';
	$handler->display->display_options['fields']['start_date']['label'] = '';
	$handler->display->display_options['fields']['start_date']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['start_date']['element_wrapper_type'] = 'h4';
	$handler->display->display_options['fields']['start_date']['element_wrapper_class'] = 'event-date';
	$handler->display->display_options['fields']['start_date']['element_default_classes'] = FALSE;
	$handler->display->display_options['fields']['start_date']['date_format'] = 'custom';
	$handler->display->display_options['fields']['start_date']['custom_date_format'] = 'l d-m-Y H:i';
	$handler->display->display_options['fields']['start_date']['second_date_format'] = 'html5_tools_iso8601';
	/* Veld: CiviCRM Events: Beschrijving */
	$handler->display->display_options['fields']['description']['id'] = 'description';
	$handler->display->display_options['fields']['description']['table'] = 'civicrm_event';
	$handler->display->display_options['fields']['description']['field'] = 'description';
	$handler->display->display_options['fields']['description']['label'] = '';
	$handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['description']['element_wrapper_type'] = 'div';
	$handler->display->display_options['fields']['description']['element_wrapper_class'] = 'event-description';
	$handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
	$handler->display->display_options['fields']['description']['text_format'] = 'full_html';
	/* Sorteercriterium: CiviCRM Events: Begindatum */
	$handler->display->display_options['sorts']['start_date']['id'] = 'start_date';
	$handler->display->display_options['sorts']['start_date']['table'] = 'civicrm_event';
	$handler->display->display_options['sorts']['start_date']['field'] = 'start_date';
	/* Filtercriterium: CiviCRM Events: Event Type */
	$handler->display->display_options['filters']['event_type']['id'] = 'event_type';
	$handler->display->display_options['filters']['event_type']['table'] = 'civicrm_event';
	$handler->display->display_options['filters']['event_type']['field'] = 'event_type';
	$handler->display->display_options['filters']['event_type']['value'] = array(
		9 => '9',
	);
	/* Filtercriterium: CiviCRM Events: Begindatum */
	$handler->display->display_options['filters']['start_date']['id'] = 'start_date';
	$handler->display->display_options['filters']['start_date']['table'] = 'civicrm_event';
	$handler->display->display_options['filters']['start_date']['field'] = 'start_date';
	$handler->display->display_options['filters']['start_date']['operator'] = '>';
	$handler->display->display_options['filters']['start_date']['value']['value'] = 'now';
	$handler->display->display_options['filters']['start_date']['value']['type'] = 'offset';

	/* Display: Cursussen */
	$handler = $view->new_display('block', 'Cursussen', 'block_1');
	$handler->display->display_options['block_description'] = 'Cursusoverzicht';

	/* Display: Evenementen */
	$handler = $view->new_display('block', 'Evenementen', 'block_2');
	$handler->display->display_options['defaults']['filter_groups'] = FALSE;
	$handler->display->display_options['defaults']['filters'] = FALSE;
	/* Filtercriterium: CiviCRM Events: Event Type */
	$handler->display->display_options['filters']['event_type']['id'] = 'event_type';
	$handler->display->display_options['filters']['event_type']['table'] = 'civicrm_event';
	$handler->display->display_options['filters']['event_type']['field'] = 'event_type';
	$handler->display->display_options['filters']['event_type']['value'] = array(
		10 => '10',
	);
	/* Filtercriterium: CiviCRM Events: Begindatum */
	$handler->display->display_options['filters']['start_date']['id'] = 'start_date';
	$handler->display->display_options['filters']['start_date']['table'] = 'civicrm_event';
	$handler->display->display_options['filters']['start_date']['field'] = 'start_date';
	$handler->display->display_options['filters']['start_date']['operator'] = '>';
	$handler->display->display_options['filters']['start_date']['value']['value'] = 'now';
	$handler->display->display_options['filters']['start_date']['value']['type'] = 'offset';
	$handler->display->display_options['block_description'] = 'Evenementenoverzicht';

	/* Display: Cursussen (voorzitters) */
	$handler = $view->new_display('block', 'Cursussen (voorzitters)', 'block_3');
	$handler->display->display_options['defaults']['access'] = FALSE;
	$handler->display->display_options['access']['type'] = 'role';
	$handler->display->display_options['access']['role'] = array(
		7 => '7',
	);
	$handler->display->display_options['defaults']['fields'] = FALSE;
	/* Veld: CiviCRM Events: Titel */
	$handler->display->display_options['fields']['title']['id'] = 'title';
	$handler->display->display_options['fields']['title']['table'] = 'civicrm_event';
	$handler->display->display_options['fields']['title']['field'] = 'title';
	$handler->display->display_options['fields']['title']['label'] = '';
	$handler->display->display_options['fields']['title']['element_type'] = 'h2';
	$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
	/* Veld: CiviCRM Events: Begindatum */
	$handler->display->display_options['fields']['start_date']['id'] = 'start_date';
	$handler->display->display_options['fields']['start_date']['table'] = 'civicrm_event';
	$handler->display->display_options['fields']['start_date']['field'] = 'start_date';
	$handler->display->display_options['fields']['start_date']['label'] = '';
	$handler->display->display_options['fields']['start_date']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['start_date']['element_wrapper_type'] = 'h4';
	$handler->display->display_options['fields']['start_date']['element_wrapper_class'] = 'event-date';
	$handler->display->display_options['fields']['start_date']['element_default_classes'] = FALSE;
	$handler->display->display_options['fields']['start_date']['date_format'] = 'custom';
	$handler->display->display_options['fields']['start_date']['custom_date_format'] = 'l d-m-Y H:i';
	$handler->display->display_options['fields']['start_date']['second_date_format'] = 'html5_tools_iso8601';
	/* Veld: CiviCRM Events: Beschrijving */
	$handler->display->display_options['fields']['description']['id'] = 'description';
	$handler->display->display_options['fields']['description']['table'] = 'civicrm_event';
	$handler->display->display_options['fields']['description']['field'] = 'description';
	$handler->display->display_options['fields']['description']['label'] = '';
	$handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['description']['element_wrapper_type'] = 'div';
	$handler->display->display_options['fields']['description']['element_wrapper_class'] = 'event-description';
	$handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
	$handler->display->display_options['fields']['description']['text_format'] = 'full_html';
	/* Veld: CiviCRM Events: Text Link */
	$handler->display->display_options['fields']['text_link']['id'] = 'text_link';
	$handler->display->display_options['fields']['text_link']['table'] = 'civicrm_event';
	$handler->display->display_options['fields']['text_link']['field'] = 'text_link';
	$handler->display->display_options['fields']['text_link']['label'] = '';
	$handler->display->display_options['fields']['text_link']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['text_link']['link_to_civicrm_event'] = 'register';
	$handler->display->display_options['fields']['text_link']['link_text'] = 'Inschrijven';
	$handler->display->display_options['block_description'] = 'Cursusoverzicht (voorzitters)';

	/* Display: Evenementen (voorzitters) */
	$handler = $view->new_display('block', 'Evenementen (voorzitters)', 'block_4');
	$handler->display->display_options['defaults']['access'] = FALSE;
	$handler->display->display_options['access']['type'] = 'role';
	$handler->display->display_options['access']['role'] = array(
		7 => '7',
	);
	$handler->display->display_options['defaults']['fields'] = FALSE;
	/* Veld: CiviCRM Events: Titel */
	$handler->display->display_options['fields']['title']['id'] = 'title';
	$handler->display->display_options['fields']['title']['table'] = 'civicrm_event';
	$handler->display->display_options['fields']['title']['field'] = 'title';
	$handler->display->display_options['fields']['title']['label'] = '';
	$handler->display->display_options['fields']['title']['element_type'] = 'h2';
	$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
	/* Veld: CiviCRM Events: Begindatum */
	$handler->display->display_options['fields']['start_date']['id'] = 'start_date';
	$handler->display->display_options['fields']['start_date']['table'] = 'civicrm_event';
	$handler->display->display_options['fields']['start_date']['field'] = 'start_date';
	$handler->display->display_options['fields']['start_date']['label'] = '';
	$handler->display->display_options['fields']['start_date']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['start_date']['element_wrapper_type'] = 'h4';
	$handler->display->display_options['fields']['start_date']['element_wrapper_class'] = 'event-date';
	$handler->display->display_options['fields']['start_date']['element_default_classes'] = FALSE;
	$handler->display->display_options['fields']['start_date']['date_format'] = 'custom';
	$handler->display->display_options['fields']['start_date']['custom_date_format'] = 'l d-m-Y H:i';
	$handler->display->display_options['fields']['start_date']['second_date_format'] = 'html5_tools_iso8601';
	/* Veld: CiviCRM Events: Beschrijving */
	$handler->display->display_options['fields']['description']['id'] = 'description';
	$handler->display->display_options['fields']['description']['table'] = 'civicrm_event';
	$handler->display->display_options['fields']['description']['field'] = 'description';
	$handler->display->display_options['fields']['description']['label'] = '';
	$handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['description']['element_wrapper_type'] = 'div';
	$handler->display->display_options['fields']['description']['element_wrapper_class'] = 'event-description';
	$handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
	$handler->display->display_options['fields']['description']['text_format'] = 'full_html';
	/* Veld: CiviCRM Events: Text Link */
	$handler->display->display_options['fields']['text_link']['id'] = 'text_link';
	$handler->display->display_options['fields']['text_link']['table'] = 'civicrm_event';
	$handler->display->display_options['fields']['text_link']['field'] = 'text_link';
	$handler->display->display_options['fields']['text_link']['label'] = '';
	$handler->display->display_options['fields']['text_link']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['text_link']['link_to_civicrm_event'] = 'register';
	$handler->display->display_options['fields']['text_link']['link_text'] = 'Inschrijven';
	$handler->display->display_options['defaults']['filter_groups'] = FALSE;
	$handler->display->display_options['defaults']['filters'] = FALSE;
	/* Filtercriterium: CiviCRM Events: Event Type */
	$handler->display->display_options['filters']['event_type']['id'] = 'event_type';
	$handler->display->display_options['filters']['event_type']['table'] = 'civicrm_event';
	$handler->display->display_options['filters']['event_type']['field'] = 'event_type';
	$handler->display->display_options['filters']['event_type']['value'] = array(
		10 => '10',
	);
	/* Filtercriterium: CiviCRM Events: Begindatum */
	$handler->display->display_options['filters']['start_date']['id'] = 'start_date';
	$handler->display->display_options['filters']['start_date']['table'] = 'civicrm_event';
	$handler->display->display_options['filters']['start_date']['field'] = 'start_date';
	$handler->display->display_options['filters']['start_date']['operator'] = '>';
	$handler->display->display_options['filters']['start_date']['value']['value'] = 'now';
	$handler->display->display_options['filters']['start_date']['value']['type'] = 'offset';
	$handler->display->display_options['block_description'] = 'Evenementenoverzicht (voorzitters)';
	$translatables['cursussen'] = array(
		t('Master'),
		t('Cursussen'),
		t('meer'),
		t('Toepassen'),
		t('Opnieuw instellen'),
		t('Sorteren op'),
		t('Oplopend'),
		t('Aflopend'),
		t('Items per pagina'),
		t('- Alle -'),
		t('Startpunt'),
		t('« eerste'),
		t('‹ vorige'),
		t('volgende ›'),
		t('laatste »'),
		t('Cursusoverzicht'),
		t('Evenementen'),
		t('Evenementenoverzicht'),
		t('Cursussen (voorzitters)'),
		t('Cursusoverzicht (voorzitters)'),
		t('Evenementen (voorzitters)'),
		t('Evenementenoverzicht (voorzitters)'),
	);
	$export['cursussen'] = $view;

	return $export;
}
