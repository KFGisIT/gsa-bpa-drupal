<?php
/**
 * @file
 * custom_18f.data_default.inc
 */

/**
 * Implements hook_data_default().
 */
function custom_18f_data_default() {
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
