# Fully Made Version of KFG's Drupal Data Explorer project
[![Build Status](https://travis-ci.org/KFGisIT/gsa-bpa-drupal.svg?branch=master)](https://travis-ci.org/KFGisIT/gsa-bpa-drupal)

[![KFG Video Walkthrough of GSA BPA Submission](http://img.youtube.com/vi/f4IEkTLi4hg/0.jpg)](http://www.youtube.com/watch?v=f4IEkTLi4hg "KFG Video Walkthrough")


This is a Drupal site based on an installation profile of Drupal called DKAN, which is in turn based on Pantheon's Drupal installation profile for cloud-hosted Drupal. Though a drush make file is provided, this site has already been "made" with drush make to expedite the development and testing process. The installation profile has also been extended to include JSON functionality and JSON now has a supported mechanism for being imported into a table-based dataset schema within the Drupal installation. In addition, these imported datasets are exposed to Drupal Views. The d3 javascript library has been added for graphing, and two example datasets/subprojects have also been added: The Yuck.IO dataset -- an interactive dataset exploration website that shows food and drug recalls in your area, and the Top Adverse Drug Reactions, which is a JSON feed from the openFDA API and is backed by a view. In addition to that, a demonstration of an AngularJS front-end for the Top Adverse Drug Reactions is also provided along site the demonstration dataset. 

To install, follow the same directions as Drupal core: https://www.drupal.org/documentation/install , or the steps below:

Be sure to substitute your database username, password and database name! 

```
mkdir html && git clone --branch master  https://github.com/KFGisIT/gsa-bpa-drupal.git html
 drush  site-install -y dkan --db-url="mysql://$DRUPAL_SITE_USER:$DRUPAL_SITE_DB_PASSWORD@localhost/$DRUPAL_SITE_DB_NAME" --account-name=admin --account-pass=admin
 drush dl feeds_jsonpath_parser d3 feeds_ex feeds_tamper node_export 
 drush en -y d3 node_export node_export_features d3_views feeds_ex feeds_ui feeds_tamper feeds_tamper_ui uuid_path php 
 drush uuid-create-missing -y 
 drush en -y custom_18f
```

See the main repository for further instructions, support, and community: http://github.com/kfgisit/gsa-bpa-drupal

# Running this on Pantheon

This is a fork based on [Pantheon DROPs](https://github.com/pantheon-systems/drops-7)
and the "stock" DKAN installation, but with mods to support KFG customers.

## How to update Drupal Drop from Pantheon Git Repository

Just for the first time, add the pantheon base drop repo as a remote
```bash
git remote add pantheon https://github.com/pantheon-systems/drops-7.git
```

Any time you want to integrate their changes into this repo

```bash
# Make a branch so we can test if their work pass our testing
git checkout -b updating_from_pantheon_drops
# Pull their master into your branch (solve conflicts if any)
git merge pantheon/master -X theirs
# Push changes and wait for travis to run the build on the 'updating_from_pantheon_drops' branch.  
git push origin updating_from_pantheon_drops
```

Fix any issues with the build (if any) pushing commits. When everything is ok squash all your fix commits into one. Then:

```bash
# Checkout master
git checkout master
# Rebase changes from your branch
git rebase updating_from_pantheon_drops
# Push
git push origin master
# Delete integration branch
git push origin :updating_from_pantheon_drops
```

## How to update dkan profile

```bash
# Make a branch so we can test the travis build sep
git checkout -b rebuilding_dkan_profile
# Run dkan update script
cd scripts
./rebuild-dkan.sh
# Add, Commit, Push and check the travis build for the 'rebuilding_dkan_profile' branch
git add ../profiles/dkan -A
git commit -m "Rebuilding dkan"
git push origin rebuilding_dkan_profile
```

Fix any issues with the build (if any) pushing commits. When everything is ok squash all your fix commits into one. Then:

```bash
# Checkout master
git checkout master
# Rebase changes from your branch
git rebase rebuilding_dkan_profile
# Push
git push origin master
# Delete integration branch
git push origin :rebuilding_dkan_profile
```

