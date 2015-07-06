<?php
/**
 * @file
 * custom_18f.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function custom_18f_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'89\',
      \'uid\' => \'1\',
      \'title\' => \'openFDA: Yuck.io datasets\',
      \'log\' => "Update to resource \'openFDA: Food Recalls\'",
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'224d8901-d2fa-4ca5-a22a-9029dd6e97be\',
      \'nid\' => \'21\',
      \'type\' => \'dataset\',
      \'language\' => \'und\',
      \'created\' => \'1436106112\',
      \'changed\' => \'1436219549\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'1036210d-254b-4543-8a22-78152b467f55\',
      \'revision_timestamp\' => \'1436219549\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'These are the datasets used on [Yuck.io ](yuckio.kfgisit.com)-- a demonstration front-end that leverages feeds from the openFDA API to allow users to see information about recalled food or drugs in their state. \',
            \'summary\' => \'\',
            \'format\' => \'html\',
            \'safe_value\' => \'<p>These are the datasets used on <a href="yuckio.kfgisit.com">Yuck.io </a>-- a demonstration front-end that leverages feeds from the openFDA API to allow users to see information about recalled food or drugs in their state.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_additional_info\' => array(),
      \'field_author\' => array(),
      \'field_contact_email\' => array(),
      \'field_contact_name\' => array(),
      \'field_data_dictionary\' => array(),
      \'field_frequency\' => array(),
      \'field_granularity\' => array(),
      \'field_license\' => array(
        \'und\' => array(
          array(
            \'value\' => \'other-open\',
            \'format\' => NULL,
            \'safe_value\' => \'other-open\',
          ),
        ),
      ),
      \'field_public_access_level\' => array(),
      \'field_related_content\' => array(),
      \'field_resources\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'23\',
          ),
          array(
            \'target_id\' => \'24\',
          ),
          array(
            \'target_id\' => \'16\',
          ),
        ),
      ),
      \'field_spatial\' => array(),
      \'field_spatial_geographical_cover\' => array(),
      \'field_tags\' => array(),
      \'field_temporal_coverage\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2004-01-01 05:00:00\',
            \'value2\' => \'2015-07-01 04:00:00\',
            \'timezone\' => \'US/Eastern\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
            \'db\' => array(
              \'value\' => DateObject::__set_state(array(
                 \'granularity\' => 
                array (
                  0 => \'year\',
                  1 => \'month\',
                  2 => \'day\',
                  3 => \'hour\',
                  4 => \'minute\',
                  5 => \'second\',
                  6 => \'timezone\',
                ),
                 \'errors\' => 
                array (
                ),
                 \'serializedTime\' => \'2004-01-01T05:00:00+00:00\',
                 \'serializedTimezone\' => \'UTC\',
                 \'timeOnly\' => false,
                 \'dateOnly\' => false,
                 \'originalTime\' => \'2004-01-01T05:00:00+00:00\',
                 \'date\' => \'2004-01-01 05:00:00.000000\',
                 \'timezone_type\' => 3,
                 \'timezone\' => \'UTC\',
              )),
              \'value2\' => DateObject::__set_state(array(
                 \'granularity\' => 
                array (
                  0 => \'year\',
                  1 => \'month\',
                  2 => \'day\',
                  3 => \'hour\',
                  4 => \'minute\',
                  5 => \'second\',
                  6 => \'timezone\',
                ),
                 \'errors\' => 
                array (
                ),
                 \'serializedTime\' => \'2015-07-01T04:00:00+00:00\',
                 \'serializedTimezone\' => \'UTC\',
                 \'timeOnly\' => false,
                 \'dateOnly\' => false,
                 \'originalTime\' => \'2015-07-01T04:00:00+00:00\',
                 \'date\' => \'2015-07-01 04:00:00.000000\',
                 \'timezone_type\' => 3,
                 \'timezone\' => \'UTC\',
              )),
            ),
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'2\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
          \'type\' => \'property\',
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
          \'type\' => \'property\',
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'field_frequency\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dc:Frequency\',
          ),
        ),
        \'field_resources\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dcat:Distribution\',
          ),
        ),
        \'field_author\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dc:creator\',
          ),
        ),
        \'field_data_dictionary\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dcat:dataDictionary\',
          ),
        ),
        \'field_granularity\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dcat:granularity\',
          ),
        ),
        \'field_license\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dc:license\',
          ),
        ),
        \'field_public_access_level\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dc:accessRights\',
          ),
        ),
        \'field_related_content\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dc:relation\',
          ),
        ),
        \'field_spatial\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dc:spatial\',
          ),
        ),
        \'field_tags\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dcat:theme\',
          ),
        ),
        \'field_temporal_coverage\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dc:temporal\',
          ),
        ),
        \'og_group_ref\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dc:publisher\',
          ),
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'38\',
        \'source\' => \'node/21\',
        \'alias\' => \'openfda-yuckio-datasets\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'87\',
      \'uid\' => \'1\',
      \'title\' => \'openFDA: Top Adverse Reactions\',
      \'log\' => "Update to resource \'openFDA: Interactive Adverse Drug Reactions\'",
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e84e41ce-0832-420d-af3d-b6855044e2c3\',
      \'nid\' => \'18\',
      \'type\' => \'dataset\',
      \'language\' => \'und\',
      \'created\' => \'1436043532\',
      \'changed\' => \'1436219549\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'1742756b-bbaf-479f-bdb2-22a190175498\',
      \'revision_timestamp\' => \'1436219549\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'This dataset is a query of the top adverse drug reactions from the openFDA API. The query used is from 2004-01-01 to 2015-07-01 and gets a count of each adverse reaction. \',
            \'summary\' => \'\',
            \'format\' => \'html\',
            \'safe_value\' => \'<p>This dataset is a query of the top adverse drug reactions from the openFDA API. The query used is from 2004-01-01 to 2015-07-01 and gets a count of each adverse reaction.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_additional_info\' => array(),
      \'field_author\' => array(),
      \'field_contact_email\' => array(),
      \'field_contact_name\' => array(),
      \'field_data_dictionary\' => array(),
      \'field_frequency\' => array(),
      \'field_granularity\' => array(),
      \'field_license\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://open.fda.gov/license\',
            \'format\' => NULL,
            \'safe_value\' => \'http://open.fda.gov/license\',
          ),
        ),
      ),
      \'field_public_access_level\' => array(),
      \'field_related_content\' => array(),
      \'field_resources\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'19\',
          ),
          array(
            \'target_id\' => \'20\',
          ),
        ),
      ),
      \'field_spatial\' => array(),
      \'field_spatial_geographical_cover\' => array(),
      \'field_tags\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
          ),
          array(
            \'tid\' => \'13\',
          ),
        ),
      ),
      \'field_temporal_coverage\' => array(),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'2\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
          \'type\' => \'property\',
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
          \'type\' => \'property\',
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'field_frequency\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dc:Frequency\',
          ),
        ),
        \'field_resources\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dcat:Distribution\',
          ),
        ),
        \'field_author\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dc:creator\',
          ),
        ),
        \'field_data_dictionary\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dcat:dataDictionary\',
          ),
        ),
        \'field_granularity\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dcat:granularity\',
          ),
        ),
        \'field_license\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dc:license\',
          ),
        ),
        \'field_public_access_level\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dc:accessRights\',
          ),
        ),
        \'field_related_content\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dc:relation\',
          ),
        ),
        \'field_spatial\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dc:spatial\',
          ),
        ),
        \'field_tags\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dcat:theme\',
          ),
        ),
        \'field_temporal_coverage\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dc:temporal\',
          ),
        ),
        \'og_group_ref\' => array(
          \'type\' => \'property\',
          \'predicates\' => array(
            \'dc:publisher\',
          ),
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'33\',
        \'source\' => \'node/18\',
        \'alias\' => \'openfda-top-adverse-reactions\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'66\',
      \'uid\' => \'1\',
      \'title\' => \'openFDA: Yuck.io interactive site to find food & drug recalls in your state\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0151a71d-9c94-4734-bb87-fe7f2e12391f\',
      \'nid\' => \'24\',
      \'type\' => \'resource\',
      \'language\' => \'und\',
      \'created\' => \'1436107069\',
      \'changed\' => \'1436207987\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3d00d721-881f-48ba-8de4-ad62984e9d48\',
      \'revision_timestamp\' => \'1436207987\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Use the link to the site to go to the Yuck.io site and explore food and drug recalls in your state.\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'html\',
            \'safe_value\' => \'<p>Use the link to the site to go to the Yuck.io site and explore food and drug recalls in your state.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_dataset_ref\' => array(),
      \'field_format\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'15\',
          ),
        ),
      ),
      \'field_link_api\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://yuckio.kfgisit.com\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_link_remote_file\' => array(),
      \'field_upload\' => array(),
      \'og_group_ref\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'43\',
        \'source\' => \'node/24\',
        \'alias\' => \'dataset/resource/3d00d721-881f-48ba-8de4-ad62984e9d48\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'36\',
      \'uid\' => \'1\',
      \'title\' => \'openFDA: Top Adverse Drug Reactions from 2004-01-01 to 2015-07-01\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4e3e0b70-33b5-4440-8487-2183d36869cb\',
      \'nid\' => \'17\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1436039288\',
      \'changed\' => \'1436064597\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'7f4348c9-f52b-412f-b775-e8dfb0b1d681\',
      \'revision_timestamp\' => \'1436064597\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<div ng-app=\\"fdaApp\\">\\r\\n <div ng-view=\\"\\"></div>\\r\\n\\r\\n</div>\\r\\n  <link rel=\\"stylesheet\\" href=\\"/static/bower_components/bootstrap/dist/css/bootstrap.css\\" />\\r\\n    <!-- endbower -->\\r\\n    <!-- endbuild -->\\r\\n    <!-- build:css({.tmp,app}) /static/styles/main.css -->\\r\\n    <link rel=\\"stylesheet\\" href=\\"/static/styles/main.css\\">\\r\\n    <link rel=\\"stylesheet\\" href=\\"/static/styles/charts.css\\">\\r\\n\\r\\n  <script src=\\"/static/bower_components/angular/angular.js\\"></script>\\r\\n    <script src=\\"/static/bower_components/bootstrap/dist/js/bootstrap.js\\"></script>\\r\\n    <script src=\\"/static/bower_components/angular-resource/angular-resource.js\\"></script>\\r\\n    <script src=\\"/static/bower_components/angular-cookies/angular-cookies.js\\"></script>\\r\\n    <script src=\\"/static/bower_components/angular-sanitize/angular-sanitize.js\\"></script>\\r\\n    <script src=\\"/static/bower_components/angular-route/angular-route.js\\"></script>\\r\\n    <script src=\\"/static/bower_components/d3/d3.js\\"></script>\\r\\n    <script src=\\"/static/bower_components/angular-bootstrap/ui-bootstrap-tpls.js\\"></script>\\r\\n\\r\\n\\r\\n <!-- build:js({.tmp,app}) /static/scripts/scripts.js -->\\r\\n        <script src=\\"/static/scripts/app.js\\"></script>\\r\\n        <script src=\\"/static/scripts/controllers/main.js\\"></script>\\r\\n        <script src=\\"/static/scripts/services/data.js\\"></script>\\r\\n        <script src=\\"/static/scripts/directives/chartLines.js\\"></script>\\r\\n        <script src=\\"/static/scripts/directives/chartList.js\\"></script>\\r\\n        <script src=\\"/static/scripts/directives/chartBarpie.js\\"></script>\\r\\n        <!-- endbuild -->",
            \'summary\' => \'\',
            \'format\' => \'php_code\',
            \'safe_value\' => "<div ng-app=\\"fdaApp\\">\\n <div ng-view=\\"\\"></div>\\n\\n</div>\\n  <link rel=\\"stylesheet\\" href=\\"/static/bower_components/bootstrap/dist/css/bootstrap.css\\" />\\n    <!-- endbower -->\\n    <!-- endbuild -->\\n    <!-- build:css({.tmp,app}) /static/styles/main.css -->\\n    <link rel=\\"stylesheet\\" href=\\"/static/styles/main.css\\">\\n    <link rel=\\"stylesheet\\" href=\\"/static/styles/charts.css\\">\\n\\n  <script src=\\"/static/bower_components/angular/angular.js\\"></script>\\n    <script src=\\"/static/bower_components/bootstrap/dist/js/bootstrap.js\\"></script>\\n    <script src=\\"/static/bower_components/angular-resource/angular-resource.js\\"></script>\\n    <script src=\\"/static/bower_components/angular-cookies/angular-cookies.js\\"></script>\\n    <script src=\\"/static/bower_components/angular-sanitize/angular-sanitize.js\\"></script>\\n    <script src=\\"/static/bower_components/angular-route/angular-route.js\\"></script>\\n    <script src=\\"/static/bower_components/d3/d3.js\\"></script>\\n    <script src=\\"/static/bower_components/angular-bootstrap/ui-bootstrap-tpls.js\\"></script>\\n\\n\\n <!-- build:js({.tmp,app}) /static/scripts/scripts.js -->\\n        <script src=\\"/static/scripts/app.js\\"></script>\\n        <script src=\\"/static/scripts/controllers/main.js\\"></script>\\n        <script src=\\"/static/scripts/services/data.js\\"></script>\\n        <script src=\\"/static/scripts/directives/chartLines.js\\"></script>\\n        <script src=\\"/static/scripts/directives/chartList.js\\"></script>\\n        <script src=\\"/static/scripts/directives/chartBarpie.js\\"></script>\\n        <!-- endbuild -->",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'31\',
        \'source\' => \'node/17\',
        \'alias\' => \'openfda-top-adverse-drug-reactions-2004-01-01-2015-07-01\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'53\',
      \'uid\' => \'1\',
      \'title\' => \'openFDA: Demonstration Datasets \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'38fb5fb2-02b0-4693-a504-c49a4e522b87\',
      \'nid\' => \'2\',
      \'type\' => \'group\',
      \'language\' => \'und\',
      \'created\' => \'1357269426\',
      \'changed\' => \'1436107154\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'8c479105-640f-46d5-a898-5fef69b0e244\',
      \'revision_timestamp\' => \'1436107154\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "This group contains various real datasets that show this platforms data previewer in action. \\r\\n\\r\\nThe previewer shows a configurable grid view of tabular data, plots columns of data on a graph, and shows geo-coded data on an interactive map.\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>This group contains various real datasets that show this platforms data previewer in action. </p>\\n<p>The previewer shows a configurable grid view of tabular data, plots columns of data on a graph, and shows geo-coded data on an interactive map.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'2\',
            \'uid\' => \'1\',
            \'filename\' => \'7041988029_411d985015_c.jpg\',
            \'uri\' => \'public://7041988029_411d985015_c_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'99273\',
            \'status\' => \'1\',
            \'timestamp\' => \'1434655164\',
            \'type\' => \'image\',
            \'uuid\' => \'d433b549-8429-43cd-9d56-d9b9cb31f09d\',
            \'field_file_image_alt_text\' => array(),
            \'field_file_image_title_text\' => array(),
            \'rdf_mapping\' => array(),
            \'metadata\' => array(
              \'height\' => 477,
              \'width\' => 800,
            ),
            \'alt\' => \'image\',
            \'title\' => \'\',
            \'width\' => \'800\',
            \'height\' => \'477\',
          ),
        ),
      ),
      \'group_group\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'12\',
        \'source\' => \'node/2\',
        \'alias\' => \'group/openfda-demonstration-datasets\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'46\',
      \'uid\' => \'1\',
      \'title\' => \'openFDA: Drug Recalls\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6defed78-d6da-4787-a1e4-5d846ace40f9\',
      \'nid\' => \'23\',
      \'type\' => \'resource\',
      \'language\' => \'und\',
      \'created\' => \'1436106638\',
      \'changed\' => \'1436208058\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'aed78027-17d6-44bb-8dd3-3bcb9ce9a045\',
      \'revision_timestamp\' => \'1436208058\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'This query is used by[ Yuck.io ](yuckio.kfgisit.com)to determine recalled drugs in a particular state. This query is limited to 100 items to avoid the API query limit on openFDA.gov but the implementation on Yuck.io uses a pager and state to avoid going over the query limit. \',
            \'summary\' => \'\',
            \'format\' => \'html\',
            \'safe_value\' => \'<p>This query is used by<a href="yuckio.kfgisit.com"> Yuck.io </a>to determine recalled drugs in a particular state. This query is limited to 100 items to avoid the API query limit on openFDA.gov but the implementation on Yuck.io uses a pager and state to avoid going over the query limit.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_dataset_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'21\',
          ),
        ),
      ),
      \'field_format\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'10\',
          ),
        ),
      ),
      \'field_link_api\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://api.fda.gov/drug/enforcement.json?limit=100&skip=0\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_link_remote_file\' => array(),
      \'field_upload\' => array(),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'2\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'41\',
        \'source\' => \'node/23\',
        \'alias\' => \'dataset/openfda-yuckio-datasets/resource/aed78027-17d6-44bb-8dd3-3bcb9ce9a045\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'40\',
      \'uid\' => \'1\',
      \'title\' => \'Top Adverse Drug Reactions\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'41556706-3924-4540-b61c-9b010cec2e89\',
      \'nid\' => \'19\',
      \'type\' => \'resource\',
      \'language\' => \'und\',
      \'created\' => \'1436043599\',
      \'changed\' => \'1436043599\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'db971b68-7f29-4337-857f-d2d5ba3d4b44\',
      \'revision_timestamp\' => \'1436043599\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'openFDA query for adverse drug reactions \',
            \'summary\' => \'\',
            \'format\' => \'html\',
            \'safe_value\' => \'<p>openFDA query for adverse drug reactions</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_dataset_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'18\',
          ),
        ),
      ),
      \'field_format\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'10\',
          ),
        ),
      ),
      \'field_link_api\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://api.fda.gov/drug/event.json?search=(receivedate:([20040101+TO+20150101]))&count=patient.reaction.reactionmeddrapt.exact\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_link_remote_file\' => array(),
      \'field_upload\' => array(),
      \'og_group_ref\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'35\',
        \'source\' => \'node/19\',
        \'alias\' => \'dataset/openfda-top-adverse-reactions/resource/db971b68-7f29-4337-857f-d2d5ba3d4b44\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'79\',
      \'uid\' => \'1\',
      \'title\' => \'openFDA: Recalled Food Items\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e40a68d9-4b5d-4a66-afba-54780046055b\',
      \'nid\' => \'22\',
      \'type\' => \'resource\',
      \'language\' => \'und\',
      \'created\' => \'1436106274\',
      \'changed\' => \'1436208022\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ec44bb86-999c-45f8-9a4c-c73e7b8fc972\',
      \'revision_timestamp\' => \'1436208022\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'This is the API query that [Yuck.io](yuckio.kfgisit.com) uses to determine food recalls. The query is additionally limited by state on Yuck.io as to not go over the no-key-required API query limits of the openFDA API. \',
            \'summary\' => \'\',
            \'format\' => \'html\',
            \'safe_value\' => \'<p>This is the API query that <a href="yuckio.kfgisit.com">Yuck.io</a> uses to determine food recalls. The query is additionally limited by state on Yuck.io as to not go over the no-key-required API query limits of the openFDA API.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_dataset_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'21\',
          ),
        ),
      ),
      \'field_format\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'10\',
          ),
        ),
      ),
      \'field_link_api\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://api.fda.gov/food/enforcement.json?&limit=100&skip=0\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_link_remote_file\' => array(),
      \'field_upload\' => array(),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'2\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'40\',
        \'source\' => \'node/22\',
        \'alias\' => \'dataset/openfda-yuckio-datasets/resource/ec44bb86-999c-45f8-9a4c-c73e7b8fc972\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'41\',
      \'uid\' => \'1\',
      \'title\' => \'openFDA: Interactive Adverse Drug Reactions\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4d1800ce-0a29-41ab-9da3-4c92bf09760d\',
      \'nid\' => \'20\',
      \'type\' => \'resource\',
      \'language\' => \'und\',
      \'created\' => \'1436105934\',
      \'changed\' => \'1436208058\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f758ce01-4f5e-45e6-a987-1dd349da7f2d\',
      \'revision_timestamp\' => \'1436208058\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'[Click here](/openfda-top-adverse-drug-reactions-2004-01-01-2015-07-01) to explore an interactive front end with this dataset. \',
            \'summary\' => \'\',
            \'format\' => \'html\',
            \'safe_value\' => \'<p><a href="/openfda-top-adverse-drug-reactions-2004-01-01-2015-07-01">Click here</a> to explore an interactive front end with this dataset.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_dataset_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'18\',
          ),
        ),
      ),
      \'field_format\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'14\',
          ),
        ),
      ),
      \'field_link_api\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://bpademo.dev.wwbtc.com/openfda-top-adverse-drug-reactions-2004-01-01-2015-07-01\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_link_remote_file\' => array(),
      \'field_upload\' => array(),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'2\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'37\',
        \'source\' => \'node/20\',
        \'alias\' => \'dataset/openfda-top-adverse-reactions/resource/f758ce01-4f5e-45e6-a987-1dd349da7f2d\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'35\',
      \'uid\' => \'1\',
      \'title\' => \'openFDA: Food Recalls\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6ea1956f-61f3-4cd2-bf95-2c33bbfcdc10\',
      \'nid\' => \'16\',
      \'type\' => \'resource\',
      \'language\' => \'und\',
      \'created\' => \'1436032741\',
      \'changed\' => \'1436208058\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'fa456a99-f452-4000-8d56-dd87ce1edb18\',
      \'revision_timestamp\' => \'1436208058\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_dataset_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'12\',
          ),
          array(
            \'target_id\' => \'21\',
          ),
        ),
      ),
      \'field_format\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'10\',
          ),
        ),
      ),
      \'field_link_api\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/dataset/fda-api-dataset-tests/resource/fa456a99-f452-4000-8d56-dd87ce1edb18\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_link_remote_file\' => array(),
      \'field_upload\' => array(),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'2\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'30\',
        \'source\' => \'node/16\',
        \'alias\' => \'dataset/fda-api-dataset-tests/resource/fa456a99-f452-4000-8d56-dd87ce1edb18\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
