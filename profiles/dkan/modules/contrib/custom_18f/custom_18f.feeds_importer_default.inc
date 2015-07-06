<?php
/**
 * @file
 * custom_18f.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function custom_18f_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'openfda_top_adverse_reactions';
  $feeds_importer->config = array(
    'name' => 'openFDA: Top Adverse Reactions',
    'description' => 'Feed from openFDA API for top adverse reactions',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExJsonPath',
      'config' => array(
        'sources' => array(
          'reaction' => array(
            'name' => 'Reaction',
            'value' => 'term',
            'debug' => 0,
            'weight' => '1',
          ),
          'total' => array(
            'name' => 'Total',
            'value' => 'count',
            'debug' => 0,
            'weight' => '2',
          ),
        ),
        'context' => array(
          'value' => '$.results.[]',
        ),
        'display_errors' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'debug_mode' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsFlatstoreProcessor',
      'config' => array(
        'update_existing' => 0,
        'expire' => -1,
        'mappings' => array(),
        'delete_with_source' => FALSE,
        'truncate' => 1,
        'geolocate' => FALSE,
        'geolocate_addresses' => '',
        'geolocater' => 'google',
      ),
    ),
    'content_type' => '',
    'weight' => '0',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['openfda_top_adverse_reactions'] = $feeds_importer;

  return $export;
}
