<?php
/**
 * @file
 * catman_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function catman_users_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 2,
  );

  // Exported role: Customer.
  $roles['Customer'] = array(
    'name' => 'Customer',
    'weight' => 8,
  );

  // Exported role: OSU affiliate.
  $roles['OSU affiliate'] = array(
    'name' => 'OSU affiliate',
    'weight' => 5,
  );

  // Exported role: PNW.
  $roles['PNW'] = array(
    'name' => 'PNW',
    'weight' => 7,
  );

  // Exported role: Project manager.
  $roles['Project manager'] = array(
    'name' => 'Project manager',
    'weight' => 4,
  );

  // Exported role: Reseller.
  $roles['Reseller'] = array(
    'name' => 'Reseller',
    'weight' => 6,
  );

  // Exported role: Store manager.
  $roles['Store manager'] = array(
    'name' => 'Store manager',
    'weight' => 3,
  );

  return $roles;
}
