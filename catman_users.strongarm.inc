<?php
/**
 * @file
 * catman_users.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function catman_users_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_cancel_method';
  $strongarm->value = 'user_cancel_block';
  $export['user_cancel_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_email_verification';
  $strongarm->value = 1;
  $export['user_email_verification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_cancel_confirm_body';
  $strongarm->value = 'We received a request to cancel your [site:name] account. NOTE: Cancellation of your account is not reversible.

If you still want to cancel your account, click this link or copy and paste it into your browser:
[user:cancel-url]

This link expires in one day, and nothing will happen if it is not used.

Please contact us if you have questions. Thank you.


Extension and Experiment Station Communications
Oregon State University
422 Kerr Administration Bldg.
Corvallis, OR 97331-2119
Phone: 541-737-2513 or 800-561-6719
Email: puborders@oregonstate.edu
extension.oregonstate.edu/catalog';
  $export['user_mail_cancel_confirm_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_cancel_confirm_subject';
  $strongarm->value = 'Cancellation request for your [site:name] account';
  $export['user_mail_cancel_confirm_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_password_reset_body';
  $strongarm->value = 'We received a request to reset the password for your [site:name] account. To reset your password, please click the following link or copy and paste it into your browser:
[user:one-time-login-url]

This link can only be used once. It expires after one day, and nothing will happen if it\'s not used.

Please contact us if you have questions. Thank you.


Extension and Experiment Station Communications
Oregon State University
422 Kerr Administration Bldg.
Corvallis, OR 97331-2119
Phone: 541-737-2513 or 800-561-6719
Email: puborders@oregonstate.edu
extension.oregonstate.edu/catalog
';
  $export['user_mail_password_reset_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_password_reset_subject';
  $strongarm->value = 'New password for your [site:name] account';
  $export['user_mail_password_reset_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_body';
  $strongarm->value = 'We created an [site:name] account for you. To confirm your email address and finish setting up your account, please click the following link or copy and paste it into your browser:
[user:one-time-login-url]

This link can be used only once, and it will take you directly to a page where you can set your own password. After setting your password, you will be able to log in at [site:login-url] in the future using:
username: [user:name]
password: The password you create

Please contact us if you have questions. Thank you!


Extension and Experiment Station Communications
Oregon State University
422 Kerr Administration Bldg.
Corvallis, OR 97331-2119
Phone: 541-737-2513 or 800-561-6719
Email: puborders@oregonstate.edu
extension.oregonstate.edu/catalog';
  $export['user_mail_register_admin_created_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_subject';
  $strongarm->value = 'Your new [site:name] account';
  $export['user_mail_register_admin_created_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_body';
  $strongarm->value = 'Thank you for creating an [site:name] account. To confirm your email address and finish setting up your account, please click the following link or copy and paste it into your browser:
[user:one-time-login-url]

This link can be used only once, and it will take you directly to a page where you can set your own password. After setting your password, you will be able to log in at [site:login-url] in the future using:
username: [user:name]
password: The password you create

If you requested an "OSU affiliate" or "Reseller" account type, we will verify your eligibility for the account type you selected and contact you if we have questions.

Please contact us if you have questions. Thank you!


Extension and Experiment Station Communications
Oregon State University
422 Kerr Administration Bldg.
Corvallis, OR 97331-2119
Phone: 541-737-2513 or 800-561-6719
Email: puborders@oregonstate.edu
extension.oregonstate.edu/catalog';
  $export['user_mail_register_no_approval_required_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_subject';
  $strongarm->value = 'Your new [site:name] account';
  $export['user_mail_register_no_approval_required_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_body';
  $strongarm->value = 'WE ARE NOT CURRENTLY USING THIS MESSAGE BECAUSE ADMIN APPROVAL IS NOT REQUIRED FOR ACCOUNT CREATION.

IF WE DECIDE TO USE IT IN THE FUTURE, WE NEED TO REVIEW AND REVISE THE MESSAGE SUBJECT AND TEXT.

Thank you for registering at [site:name]. Your application for an account is currently pending approval. Once it has been approved, you will receive another e-mail containing information about how to log in, set your password, and other details.


--  [site:name] team';
  $export['user_mail_register_pending_approval_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_subject';
  $strongarm->value = 'NOT CURRENTLY USED  Account details for [user:name] at [site:name] (pending admin approval)';
  $export['user_mail_register_pending_approval_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_body';
  $strongarm->value = 'WE ARE NOT CURRENTLY USING THIS MESSAGE BECAUSE ADMIN APPROVAL IS NOT REQUIRED FOR ACCOUNT CREATION.

IF WE DECIDE TO USE IT IN THE FUTURE, WE NEED TO REVIEW AND REVISE THE MESSAGE SUBJECT AND TEXT.



Your account at [site:name] has been activated.

You may now log in by clicking this link or copying and pasting it into your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team';
  $export['user_mail_status_activated_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_notify';
  $strongarm->value = 0;
  $export['user_mail_status_activated_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_subject';
  $strongarm->value = 'NOT CURRENTLY USED  Account details for [user:name] at [site:name] (approved)';
  $export['user_mail_status_activated_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_body';
  $strongarm->value = 'Your [site:name] account has been blocked.

Please contact us if you have questions. Thank you.


Extension and Experiment Station Communications
Oregon State University
422 Kerr Administration Bldg.
Corvallis, OR 97331-2119
Phone: 541-737-2513 or 800-561-6719
Email: puborders@oregonstate.edu
extension.oregonstate.edu/catalog';
  $export['user_mail_status_blocked_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_notify';
  $strongarm->value = 1;
  $export['user_mail_status_blocked_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_subject';
  $strongarm->value = 'Account details for your [site:name] account (blocked)';
  $export['user_mail_status_blocked_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_body';
  $strongarm->value = 'Your [site:name] account has been canceled.

Please contact us if you have questions. Thank you.


Extension and Experiment Station Communications
Oregon State University
422 Kerr Administration Bldg.
Corvallis, OR 97331-2119
Phone: 541-737-2513 or 800-561-6719
Email: puborders@oregonstate.edu
extension.oregonstate.edu/catalog
';
  $export['user_mail_status_canceled_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_notify';
  $strongarm->value = 1;
  $export['user_mail_status_canceled_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_subject';
  $strongarm->value = 'Account details for your [site:name] account (canceled)';
  $export['user_mail_status_canceled_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '1';
  $export['user_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_signatures';
  $strongarm->value = 0;
  $export['user_signatures'] = $strongarm;

  return $export;
}
