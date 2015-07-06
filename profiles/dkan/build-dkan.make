api = 2
core = 7.x

includes[core] = drupal-org-core.make

; Profile

projects[dkan][type] = profile
projects[dkan][download][type] = git
projects[dkan][download][url] = https://github.com/NuCivic/dkan.git
projects[dkan][download][branch] = 7.x-1.x

; D3.js 
libraries[d3][download][type] = "get"
libraries[d3][download][url] = "https://github.com/mbostock/d3/zipball/master"
libraries[d3][directory_name] = "d3"
libraries[d3][destination] = "libraries"

