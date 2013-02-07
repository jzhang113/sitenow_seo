<?php
/**
 * Implements hook_apps_app_info().
 */
function sitenow_seo_apps_app_info() {
  return array(
    'configure form' => 'sitenow_seo_apps_app_configure_form',
    //'demo content module' => '',
  );
}

/**
* Config form for SiteNow SEO App
*/
function sitenow_seo_apps_app_configure_form($form, &$form_state) {

  global $base_url;

  // flush cache to assure all config got instantiated properly
  $form = array();

  // This is currently just to test the apps config integration
  $form['sitenow_seo_config_group'] = array(
      '#type' => 'fieldset',
      '#title' => "Configuration Options for SiteNow SEO",
  );

  $form['sitenow_seo_config_group']['sitenow_google_analytics'] = array(
    '#markup' => '<a href="' . $base_url . '/admin/config/system/googleanalytics">Configure Google Analytics</a>',
  );

  return $form;
}
