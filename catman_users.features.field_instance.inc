<?php
/**
 * @file
 * catman_users.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function catman_users_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'profile2-eesc_profile-field_req_account_type'
  $field_instances['profile2-eesc_profile-field_req_account_type'] = array(
    'bundle' => 'eesc_profile',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'All new accounts are created as general "Customer" accounts. If you request an "OSU affiliate" or "Reseller" account, we will need to verify your eligibility before we process your request.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
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
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('All new accounts are created as general "Customer" accounts. If you request an "OSU affiliate" or "Reseller" account, we will need to verify your eligibility before we process your request.');
  t('Requested account type');

  return $field_instances;
}
