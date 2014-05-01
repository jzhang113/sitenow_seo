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

  // Configuration Link to Google Analytics
  $form['sitenow_seo_config_group']['sitenow_google_analytics'] = array(
    '#markup' => '<div class="admin-panel"><ul class="admin-list"><li class="leaf"><a href="' . $base_url . '/admin/config/system/googleanalytics">Configure Google Analytics</a></li>',
  );

  // Configuration Link to Page Titles
  $form['sitenow_seo_config_group']['sitenow_page_titles'] = array(
    '#markup' => '<li><a href="' . $base_url . '/admin/config/search/page-title">Configure Page Titles</a></li>',
  );

  // Configuration Link to XML Sitemap
  $form['sitenow_seo_config_group']['sitenow_xml_sitemaps'] = array(
    '#markup' => '<li><a href="' . $base_url . '/admin/config/search/xmlsitemap">Configure XML Sitemaps</a></li></ul></div>',
  );

  // Configuration Link to Verifications
  $form['sitenow_seo_config_group']['sitenow_site_verify'] = array(
    '#markup' => '<li><a href="' . $base_url . '/admin/config/search/verifications">Configure Site Verifications</a></li></ul></div>',
  );

  return $form;
}
