<?php
/**
 * @file
 * custom_18f.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function custom_18f_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'openfda_top_10_adverse_reactions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'feeds_datastore_openfda_top_adverse_reactions_0';
  $view->human_name = 'openFDA: Top 10 Adverse Reactions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'openFDA: Top 10 Adverse Reactions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'd3_style';
  $handler->display->display_options['style_options']['library'] = 'd3.columnchart';
  $handler->display->display_options['style_options']['fields'] = array(
    'rows' => array(
      'x_label' => array(
        'field' => 'reaction',
        'aggregation' => '_none',
      ),
      'value0' => array(
        'field' => 'total',
        'aggregation' => '_none',
      ),
      'value1' => array(
        'field' => '__none',
        'aggregation' => '_none',
      ),
    ),
    'legend' => array(
      0 => array(
        'field' => 'reaction',
        'aggregation' => '_none',
      ),
      1 => array(
        'field' => '__none',
        'aggregation' => '_none',
      ),
    ),
  );
  $handler->display->display_options['style_options']['show_table'] = 1;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/dataset/openfda-top-adverse-reactions">More about this dataset </a>


<p>This block will help administrators and site reviewers more quickly find the interesting content on this site. Think of it as a featured content area. </p>

<a href="/import/openfda_top_adverse_reactions">Import Adverse Reactions from openFDA (log in as admin)</a>
Use this query (for example) with the JSON import
https://api.fda.gov/drug/event.json?search=(receivedate:([20040101+TO+20150101]))&count=patient.reaction.reactionmeddrapt.exact

Learn more about the user interface for configuring this and other data imports:
<a href="/admin/structure/feeds/openfda_top_adverse_reactions">Configure JSON Feed parameters (schema mapping, other parameters).

Once the information is imported, a simple (non-programmer) <a href="/static/openfda-top-10-adverse-reactions">Drupal View</a> of the data can be previewed. A more <a href="/openfda-top-adverse-drug-reactions-2004-01-01-2015-07-01#/">advanced version</a> of similar data, based on AngularJS instead of Drupal Views, is also available. 

<a href="/dataset/openfda-yuckio-datasets">Another dataset</a> for Yuck.io, is a demonstration of the that is used for the <a href="Yuckio.kfgisit.com">Yuckio.kfgisit.com</a> website. 


';
  $handler->display->display_options['footer']['area']['format'] = 'html';
  /* Field: openfda_top_adverse_reactions: Total */
  $handler->display->display_options['fields']['total']['id'] = 'total';
  $handler->display->display_options['fields']['total']['table'] = 'feeds_datastore_openfda_top_adverse_reactions_0';
  $handler->display->display_options['fields']['total']['field'] = 'total';
  $handler->display->display_options['fields']['total']['separator'] = '';
  /* Field: openfda_top_adverse_reactions: Reaction */
  $handler->display->display_options['fields']['reaction']['id'] = 'reaction';
  $handler->display->display_options['fields']['reaction']['table'] = 'feeds_datastore_openfda_top_adverse_reactions_0';
  $handler->display->display_options['fields']['reaction']['field'] = 'reaction';
  /* Sort criterion: openfda_top_adverse_reactions: Total */
  $handler->display->display_options['sorts']['total']['id'] = 'total';
  $handler->display->display_options['sorts']['total']['table'] = 'feeds_datastore_openfda_top_adverse_reactions_0';
  $handler->display->display_options['sorts']['total']['field'] = 'total';
  $handler->display->display_options['sorts']['total']['order'] = 'DESC';
  /* Filter criterion: openfda_top_adverse_reactions: Reaction */
  $handler->display->display_options['filters']['reaction']['id'] = 'reaction';
  $handler->display->display_options['filters']['reaction']['table'] = 'feeds_datastore_openfda_top_adverse_reactions_0';
  $handler->display->display_options['filters']['reaction']['field'] = 'reaction';
  $handler->display->display_options['filters']['reaction']['operator'] = 'longerthan';
  $handler->display->display_options['filters']['reaction']['value'] = '1';
  $handler->display->display_options['filters']['reaction']['expose']['operator_id'] = 'reaction_op';
  $handler->display->display_options['filters']['reaction']['expose']['label'] = 'Reaction';
  $handler->display->display_options['filters']['reaction']['expose']['operator'] = 'reaction_op';
  $handler->display->display_options['filters']['reaction']['expose']['identifier'] = 'reaction';
  $handler->display->display_options['filters']['reaction']['expose']['autocomplete_field'] = 'reaction';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'static/openfda-top-10-adverse-reactions';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'd3_style';
  $handler->display->display_options['style_options']['library'] = 'd3.columnchart';
  $handler->display->display_options['style_options']['fields'] = array(
    'rows' => array(
      'x_label' => array(
        'field' => 'reaction',
        'aggregation' => '_none',
      ),
      'value0' => array(
        'field' => 'total',
        'aggregation' => '_none',
      ),
      'value1' => array(
        'field' => '__none',
        'aggregation' => '_none',
      ),
    ),
    'legend' => array(
      0 => array(
        'field' => 'reaction',
        'aggregation' => '_none',
      ),
      1 => array(
        'field' => '__none',
        'aggregation' => '_none',
      ),
    ),
  );
  $handler->display->display_options['style_options']['show_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['openfda_top_10_adverse_reactions'] = $view;

  return $export;
}
