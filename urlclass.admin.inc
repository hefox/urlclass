<?php
/*
 * Form defination 
 */
function urlclass_settings() {
  $form = array();
  $form['urlclass'] = array(
    '#type' => 'textarea',
    '#title' => t('Url, Class Pairs'),
    '#default_value' => variable_get('urlclass', ''),
    '#description' => t('One per line, seperate partial urls and class name by a comma: <p>google.com,google</p>'),
  );
  $form = system_settings_form($form); 
  return $form;
}
