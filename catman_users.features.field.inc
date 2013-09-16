<?php
/**
 * @file
 * catman_users.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function catman_users_field_default_fields() {
  $fields = array();

  // Exported field: 'profile2-eesc_profile-field_req_account_type'.
  $fields['profile2-eesc_profile-field_req_account_type'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_req_account_type',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
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
      'translatable' => '0',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'eesc_profile',
      'default_value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'deleted' => '0',
      'description' => 'All new accounts are created as general "Customer" accounts. If you request an "OSU affiliate" or "Reseller" account, we will need to verify your eligibility before we process your request.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'profile2',
      'fences_wrapper' => 'ul',
      'field_name' => 'field_req_account_type',
      'label' => 'Requested account type',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => 0,
        ),
        'type' => 'options_select',
        'weight' => '1',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('All new accounts are created as general "Customer" accounts. If you request an "OSU affiliate" or "Reseller" account, we will need to verify your eligibility before we process your request.');
  t('Requested account type');

  return $fields;
}
