<?php
/**
 * @file
 * catman_users.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function catman_users_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_req_account_type'
  $field_bases['field_req_account_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_req_account_type',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 'Customer',
        2 => 'OSU affiliate (Oregon State University faculty and staff)',
        3 => 'Reseller (bookstores, gift shops)',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  return $field_bases;
}
