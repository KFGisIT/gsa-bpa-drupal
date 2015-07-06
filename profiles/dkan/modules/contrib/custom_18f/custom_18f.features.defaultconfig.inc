<?php
/**
 * @file
 * custom_18f.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function custom_18f_defaultconfig_features() {
  return array(
    'custom_18f' => array(
      'data_default' => 'data_default',
      'feeds_importer_default' => 'feeds_importer_default',
      'feeds_tamper_default' => 'feeds_tamper_default',
    ),
  );
}

/**
 * Implements hook_defaultconfig_data_default().
 */
function custom_18f_defaultconfig_data_default() {
  $export = array();

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'openfda_top_adverse_reactions';
  $data_table->name = 'feeds_datastore_openfda_top_adverse_reactions_0';
  $data_table->table_schema = array(
    'fields' => array(
      'reaction' => array(
        'type' => 'text',
        'not null' => FALSE,
        'size' => 'big',
      ),
      'total' => array(
        'type' => 'int',
        'not null' => FALSE,
      ),
      'feeds_flatstore_entry_id' => array(
        'type' => 'serial',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
      'timestamp' => array(
        'description' => 'The Unix timestamp for the data.',
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'feeds_entity_id' => array(
        'description' => 'The feeds entity id for the data.',
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
    ),
    'indexes' => array(
      'feeds_flatstore_entry_id' => array(
        0 => 'feeds_flatstore_entry_id',
      ),
      'timestamp' => array(
        0 => 'timestamp',
      ),
    ),
    'primary key' => array(
      0 => 'feeds_flatstore_entry_id',
    ),
    'mysql_engine' => 'MYISAM',
  );
  $data_table->meta = array();
  $export['feeds_datastore_openfda_top_adverse_reactions_0'] = $data_table;

  return $export;
}

/**
 * Implements hook_defaultconfig_feeds_importer_default().
 */
function custom_18f_defaultconfig_feeds_importer_default() {
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

/**
 * Implements hook_defaultconfig_feeds_tamper_default().
 */
function custom_18f_defaultconfig_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'jsontest-time-strtotime';
  $feeds_tamper->importer = 'jsontest';
  $feeds_tamper->source = 'time';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['jsontest-time-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'jsontest-time-timetodate';
  $feeds_tamper->importer = 'jsontest';
  $feeds_tamper->source = 'time';
  $feeds_tamper->plugin_id = 'timetodate';
  $feeds_tamper->settings = array(
    'date_format' => 'Y-m',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Unix timestamp to Date';
  $export['jsontest-time-timetodate'] = $feeds_tamper;

  return $export;
}
