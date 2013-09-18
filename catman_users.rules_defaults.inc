<?php
/**
 * @file
 * catman_users.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function catman_users_default_rules_configuration() {
  $items = array();
  $items['rules_create_customer_role_new_account'] = entity_import('rules_config', '{ "rules_create_customer_role_new_account" : {
      "LABEL" : "Create Customer role for new account",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "catman" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_insert" ],
      "IF" : [
        { "data_is" : { "data" : [ "account:field-requested-account-type" ], "value" : "1" } }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "8" : "8" } } } }
      ]
    }
  }');
  $items['rules_create_osu_afilliate_role_new_account'] = entity_import('rules_config', '{ "rules_create_osu_afilliate_role_new_account" : {
      "LABEL" : "Create OSU afilliate role for new account",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "catman" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_insert" ],
      "IF" : [
        { "data_is" : { "data" : [ "account:field-requested-account-type" ], "value" : "2" } }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "6" : "6" } } } }
      ]
    }
  }');
  $items['rules_create_reseller_role_new_account'] = entity_import('rules_config', '{ "rules_create_reseller_role_new_account" : {
      "LABEL" : "Create Reseller role for new account",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "catman" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_insert" ],
      "IF" : [
        { "data_is" : { "data" : [ "account:field-requested-account-type" ], "value" : "3" } }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "5" : "5" } } } }
      ]
    }
  }');
  $items['rules_send_email_to_eesc_when_new_account_is_created'] = entity_import('rules_config', '{ "rules_send_email_to_eesc_when_new_account_is_created" : {
      "LABEL" : "Send email to EESC when new account is created",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "catman" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_insert" ],
      "DO" : [
        { "mail" : {
            "to" : "jennifer.alexander@oregonstate.edu, bryan.mayjor@oregonstate.edu",
            "subject" : "New [site:name] account created",
            "message" : "A new [site-name] account was created.\\u000D\\u000AUser role is set to account:roles:1\\u000D\\u000A\\u000D\\u000AThey requested the account:field-requested-account-type account type"
          }
        }
      ]
    }
  }');
  return $items;
}
