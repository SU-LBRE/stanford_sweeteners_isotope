<?php
/**
 * @file
 * stanford_sweeteners_isotope.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_sweeteners_isotope_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'isotope_page_grid';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Isotope Page Grid';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Isotope Page Grid';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'stanford_sweeteners_isotope';
  $handler->display->display_options['style_options']['filter_field'] = array(
    'title' => 0,
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Directory Title */
  $handler->display->display_options['fields']['field_s_directory_title']['id'] = 'field_s_directory_title';
  $handler->display->display_options['fields']['field_s_directory_title']['table'] = 'field_data_field_s_directory_title';
  $handler->display->display_options['fields']['field_s_directory_title']['field'] = 'field_s_directory_title';
  $handler->display->display_options['fields']['field_s_directory_title']['label'] = '';
  $handler->display->display_options['fields']['field_s_directory_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_directory_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_directory_title']['settings'] = array(
    'custom_link_to_entity' => 1,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Directory Image */
  $handler->display->display_options['fields']['field_s_directory_img']['id'] = 'field_s_directory_img';
  $handler->display->display_options['fields']['field_s_directory_img']['table'] = 'field_data_field_s_directory_img';
  $handler->display->display_options['fields']['field_s_directory_img']['field'] = 'field_s_directory_img';
  $handler->display->display_options['fields']['field_s_directory_img']['label'] = '';
  $handler->display->display_options['fields']['field_s_directory_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_directory_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_directory_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_directory_img']['settings'] = array(
    'image_style' => '3-col-header',
    'image_link' => '',
    'custom_link_to_entity' => 1,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Audience */
  $handler->display->display_options['fields']['field_s_directory_aud']['id'] = 'field_s_directory_aud';
  $handler->display->display_options['fields']['field_s_directory_aud']['table'] = 'field_data_field_s_directory_aud';
  $handler->display->display_options['fields']['field_s_directory_aud']['field'] = 'field_s_directory_aud';
  $handler->display->display_options['fields']['field_s_directory_aud']['label'] = '';
  $handler->display->display_options['fields']['field_s_directory_aud']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_directory_aud']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_directory_aud']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_s_directory_aud']['delta_offset'] = '0';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_s_directory_cat']['id'] = 'field_s_directory_cat';
  $handler->display->display_options['fields']['field_s_directory_cat']['table'] = 'field_data_field_s_directory_cat';
  $handler->display->display_options['fields']['field_s_directory_cat']['field'] = 'field_s_directory_cat';
  $handler->display->display_options['fields']['field_s_directory_cat']['label'] = '';
  $handler->display->display_options['fields']['field_s_directory_cat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_directory_cat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_directory_cat']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_s_directory_cat']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]">
<div class="stanford_directory_item">
[field_s_directory_img] 
<span class="service_directory_title"><h3>[field_s_directory_title]</h3></span>
</div>
</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Include In Service Directory (field_s_directory_is) */
  $handler->display->display_options['filters']['field_s_directory_is_value']['id'] = 'field_s_directory_is_value';
  $handler->display->display_options['filters']['field_s_directory_is_value']['table'] = 'field_data_field_s_directory_is';
  $handler->display->display_options['filters']['field_s_directory_is_value']['field'] = 'field_s_directory_is_value';
  $handler->display->display_options['filters']['field_s_directory_is_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'isotope_term_filter:block';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view_1']['id'] = 'view_1';
  $handler->display->display_options['header']['view_1']['table'] = 'views';
  $handler->display->display_options['header']['view_1']['field'] = 'view';
  $handler->display->display_options['header']['view_1']['view_to_insert'] = 'isotope_term_filter:block_1';
  $handler->display->display_options['header']['view_1']['inherit_arguments'] = TRUE;
  $handler->display->display_options['path'] = 'service-directory';
  $export['isotope_page_grid'] = $view;

  $view = new view();
  $view->name = 'isotope_term_filter';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Isotope Term Filter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Isotope Term Filter';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'stanford_sweeteners_isotope_filter';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'stanford_directory_audience' => 'stanford_directory_audience',
  );

  /* Display: Audience Filter */
  $handler = $view->new_display('block', 'Audience Filter', 'block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Content using Audience */
  $handler->display->display_options['relationships']['reverse_field_s_directory_aud_node']['id'] = 'reverse_field_s_directory_aud_node';
  $handler->display->display_options['relationships']['reverse_field_s_directory_aud_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_s_directory_aud_node']['field'] = 'reverse_field_s_directory_aud_node';

  /* Display: Category Filter */
  $handler = $view->new_display('block', 'Category Filter', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Content using Category */
  $handler->display->display_options['relationships']['reverse_field_s_directory_cat_node']['id'] = 'reverse_field_s_directory_cat_node';
  $handler->display->display_options['relationships']['reverse_field_s_directory_cat_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_s_directory_cat_node']['field'] = 'reverse_field_s_directory_cat_node';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'stanford_directory_category' => 'stanford_directory_category',
  );
  $export['isotope_term_filter'] = $view;

  return $export;
}
