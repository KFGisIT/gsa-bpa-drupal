<?php
/**
 * @file
 * custom_18f.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function custom_18f_feeds_tamper_default() {
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

  return $export;
}
