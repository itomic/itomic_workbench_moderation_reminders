<?php


/**
 * Implements hook_drush_command().
 */
function itomic_workbench_moderation_reminders_drush_command() {

  $items['itomic-workbench-reminders'] = array(
    'description' => 'Run the newsletter.',
    'aliases' => array('workbench-reminders'),
  );

  return $items;
}


function drush_itomic_workbench_moderation_reminders_itomic_workbench_reminders() {
   itomic_workbench_moderation_reminders_run();
}