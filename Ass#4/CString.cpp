<!DOCTYPE html>
<html lang="en">
<head>
  <meta id="bb-bootstrap" data-current-user="{&quot;username&quot;: &quot;braza501&quot;, &quot;displayName&quot;: &quot;Alexey&quot;, &quot;uuid&quot;: &quot;{6fa84835-9047-49c8-a071-3045f0ecbd60}&quot;, &quot;firstName&quot;: &quot;Alexey&quot;, &quot;avatarUrl&quot;: &quot;https://bitbucket.org/account/braza501/avatar/32/?ts=1489894952&quot;, &quot;lastName&quot;: &quot;&quot;, &quot;isTeam&quot;: false, &quot;isSshEnabled&quot;: false, &quot;isKbdShortcutsEnabled&quot;: true, &quot;id&quot;: 8066183, &quot;isAuthenticated&quot;: true}"
data-atlassian-id="557058:6abab86b-fd61-4467-882d-25c55a8d91e7" />
  
  
  <meta http-equiv="X-UA-Compatible" content="IE=edge" />
  <meta charset="utf-8">
  <title>
  braza501 / C++ Course HWs 
  / source  / HW7 / CString.cpp
 &mdash; Bitbucket
</title>
  <script type="text/javascript">window.NREUM||(NREUM={}),__nr_require=function(e,n,t){function r(t){if(!n[t]){var o=n[t]={exports:{}};e[t][0].call(o.exports,function(n){var o=e[t][1][n];return r(o||n)},o,o.exports)}return n[t].exports}if("function"==typeof __nr_require)return __nr_require;for(var o=0;o<t.length;o++)r(t[o]);return r}({1:[function(e,n,t){function r(){}function o(e,n,t){return function(){return i(e,[c.now()].concat(u(arguments)),n?null:this,t),n?void 0:this}}var i=e("handle"),a=e(2),u=e(3),f=e("ee").get("tracer"),c=e("loader"),s=NREUM;"undefined"==typeof window.newrelic&&(newrelic=s);var p=["setPageViewName","setCustomAttribute","setErrorHandler","finished","addToTrace","inlineHit","addRelease"],d="api-",l=d+"ixn-";a(p,function(e,n){s[n]=o(d+n,!0,"api")}),s.addPageAction=o(d+"addPageAction",!0),s.setCurrentRouteName=o(d+"routeName",!0),n.exports=newrelic,s.interaction=function(){return(new r).get()};var m=r.prototype={createTracer:function(e,n){var t={},r=this,o="function"==typeof n;return i(l+"tracer",[c.now(),e,t],r),function(){if(f.emit((o?"":"no-")+"fn-start",[c.now(),r,o],t),o)try{return n.apply(this,arguments)}finally{f.emit("fn-end",[c.now()],t)}}}};a("setName,setAttribute,save,ignore,onEnd,getContext,end,get".split(","),function(e,n){m[n]=o(l+n)}),newrelic.noticeError=function(e){"string"==typeof e&&(e=new Error(e)),i("err",[e,c.now()])}},{}],2:[function(e,n,t){function r(e,n){var t=[],r="",i=0;for(r in e)o.call(e,r)&&(t[i]=n(r,e[r]),i+=1);return t}var o=Object.prototype.hasOwnProperty;n.exports=r},{}],3:[function(e,n,t){function r(e,n,t){n||(n=0),"undefined"==typeof t&&(t=e?e.length:0);for(var r=-1,o=t-n||0,i=Array(o<0?0:o);++r<o;)i[r]=e[n+r];return i}n.exports=r},{}],4:[function(e,n,t){n.exports={exists:"undefined"!=typeof window.performance&&window.performance.timing&&"undefined"!=typeof window.performance.timing.navigationStart}},{}],ee:[function(e,n,t){function r(){}function o(e){function n(e){return e&&e instanceof r?e:e?f(e,u,i):i()}function t(t,r,o,i){if(!d.aborted||i){e&&e(t,r,o);for(var a=n(o),u=m(t),f=u.length,c=0;c<f;c++)u[c].apply(a,r);var p=s[y[t]];return p&&p.push([b,t,r,a]),a}}function l(e,n){v[e]=m(e).concat(n)}function m(e){return v[e]||[]}function w(e){return p[e]=p[e]||o(t)}function g(e,n){c(e,function(e,t){n=n||"feature",y[t]=n,n in s||(s[n]=[])})}var v={},y={},b={on:l,emit:t,get:w,listeners:m,context:n,buffer:g,abort:a,aborted:!1};return b}function i(){return new r}function a(){(s.api||s.feature)&&(d.aborted=!0,s=d.backlog={})}var u="nr@context",f=e("gos"),c=e(2),s={},p={},d=n.exports=o();d.backlog=s},{}],gos:[function(e,n,t){function r(e,n,t){if(o.call(e,n))return e[n];var r=t();if(Object.defineProperty&&Object.keys)try{return Object.defineProperty(e,n,{value:r,writable:!0,enumerable:!1}),r}catch(i){}return e[n]=r,r}var o=Object.prototype.hasOwnProperty;n.exports=r},{}],handle:[function(e,n,t){function r(e,n,t,r){o.buffer([e],r),o.emit(e,n,t)}var o=e("ee").get("handle");n.exports=r,r.ee=o},{}],id:[function(e,n,t){function r(e){var n=typeof e;return!e||"object"!==n&&"function"!==n?-1:e===window?0:a(e,i,function(){return o++})}var o=1,i="nr@id",a=e("gos");n.exports=r},{}],loader:[function(e,n,t){function r(){if(!x++){var e=h.info=NREUM.info,n=d.getElementsByTagName("script")[0];if(setTimeout(s.abort,3e4),!(e&&e.licenseKey&&e.applicationID&&n))return s.abort();c(y,function(n,t){e[n]||(e[n]=t)}),f("mark",["onload",a()+h.offset],null,"api");var t=d.createElement("script");t.src="https://"+e.agent,n.parentNode.insertBefore(t,n)}}function o(){"complete"===d.readyState&&i()}function i(){f("mark",["domContent",a()+h.offset],null,"api")}function a(){return E.exists&&performance.now?Math.round(performance.now()):(u=Math.max((new Date).getTime(),u))-h.offset}var u=(new Date).getTime(),f=e("handle"),c=e(2),s=e("ee"),p=window,d=p.document,l="addEventListener",m="attachEvent",w=p.XMLHttpRequest,g=w&&w.prototype;NREUM.o={ST:setTimeout,CT:clearTimeout,XHR:w,REQ:p.Request,EV:p.Event,PR:p.Promise,MO:p.MutationObserver};var v=""+location,y={beacon:"bam.nr-data.net",errorBeacon:"bam.nr-data.net",agent:"js-agent.newrelic.com/nr-1026.min.js"},b=w&&g&&g[l]&&!/CriOS/.test(navigator.userAgent),h=n.exports={offset:u,now:a,origin:v,features:{},xhrWrappable:b};e(1),d[l]?(d[l]("DOMContentLoaded",i,!1),p[l]("load",r,!1)):(d[m]("onreadystatechange",o),p[m]("onload",r)),f("mark",["firstbyte",u],null,"api");var x=0,E=e(4)},{}]},{},["loader"]);</script>
  


<meta id="bb-canon-url" name="bb-canon-url" content="https://bitbucket.org">
<meta name="bb-api-canon-url" content="https://api.bitbucket.org">
<meta name="apitoken" content="{&quot;token&quot;: &quot;i3sAeQSzzg4-Mgiw-fk1uZ_kKEGTmDzdy9euVFUNOpz4A_h1IpUMIRdQiWCsKcQcyzn5Ne5yIMB7JMfmgF1kXmehT9RtYw==&quot;, &quot;connectionId&quot;: 619065, &quot;expiration&quot;: 1489896352.16829}">

<meta name="bb-commit-hash" content="0fb63cacd50e">
<meta name="bb-app-node" content="app-124">
<meta name="bb-view-name" content="bitbucket.apps.repo2.views.filebrowse">
<meta name="ignore-whitespace" content="False">
<meta name="tab-size" content="None">
<meta name="locale" content="en">

<meta name="application-name" content="Bitbucket">
<meta name="apple-mobile-web-app-title" content="Bitbucket">
<meta name="theme-color" content="#205081">
<meta name="msapplication-TileColor" content="#205081">
<meta name="msapplication-TileImage" content="https://d301sr5gafysq2.cloudfront.net/0fb63cacd50e/img/logos/bitbucket/white-256.png">
<link rel="apple-touch-icon" sizes="192x192" type="image/png" href="https://d301sr5gafysq2.cloudfront.net/0fb63cacd50e/img/bitbucket_avatar/192/bitbucket.png">
<link rel="icon" sizes="192x192" type="image/png" href="https://d301sr5gafysq2.cloudfront.net/0fb63cacd50e/img/bitbucket_avatar/192/bitbucket.png">
<link rel="icon" sizes="16x16 32x32" type="image/x-icon" href="/favicon.ico">
<link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="Bitbucket">
  <meta name="description" content="">
  
  
    
  



  <link rel="stylesheet" href="https://d301sr5gafysq2.cloudfront.net/0fb63cacd50e/css/entry/vendor.css" />
<link rel="stylesheet" href="https://d301sr5gafysq2.cloudfront.net/0fb63cacd50e/css/entry/app.css" />




  
  <script src="https://d301sr5gafysq2.cloudfront.net/0fb63cacd50e/dist/webpack/early.js"></script>
  
  
    <link href="/braza501/c-course-hws/rss?token=7d2bce9eea57f56f9409b19b3e9e651c" rel="alternate nofollow" type="application/rss+xml" title="RSS feed for C++ Course HWs" />

</head>
<body class="production aui-page-sidebar aui-sidebar-expanded"
    data-static-url="https://d301sr5gafysq2.cloudfront.net/0fb63cacd50e/"
data-base-url="https://bitbucket.org"
data-no-avatar-image="https://d301sr5gafysq2.cloudfront.net/0fb63cacd50e/img/default_avatar/user_blue.svg"
data-current-user="{&quot;username&quot;: &quot;braza501&quot;, &quot;displayName&quot;: &quot;Alexey&quot;, &quot;uuid&quot;: &quot;{6fa84835-9047-49c8-a071-3045f0ecbd60}&quot;, &quot;firstName&quot;: &quot;Alexey&quot;, &quot;avatarUrl&quot;: &quot;https://bitbucket.org/account/braza501/avatar/32/?ts=1489894952&quot;, &quot;lastName&quot;: &quot;&quot;, &quot;isTeam&quot;: false, &quot;isSshEnabled&quot;: false, &quot;isKbdShortcutsEnabled&quot;: true, &quot;id&quot;: 8066183, &quot;isAuthenticated&quot;: true}"
data-atlassian-id="{&quot;loginStatusUrl&quot;: &quot;https://id.atlassian.com/profile/rest/profile&quot;}"
data-settings="{&quot;MENTIONS_MIN_QUERY_LENGTH&quot;: 3}"

data-current-repo="{&quot;scm&quot;: &quot;git&quot;, &quot;readOnly&quot;: false, &quot;mainbranch&quot;: {&quot;name&quot;: &quot;master&quot;}, &quot;language&quot;: &quot;&quot;, &quot;owner&quot;: {&quot;username&quot;: &quot;braza501&quot;, &quot;uuid&quot;: &quot;6fa84835-9047-49c8-a071-3045f0ecbd60&quot;, &quot;isTeam&quot;: false}, &quot;fullslug&quot;: &quot;braza501/c-course-hws&quot;, &quot;slug&quot;: &quot;c-course-hws&quot;, &quot;id&quot;: 21948411, &quot;pygmentsLanguage&quot;: null}"
data-current-cset="286c32a03bb586675f981e6fc28c3f6b037a0d61"





data-browser-monitoring="true"
data-switch-create-pullrequest-commit-status="true"



data-hide-inbox="true">
<div id="page">
  
    
    <div id="wrapper">
      
  


      
        <header id="header" role="banner" data-module="header/tracking">
          
  


          <nav class="aui-header aui-dropdown2-trigger-group" role="navigation">
            <div class="aui-header-inner">
              <div class="aui-header-primary">
                
  
  <div class="aui-header-before">
    <button class="app-switcher-trigger aui-dropdown2-trigger aui-dropdown2-trigger-arrowless" aria-controls="app-switcher" aria-haspopup="true" tabindex="0"
    
        data-nav-links-count="0"
    
    >
      <span class="aui-icon aui-icon-small aui-iconfont-appswitcher">Linked applications</span>
    </button>
    
      <nav id="app-switcher" class="aui-dropdown2 aui-style-default">
        <div class="aui-dropdown2-section blank-slate">
          <h2>Connect Bitbucket with other great Atlassian products:</h2>
          <dl>
            <dt class="jira">JIRA</dt>
            <dd>Project and issue tracking</dd>
            <dt class="confluence">Confluence</dt>
            <dd>Collaboration and content sharing</dd>
            <dt class="bamboo">Bamboo</dt>
            <dd>Continuous integration</dd>
          </dl>
          <ul>
            <li>
              <a href="https://www.atlassian.com/ondemand/signup/?product=jira-software.ondemand&utm_source=bitbucket&utm_medium=button&utm_campaign=app_switcher&utm_content=trial_button"
                 class="aui-button aui-button-primary" target="_blank" id="ondemand-trial" data-ct="bitbucket.header.app.switcher.dropdown.trial.click">Free trial</a>
            </li>
            <li>
              <a href="https://www.atlassian.com/software?utm_source=bitbucket&utm_medium=button&utm_campaign=app_switcher&utm_content=learn_more_button#cloud-products"
                 class="aui-button" target="_blank" id="ondemand-learn-more" data-ct="bitbucket.header.app.switcher.dropdown.learnmore.click">Learn more</a>
            </li>
          </ul>
        </div>
      </nav>
    
  </div>


                
                  <h1 class="aui-header-logo aui-header-logo-bitbucket "
                      id="logo" data-ct="bitbucket.header.logo.click">
                    <a href="/">
                      <span class="aui-header-logo-device">Bitbucket</span>
                    </a>
                  </h1>
                
                
  

    
    
  

    
    
  
<ul class="aui-nav">
  
    <li>
      
    
    
  
      <a class="aui-dropdown2-trigger" href="#teams-dropdown" id="teams-dropdown-trigger"
          data-module="header/teams-dropdown"
          aria-owns="teams-dropdown" aria-haspopup="true">
        Teams
        <span class="aui-icon-dropdown"></span>
      </a>
      <div id="teams-dropdown" class="aui-dropdown2 aui-style-default">
        <div class="aui-dropdown2-section nav-dropdown--blank-state">
          <p>
            Effective collaboration starts with teams and projects.
          </p>
          <ul>
            <li>
              <a class="aui-button aui-button-link nav-dropdown--blank-state--cta nav-dropdown--blank-state--link" id="create-team-blank-slate"
                  data-ct="bitbucket.header.team.dropdown.create.click" data-ct-data='{"empty": true}'
                  href="/account/create-team/?team_source=menu_blank"
                  >Create a team</a>
            </li>
          </ul>
        </div>
      </div>
    </li>
    <li>
      
    
    
  
      <a class="aui-dropdown2-trigger" href="#teams-dropdown" id="projects-dropdown-trigger"
          data-module="header/projects-dropdown"
          aria-owns="projects-dropdown" aria-haspopup="true">
        Projects
        <span class="aui-icon-dropdown"></span>
      </a>
      <div id="projects-dropdown" class="aui-dropdown2 aui-style-default">
        <div class="aui-dropdown2-section nav-dropdown--blank-state">
          <p>
            
              Get a team, get projects, get organized.
            
          </p>
          <ul>
            <li>
              <a class="aui-button aui-button-link nav-dropdown--blank-state--cta nav-dropdown--blank-state--link" id="projects-create-team-blank-slate"
                  href="/account/create-team/?team_source=menu_blank"
                  >Create a team</a>
            </li>
          </ul>
        </div>
      </div>
    </li>
    <li>
      <a class="aui-dropdown2-trigger" id="repositories-dropdown-trigger"
          aria-owns="repo-dropdown" aria-haspopup="true" href="/repo/mine">
        Repositories
        <span class="aui-icon-dropdown"></span>
      </a>
      <nav id="repo-dropdown" class="aui-dropdown2 aui-style-default">
        <div id="repo-dropdown-recent" data-module="header/recent-repos"></div>
        <div class="aui-dropdown2-section">
          <ul>
            <li>
              <a href="/repo/create" class="new-repository" id="create-repo-link" data-ct="bitbucket.header.repository.dropdown.create.click">
                Create repository
              </a>
            </li>
            <li>
              <a href="/repo/import" class="import-repository" id="import-repo-link" data-ct="bitbucket.header.repository.dropdown.import.click">
                Import repository
              </a>
            </li>
          </ul>
        </div>
      </nav>
    </li>
    <li>
      <a class="aui-dropdown2-trigger" id="snippets-dropdown-trigger"
        aria-owns="nav-recent-snippets" aria-haspopup="true" href="/dashboard/snippets">
        Snippets
        <span class="aui-icon-dropdown"></span>
      </a>
      <nav id="nav-recent-snippets" class="aui-dropdown2 aui-style-default">
        <div id="snippet-dropdown-recent" class="aui-dropdown2-section"
            data-module="snippets/recent-list"></div>
        <div class="aui-dropdown2-section">
          <ul>
            <li>
              <a href="/snippets/new" data-ct="bitbucket.header.snippets.dropdown.create.click">
                Create snippet
              </a>
            </li>
          </ul>
        </div>
      </nav>
    </li>
  
</ul>

              </div>
              <div class="aui-header-secondary">
                
  

<ul role="menu" class="aui-nav">
  
  <li>
    <form action="/repo/all" method="get" class="aui-quicksearch">
      <label for="search-query" class="assistive">owner/repository</label>
      <input id="search-query" class="bb-repo-typeahead" type="text"
             placeholder="Find a repository&hellip;" name="name" autocomplete="off"
             data-bb-typeahead-focus="false">
    </form>
  </li>
  <li>
    <a id="help-menu-link" class="aui-nav-link" href="#"
        aria-controls="help-menu-dialog"
        data-aui-trigger>
      <span id="help-menu-icon" class="aui-icon aui-icon-small aui-iconfont-help"></span>
    </a>
  </li>
  
  
    <li>
      <a class="aui-dropdown2-trigger aui-dropdown2-trigger-arrowless"
         aria-owns="user-dropdown" aria-haspopup="true" data-container="#header .aui-header-inner"
         href="/braza501/" title="braza501" id="user-dropdown-trigger">
        <div class="aui-avatar aui-avatar-small">
            <div class="aui-avatar-inner">
                <img src="https://d301sr5gafysq2.cloudfront.net/0fb63cacd50e/img/default_avatar/user_blue.svg" class="deferred-image" data-src-url="https://bitbucket.org/account/braza501/avatar/32/?ts=1489894952" data-src-url-2x="https://bitbucket.org/account/braza501/avatar/64/?ts=1489894952" alt="Logged in as braza501" height="24" width="24">
            </div>
        </div>
      </a>
      <nav id="user-dropdown" class="aui-dropdown2 aui-style-default" aria-hidden="true">
        <div class="aui-dropdown2-section">
          <div class="aid-profile">
            <div class="aui-avatar aui-avatar-large">
              <div class="aui-avatar-inner">

                
                  
                

                <a class="aid-profile--change-avatar hoverable" target="_blank" href="https://id.atlassian.com/profile/profile.action#edit-avatar">
                  <span class="hoverable--overlay">
                    <span class="aui-icon aui-icon-large aid-profile--avatar-icon"></span>
                  </span>
                  <img src="https://d301sr5gafysq2.cloudfront.net/0fb63cacd50e/img/default_avatar/user_blue.svg" class="deferred-image" data-src-url="https://bitbucket.org/account/braza501/avatar/48/?ts=1489894952" data-src-url-2x="https://bitbucket.org/account/braza501/avatar/96/?ts=1489894952" height="48" width="48">
                </a>
            </div>
          </div>
          <div class="aid-profile--info">
            <div class="aid-profile--name">
              Alexey
            </div>
            <div class="aid-profile--email">
              tenrakyshka@gmail.com
            </div>
          </div>
        </div>
          
            <ul>
              <li>
                <a href="https://id.atlassian.com/profile" id="account-link" target="_blank" data-ct="bitbucket.navbar.dropdown.manage_aid_account.click">Manage Atlassian account</a>
              </li>
            </ul>
          
        </div>
        <div class="aui-dropdown2-section">
          <ul>
            <li>
              <a href="/braza501/" id="profile-link">View profile</a>
            </li>
            <li>
              <a href="/account/user/braza501/" id="account-link" data-ct="bitbucket.navbar.dropdown.manage_account.click">Bitbucket settings</a>
            </li>
            <li>
              <a href="/account/user/braza501/addon-directory" id="account-addons" data-ct="bitbucket.navbar.dropdown.addons.click">Integrations</a>
            </li>
            
          </ul>
        </div>
        <div class="aui-dropdown2-section">
          <ul>
            <li>
              
                <a href="https://id.atlassian.com/logout?continue=https%3A%2F%2Fbitbucket.org%2Faccount%2Fsignout%2F" id="log-out-link">Log out</a>
              
            </li>
          </ul>
        </div>
      </nav>
    </li>
    
      <li id="nps-survey-container"></li>
    
  
</ul>

              </div>
            </div>
          </nav>
        </header>
      

      
  

<header id="account-warning" role="banner" data-module="header/account-warning"
        class="aui-message-banner warning
        ">
  <div class="aui-message-banner-inner">
    <span class="aui-icon aui-icon-warning"></span>
    <span class="message">
    
    </span>
  </div>
</header>



      
  
<header id="aui-message-bar">
  
</header>


    <div id="content" role="main">
      
        
  
    <div class="aui-sidebar repo-sidebar"
    data-module="repo/sidebar"
  >
  <div class="aui-sidebar-wrapper">
    <div class="aui-sidebar-body">
      <header class="aui-page-header">
        <div class="aui-page-header-inner">
          <div class="aui-page-header-image">
            <a href="/braza501/c-course-hws" id="repo-avatar-link" class="repo-link">
              <span class="aui-avatar aui-avatar-large aui-avatar-project">
                <span class="aui-avatar-inner">
                  <img src="https://d301sr5gafysq2.cloudfront.net/0fb63cacd50e/img/repo-avatars/default.svg" alt="">
                </span>
              </span>
            </a>
          </div>
          <div class="aui-page-header-main">
            <h1>
              
                <span class="aui-icon aui-icon-small aui-iconfont-locked"></span>
              
              <a href="/braza501/c-course-hws" title="C++ Course HWs" class="entity-name">C++ Course HWs</a>
            </h1>
          </div>
        </div>
      </header>
      <nav class="aui-navgroup aui-navgroup-vertical">
        <div class="aui-navgroup-inner">
          
            
              <div class="aui-sidebar-group aui-sidebar-group-actions repository-actions forks-enabled can-create">
                <div class="aui-nav-heading">
                  <strong>Actions</strong>
                </div>
                <ul id="repo-actions" class="aui-nav">
                  
                  
                    <li>
                      <a id="repo-clone-button" class="aui-nav-item "
                        href="#clone"
                        data-ct="bitbucket.sidebar.actions.click"
                        data-ct-data="{&quot;label&quot;: &quot;repository.clone&quot;}"
                        data-module="components/clone/clone-dialog"
                        target="_self">
                        
                          <span class="aui-icon aui-icon-large icon-clone"></span>
                        
                        <span class="aui-nav-item-label">Clone</span>
                      </a>
                    </li>
                  
                    <li>
                      <a id="repo-create-branch-link" class="aui-nav-item create-branch-button"
                        href="/braza501/c-course-hws/branch"
                        data-ct="bitbucket.sidebar.actions.click"
                        data-ct-data="{&quot;label&quot;: &quot;repository.create_branch&quot;}"
                        data-module="repo/create-branch"
                        target="_self">
                        
                          <span class="aui-icon aui-icon-large icon-create-branch"></span>
                        
                        <span class="aui-nav-item-label">Create branch</span>
                      </a>
                    </li>
                  
                    <li>
                      <a id="repo-create-pull-request-link" class="aui-nav-item "
                        href="/braza501/c-course-hws/pull-requests/new"
                        data-ct="bitbucket.sidebar.actions.click"
                        data-ct-data="{&quot;label&quot;: &quot;create_pullrequest&quot;}"
                        
                        target="_self">
                        
                          <span class="aui-icon aui-icon-large icon-create-pull-request"></span>
                        
                        <span class="aui-nav-item-label">Create pull request</span>
                      </a>
                    </li>
                  
                    <li>
                      <a id="repo-compare-link" class="aui-nav-item "
                        href="/braza501/c-course-hws/branches/compare"
                        data-ct="bitbucket.sidebar.actions.click"
                        data-ct-data="{&quot;label&quot;: &quot;repository.compare&quot;}"
                        
                        target="_self">
                        
                          <span class="aui-icon aui-icon-large aui-icon-small aui-iconfont-devtools-compare"></span>
                        
                        <span class="aui-nav-item-label">Compare</span>
                      </a>
                    </li>
                  
                    <li>
                      <a id="repo-fork-link" class="aui-nav-item "
                        href="/braza501/c-course-hws/fork"
                        data-ct="bitbucket.sidebar.actions.click"
                        data-ct-data="{&quot;label&quot;: &quot;repository.fork&quot;}"
                        
                        target="_self">
                        
                          <span class="aui-icon aui-icon-large icon-fork"></span>
                        
                        <span class="aui-nav-item-label">Fork</span>
                      </a>
                    </li>
                  
                </ul>
              </div>
          
          <div class="aui-sidebar-group aui-sidebar-group-tier-one repository-sections">
            <div class="aui-nav-heading">
              <strong>Navigation</strong>
            </div>
            <ul class="aui-nav">
              
              
                <li>
                  <a id="repo-overview-link" class="aui-nav-item "
                    href="/braza501/c-course-hws/overview"
                    data-ct="bitbucket.sidebar.navigation.click"
                    data-ct-data="{&quot;label&quot;: &quot;repository.overview&quot;}"
                    
                    target="_self"
                    >
                    
                    
                      <span class="aui-icon aui-icon-large icon-overview"></span>
                    
                    <span class="aui-nav-item-label">
                      Overview
                      
                      
                    </span>
                  </a>
                </li>
              
                <li class="aui-nav-selected">
                  <a id="repo-source-link" class="aui-nav-item "
                    href="/braza501/c-course-hws/src"
                    data-ct="bitbucket.sidebar.navigation.click"
                    data-ct-data="{&quot;label&quot;: &quot;repository.source&quot;}"
                    
                    target="_self"
                    >
                    
                    
                      <span class="aui-icon aui-icon-large icon-source"></span>
                    
                    <span class="aui-nav-item-label">
                      Source
                      
                      
                    </span>
                  </a>
                </li>
              
                <li>
                  <a id="repo-commits-link" class="aui-nav-item "
                    href="/braza501/c-course-hws/commits/"
                    data-ct="bitbucket.sidebar.navigation.click"
                    data-ct-data="{&quot;label&quot;: &quot;repository.commits&quot;}"
                    
                    target="_self"
                    >
                    
                    
                      <span class="aui-icon aui-icon-large icon-commits"></span>
                    
                    <span class="aui-nav-item-label">
                      Commits
                      
                      
                    </span>
                  </a>
                </li>
              
                <li>
                  <a id="repo-branches-link" class="aui-nav-item "
                    href="/braza501/c-course-hws/branches/"
                    data-ct="bitbucket.sidebar.navigation.click"
                    data-ct-data="{&quot;label&quot;: &quot;repository.branches&quot;}"
                    
                    target="_self"
                    >
                    
                    
                      <span class="aui-icon aui-icon-large icon-branches"></span>
                    
                    <span class="aui-nav-item-label">
                      Branches
                      
                      
                    </span>
                  </a>
                </li>
              
                <li>
                  <a id="repo-pullrequests-link" class="aui-nav-item "
                    href="/braza501/c-course-hws/pull-requests/"
                    data-ct="bitbucket.sidebar.navigation.click"
                    data-ct-data="{&quot;label&quot;: &quot;repository.pullrequests&quot;}"
                    
                    target="_self"
                    >
                    
                    
                      <span class="aui-icon aui-icon-large icon-pull-requests"></span>
                    
                    <span class="aui-nav-item-label">
                      Pull requests
                      
                      
                    </span>
                  </a>
                </li>
              
                <li>
                  <a id="repopage-n7LeE-add-on-link" class="aui-nav-item aui-nav-item add-on-menu-item"
                    href="/braza501/c-course-hws/addon/pipelines-installer/home"
                    data-ct="bitbucket.sidebar.navigation.click"
                    data-ct-data="{&quot;addon_key&quot;: &quot;pipelines-installer&quot;, &quot;module_key&quot;: &quot;home&quot;, &quot;label&quot;: &quot;site.addon&quot;}"
                    
                    target="_self"
                    >
                    
                    
                      <span class="aui-icon aui-icon-large aui-iconfont-build"></span>
                    
                    <span class="aui-nav-item-label">
                      Pipelines
                      
                      
                        
                          <span class="aui-lozenge aui-lozenge-current">New</span>
                        
                      
                    </span>
                  </a>
                </li>
              
                <li>
                  <a id="repo-issues-link" class="aui-nav-item "
                    href="/braza501/c-course-hws/issues?status=new&amp;status=open"
                    data-ct="bitbucket.sidebar.navigation.click"
                    data-ct-data="{&quot;label&quot;: &quot;issues&quot;}"
                    
                    target="_self"
                    title="( type &#39;r&#39; then &#39;i&#39; )">
                    
                    
                      <span class="aui-icon aui-icon-large icon-issues"></span>
                    
                    <span class="aui-nav-item-label">
                      Issues
                      
                      
                    </span>
                  </a>
                </li>
              
                <li>
                  <a id="repo-downloads-link" class="aui-nav-item "
                    href="/braza501/c-course-hws/downloads/"
                    data-ct="bitbucket.sidebar.navigation.click"
                    data-ct-data="{&quot;label&quot;: &quot;repository.downloads&quot;}"
                    
                    target="_self"
                    >
                    
                    
                      <span class="aui-icon aui-icon-large icon-downloads"></span>
                    
                    <span class="aui-nav-item-label">
                      Downloads
                      
                      
                    </span>
                  </a>
                </li>
              
            </ul>
          </div>
          <div class="aui-sidebar-group aui-sidebar-group-tier-one repository-settings">
            <div class="aui-nav-heading">
              <strong class="assistive">Settings</strong>
            </div>
            <ul class="aui-nav">
              
              
                <li>
                  <a id="repo-settings-link" class="aui-nav-item "
                    href="/braza501/c-course-hws/admin"
                    
                    target="_self"
                    >
                    
                    <span class="aui-icon aui-icon-large icon-settings"></span>
                    <span class="aui-nav-item-label">Settings</span>
                  </a>
                </li>
              
            </ul>
          </div>
          
            
              <div class="hidden kb-shortcut-actions">
                <a id="repo-create-issue" href="/braza501/c-course-hws/issues/new"></a>
              </div>
            
          
        </div>
      </nav>
    </div>
    <div class="aui-sidebar-footer">
      <a class="aui-sidebar-toggle aui-sidebar-footer-tipsy aui-button aui-button-subtle"><span class="aui-icon"></span></a>
    </div>
  </div>
  

<div id="repo-clone-dialog" class="clone-dialog hidden">
  





  

<div class="clone-url" data-module="components/clone/url-dropdown" data-owner="6fa84835-9047-49c8-a071-3045f0ecbd60"
     data-location-context="header"
     data-fetch-url="https://braza501@bitbucket.org/braza501/c-course-hws.git"
     data-push-url="https://braza501@bitbucket.org/braza501/c-course-hws.git"
     
     
     
     >
  <div class="aui-buttons">
    
    <button class="aui-button aui-dropdown2-trigger protocol-trigger"
            data-command-prefix="git clone"
            data-primary-https="https://braza501@bitbucket.org/braza501/c-course-hws.git"
            data-primary-ssh="git@bitbucket.org:braza501/c-course-hws.git"
            aria-controls="protocols-list-header">
      <span class="dropdown-text">HTTPS</span>
    </button>
    <aui-dropdown-menu id="protocols-list-header" data-aui-alignment="bottom left">
      <aui-section id="protocols-list-section" class="aui-list-truncate">
        <aui-item-radio class="item-link https" checked>HTTPS</aui-item-radio>
        
          <aui-item-radio class="item-link ssh">SSH</aui-item-radio>
        
      </aui-section>
    </aui-dropdown-menu>
    <input type="text" readonly="readonly" class="clone-url-input"
           value="git clone https://braza501@bitbucket.org/braza501/c-course-hws.git">
  </div>
  
</div>

  <div class="learn-more">
    <p>Need help cloning? Learn how to
         <a href="https://confluence.atlassian.com/x/4whODQ" target="_blank">clone a repository</a>.
    </p>
  </div>
  
  <div class="sourcetree-callout clone-in-sourcetree"
  data-module="components/clone/clone-in-sourcetree"
  data-https-url="https://braza501@bitbucket.org/braza501/c-course-hws.git"
  data-ssh-url="ssh://git@bitbucket.org/braza501/c-course-hws.git">

  <div>
    <button class="aui-button aui-button-primary">
      
        Clone in SourceTree
      
    </button>
  </div>

  <p class="windows-text">
    
      <a href="http://www.sourcetreeapp.com/?utm_source=internal&amp;utm_medium=link&amp;utm_campaign=clone_repo_win" target="_blank">Atlassian SourceTree</a>
      is a free Git and Mercurial client for Windows.
    
  </p>
  <p class="mac-text">
    
      <a href="http://www.sourcetreeapp.com/?utm_source=internal&amp;utm_medium=link&amp;utm_campaign=clone_repo_mac" target="_blank">Atlassian SourceTree</a>
      is a free Git and Mercurial client for Mac.
    
  </p>
</div>
</div>
</div>
  

        
  <div class="aui-page-panel ">
    
  
  
    <div class="aui-page-panel-inner">
      <div id="repo-content" class="aui-page-panel-content"
          data-module="repo/index"
          
          >
        
          
            <ol class="aui-nav aui-nav-breadcrumbs">
              <li>
  <a href="/braza501/">Alexey</a>
</li>

<li>
  <a href="/braza501/c-course-hws">C++ Course HWs</a>
</li>
              
            </ol>
          
          <div class="aui-group repo-page-header">
            <div class="aui-item section-title">
              <h1>Source</h1>
            </div>
            <div class="aui-item page-actions">
              
            </div>
          </div>
        
        
  <div id="source-container" class="maskable" data-module="repo/source/index">
    



<header id="source-path">
  
    <div class="labels labels-csv">
      <div class="aui-buttons">
        <button data-branches-tags-url="/api/1.0/repositories/braza501/c-course-hws/branches-tags"
                data-module="components/branch-dialog"
                class="aui-button branch-dialog-trigger" title="master">
          
            
              <span class="aui-icon aui-icon-small aui-iconfont-devtools-branch">Branch</span>
            
            <span class="name">master</span>
          
          <span class="aui-icon-dropdown"></span>
        </button>
        <button class="aui-button" id="checkout-branch-button"
                title="Check out this branch">
          <span class="aui-icon aui-icon-small aui-iconfont-devtools-clone">Check out branch</span>
          <span class="aui-icon-dropdown"></span>
        </button>
      </div>
      
    
    
  
    </div>
  
  
    <div class="secondary-actions">
      <div class="aui-buttons">
        
          <a href="/braza501/c-course-hws/src/286c32a03bb5/HW7/CString.cpp?at=master"
            class="aui-button pjax-trigger" aria-pressed="true">
            Source
          </a>
          <a href="/braza501/c-course-hws/diff/HW7/CString.cpp?diff2=286c32a03bb5&at=master"
            class="aui-button pjax-trigger"
            title="Diff to previous change">
            Diff
          </a>
          <a href="/braza501/c-course-hws/history-node/286c32a03bb5/HW7/CString.cpp?at=master"
            class="aui-button pjax-trigger">
            History
          </a>
        
      </div>
    </div>
  
  <h1>
    
      
        <a href="/braza501/c-course-hws/src/286c32a03bb5?at=master"
          class="pjax-trigger root" title="braza501/c-course-hws at 286c32a03bb5">C++ Course HWs</a> /
      
      
        
          
            <a href="/braza501/c-course-hws/src/286c32a03bb5/HW7/?at=master"
              class="pjax-trigger directory-name">HW7</a> /
          
        
      
        
          
            <span class="file-name">CString.cpp</span>
          
        
      
    
  </h1>
  
    
    
  
  <div class="clearfix"></div>
</header>


  
    
  

  <div id="editor-container" class="maskable"
       data-module="repo/source/editor"
       data-owner="braza501"
       data-slug="c-course-hws"
       data-is-writer="true"
       data-has-push-access="true"
       data-hash="286c32a03bb586675f981e6fc28c3f6b037a0d61"
       data-branch="master"
       data-path="HW7/CString.cpp"
       data-source-url="/api/internal/repositories/braza501/c-course-hws/src/286c32a03bb586675f981e6fc28c3f6b037a0d61/HW7/CString.cpp">
    <div id="source-view" class="file-source-container" data-module="repo/source/view-file" data-is-lfs="false">
      <div class="toolbar">
        <div class="primary">
          <div class="aui-buttons">
            
              <button id="file-history-trigger" class="aui-button aui-button-light changeset-info"
                      data-changeset="286c32a03bb586675f981e6fc28c3f6b037a0d61"
                      data-path="HW7/CString.cpp"
                      data-current="286c32a03bb586675f981e6fc28c3f6b037a0d61">
                 

  <div class="aui-avatar aui-avatar-xsmall">
    <div class="aui-avatar-inner">
      <img src="https://bitbucket.org/account/braza501/avatar/16/?ts=1489894952">
    </div>
  </div>
  <span class="changeset-hash">286c32a</span>
  <time datetime="2016-11-25T11:00:27+00:00" class="timestamp"></time>
  <span class="aui-icon-dropdown"></span>

              </button>
            
          </div>
          
          <a href="/braza501/c-course-hws/full-commit/286c32a03bb5/HW7/CString.cpp" id="full-commit-link"
             title="View full commit 286c32a">Full commit</a>
        </div>
        <div class="secondary">
          
          <div class="aui-buttons">
            
              <a href="/braza501/c-course-hws/annotate/286c32a03bb586675f981e6fc28c3f6b037a0d61/HW7/CString.cpp?at=master"
                 class="aui-button aui-button-light pjax-trigger">Blame</a>
              
            
            <a href="/braza501/c-course-hws/raw/286c32a03bb586675f981e6fc28c3f6b037a0d61/HW7/CString.cpp" class="aui-button aui-button-light">Raw</a>
          </div>
          
            <div class="aui-buttons">
              
              <button id="file-edit-button" class="edit-button aui-button aui-button-light aui-button-split-main"
                  >
                Edit
                
              </button>
              <button id="file-more-actions-button" class="aui-button aui-button-light aui-dropdown2-trigger aui-button-split-more" aria-owns="split-container-dropdown" aria-haspopup="true"
                  >
                More file actions
              </button>
            </div>
            <div id="split-container-dropdown" class="aui-dropdown2 aui-style-default" data-container="#editor-container">
              <ul class="aui-list-truncate">
                <li><a href="#" data-module="repo/source/rename-file" class="rename-link">Rename</a></li>
                <li><a href="#" data-module="repo/source/delete-file" class="delete-link">Delete</a></li>
              </ul>
            </div>
          
        </div>

        <div id="fileview-dropdown"
            class="aui-dropdown2 aui-style-default"
            data-fileview-container="#fileview-container"
            
            
            data-fileview-button="#fileview-trigger"
            data-module="connect/fileview">
          <div class="aui-dropdown2-section">
            <ul>
              <li>
                <a class="aui-dropdown2-radio aui-dropdown2-checked"
                    data-fileview-id="-1"
                    data-fileview-loaded="true"
                    data-fileview-target="#fileview-original"
                    data-fileview-connection-key=""
                    data-fileview-module-key="file-view-default">
                  Default File Viewer
                </a>
              </li>
              
            </ul>
          </div>
        </div>

        <div class="clearfix"></div>
      </div>
      <div id="fileview-container">
        <div id="fileview-original"
            class="fileview"
            data-module="repo/source/highlight-lines"
            data-fileview-loaded="true">
          


  
    <div class="file-source">
      <table class="codehilite highlighttable"><tr><td class="linenos"><div class="linenodiv"><pre><a href="#CString.cpp-1">  1</a>
<a href="#CString.cpp-2">  2</a>
<a href="#CString.cpp-3">  3</a>
<a href="#CString.cpp-4">  4</a>
<a href="#CString.cpp-5">  5</a>
<a href="#CString.cpp-6">  6</a>
<a href="#CString.cpp-7">  7</a>
<a href="#CString.cpp-8">  8</a>
<a href="#CString.cpp-9">  9</a>
<a href="#CString.cpp-10"> 10</a>
<a href="#CString.cpp-11"> 11</a>
<a href="#CString.cpp-12"> 12</a>
<a href="#CString.cpp-13"> 13</a>
<a href="#CString.cpp-14"> 14</a>
<a href="#CString.cpp-15"> 15</a>
<a href="#CString.cpp-16"> 16</a>
<a href="#CString.cpp-17"> 17</a>
<a href="#CString.cpp-18"> 18</a>
<a href="#CString.cpp-19"> 19</a>
<a href="#CString.cpp-20"> 20</a>
<a href="#CString.cpp-21"> 21</a>
<a href="#CString.cpp-22"> 22</a>
<a href="#CString.cpp-23"> 23</a>
<a href="#CString.cpp-24"> 24</a>
<a href="#CString.cpp-25"> 25</a>
<a href="#CString.cpp-26"> 26</a>
<a href="#CString.cpp-27"> 27</a>
<a href="#CString.cpp-28"> 28</a>
<a href="#CString.cpp-29"> 29</a>
<a href="#CString.cpp-30"> 30</a>
<a href="#CString.cpp-31"> 31</a>
<a href="#CString.cpp-32"> 32</a>
<a href="#CString.cpp-33"> 33</a>
<a href="#CString.cpp-34"> 34</a>
<a href="#CString.cpp-35"> 35</a>
<a href="#CString.cpp-36"> 36</a>
<a href="#CString.cpp-37"> 37</a>
<a href="#CString.cpp-38"> 38</a>
<a href="#CString.cpp-39"> 39</a>
<a href="#CString.cpp-40"> 40</a>
<a href="#CString.cpp-41"> 41</a>
<a href="#CString.cpp-42"> 42</a>
<a href="#CString.cpp-43"> 43</a>
<a href="#CString.cpp-44"> 44</a>
<a href="#CString.cpp-45"> 45</a>
<a href="#CString.cpp-46"> 46</a>
<a href="#CString.cpp-47"> 47</a>
<a href="#CString.cpp-48"> 48</a>
<a href="#CString.cpp-49"> 49</a>
<a href="#CString.cpp-50"> 50</a>
<a href="#CString.cpp-51"> 51</a>
<a href="#CString.cpp-52"> 52</a>
<a href="#CString.cpp-53"> 53</a>
<a href="#CString.cpp-54"> 54</a>
<a href="#CString.cpp-55"> 55</a>
<a href="#CString.cpp-56"> 56</a>
<a href="#CString.cpp-57"> 57</a>
<a href="#CString.cpp-58"> 58</a>
<a href="#CString.cpp-59"> 59</a>
<a href="#CString.cpp-60"> 60</a>
<a href="#CString.cpp-61"> 61</a>
<a href="#CString.cpp-62"> 62</a>
<a href="#CString.cpp-63"> 63</a>
<a href="#CString.cpp-64"> 64</a>
<a href="#CString.cpp-65"> 65</a>
<a href="#CString.cpp-66"> 66</a>
<a href="#CString.cpp-67"> 67</a>
<a href="#CString.cpp-68"> 68</a>
<a href="#CString.cpp-69"> 69</a>
<a href="#CString.cpp-70"> 70</a>
<a href="#CString.cpp-71"> 71</a>
<a href="#CString.cpp-72"> 72</a>
<a href="#CString.cpp-73"> 73</a>
<a href="#CString.cpp-74"> 74</a>
<a href="#CString.cpp-75"> 75</a>
<a href="#CString.cpp-76"> 76</a>
<a href="#CString.cpp-77"> 77</a>
<a href="#CString.cpp-78"> 78</a>
<a href="#CString.cpp-79"> 79</a>
<a href="#CString.cpp-80"> 80</a>
<a href="#CString.cpp-81"> 81</a>
<a href="#CString.cpp-82"> 82</a>
<a href="#CString.cpp-83"> 83</a>
<a href="#CString.cpp-84"> 84</a>
<a href="#CString.cpp-85"> 85</a>
<a href="#CString.cpp-86"> 86</a>
<a href="#CString.cpp-87"> 87</a>
<a href="#CString.cpp-88"> 88</a>
<a href="#CString.cpp-89"> 89</a>
<a href="#CString.cpp-90"> 90</a>
<a href="#CString.cpp-91"> 91</a>
<a href="#CString.cpp-92"> 92</a>
<a href="#CString.cpp-93"> 93</a>
<a href="#CString.cpp-94"> 94</a>
<a href="#CString.cpp-95"> 95</a>
<a href="#CString.cpp-96"> 96</a>
<a href="#CString.cpp-97"> 97</a>
<a href="#CString.cpp-98"> 98</a>
<a href="#CString.cpp-99"> 99</a>
<a href="#CString.cpp-100">100</a>
<a href="#CString.cpp-101">101</a>
<a href="#CString.cpp-102">102</a>
<a href="#CString.cpp-103">103</a>
<a href="#CString.cpp-104">104</a>
<a href="#CString.cpp-105">105</a>
<a href="#CString.cpp-106">106</a>
<a href="#CString.cpp-107">107</a>
<a href="#CString.cpp-108">108</a>
<a href="#CString.cpp-109">109</a>
<a href="#CString.cpp-110">110</a>
<a href="#CString.cpp-111">111</a>
<a href="#CString.cpp-112">112</a>
<a href="#CString.cpp-113">113</a>
<a href="#CString.cpp-114">114</a>
<a href="#CString.cpp-115">115</a>
<a href="#CString.cpp-116">116</a>
<a href="#CString.cpp-117">117</a>
<a href="#CString.cpp-118">118</a>
<a href="#CString.cpp-119">119</a>
<a href="#CString.cpp-120">120</a>
<a href="#CString.cpp-121">121</a>
<a href="#CString.cpp-122">122</a>
<a href="#CString.cpp-123">123</a>
<a href="#CString.cpp-124">124</a>
<a href="#CString.cpp-125">125</a>
<a href="#CString.cpp-126">126</a>
<a href="#CString.cpp-127">127</a>
<a href="#CString.cpp-128">128</a>
<a href="#CString.cpp-129">129</a>
<a href="#CString.cpp-130">130</a>
<a href="#CString.cpp-131">131</a>
<a href="#CString.cpp-132">132</a>
<a href="#CString.cpp-133">133</a>
<a href="#CString.cpp-134">134</a>
<a href="#CString.cpp-135">135</a>
<a href="#CString.cpp-136">136</a>
<a href="#CString.cpp-137">137</a>
<a href="#CString.cpp-138">138</a>
<a href="#CString.cpp-139">139</a>
<a href="#CString.cpp-140">140</a>
<a href="#CString.cpp-141">141</a>
<a href="#CString.cpp-142">142</a>
<a href="#CString.cpp-143">143</a>
<a href="#CString.cpp-144">144</a>
<a href="#CString.cpp-145">145</a>
<a href="#CString.cpp-146">146</a>
<a href="#CString.cpp-147">147</a>
<a href="#CString.cpp-148">148</a>
<a href="#CString.cpp-149">149</a>
<a href="#CString.cpp-150">150</a>
<a href="#CString.cpp-151">151</a>
<a href="#CString.cpp-152">152</a>
<a href="#CString.cpp-153">153</a>
<a href="#CString.cpp-154">154</a>
<a href="#CString.cpp-155">155</a>
<a href="#CString.cpp-156">156</a>
<a href="#CString.cpp-157">157</a>
<a href="#CString.cpp-158">158</a>
<a href="#CString.cpp-159">159</a>
<a href="#CString.cpp-160">160</a>
<a href="#CString.cpp-161">161</a>
<a href="#CString.cpp-162">162</a>
<a href="#CString.cpp-163">163</a>
<a href="#CString.cpp-164">164</a>
<a href="#CString.cpp-165">165</a>
<a href="#CString.cpp-166">166</a>
<a href="#CString.cpp-167">167</a>
<a href="#CString.cpp-168">168</a>
<a href="#CString.cpp-169">169</a>
<a href="#CString.cpp-170">170</a>
<a href="#CString.cpp-171">171</a>
<a href="#CString.cpp-172">172</a>
<a href="#CString.cpp-173">173</a>
<a href="#CString.cpp-174">174</a>
<a href="#CString.cpp-175">175</a>
<a href="#CString.cpp-176">176</a>
<a href="#CString.cpp-177">177</a>
<a href="#CString.cpp-178">178</a>
<a href="#CString.cpp-179">179</a>
<a href="#CString.cpp-180">180</a>
<a href="#CString.cpp-181">181</a>
<a href="#CString.cpp-182">182</a>
<a href="#CString.cpp-183">183</a>
<a href="#CString.cpp-184">184</a>
<a href="#CString.cpp-185">185</a>
<a href="#CString.cpp-186">186</a>
<a href="#CString.cpp-187">187</a>
<a href="#CString.cpp-188">188</a>
<a href="#CString.cpp-189">189</a>
<a href="#CString.cpp-190">190</a>
<a href="#CString.cpp-191">191</a>
<a href="#CString.cpp-192">192</a>
<a href="#CString.cpp-193">193</a>
<a href="#CString.cpp-194">194</a>
<a href="#CString.cpp-195">195</a>
<a href="#CString.cpp-196">196</a>
<a href="#CString.cpp-197">197</a>
<a href="#CString.cpp-198">198</a>
<a href="#CString.cpp-199">199</a>
<a href="#CString.cpp-200">200</a>
<a href="#CString.cpp-201">201</a>
<a href="#CString.cpp-202">202</a>
<a href="#CString.cpp-203">203</a>
<a href="#CString.cpp-204">204</a>
<a href="#CString.cpp-205">205</a>
<a href="#CString.cpp-206">206</a>
<a href="#CString.cpp-207">207</a>
<a href="#CString.cpp-208">208</a>
<a href="#CString.cpp-209">209</a>
<a href="#CString.cpp-210">210</a>
<a href="#CString.cpp-211">211</a>
<a href="#CString.cpp-212">212</a>
<a href="#CString.cpp-213">213</a>
<a href="#CString.cpp-214">214</a>
<a href="#CString.cpp-215">215</a>
<a href="#CString.cpp-216">216</a>
<a href="#CString.cpp-217">217</a>
<a href="#CString.cpp-218">218</a>
<a href="#CString.cpp-219">219</a>
<a href="#CString.cpp-220">220</a>
<a href="#CString.cpp-221">221</a>
<a href="#CString.cpp-222">222</a>
<a href="#CString.cpp-223">223</a>
<a href="#CString.cpp-224">224</a>
<a href="#CString.cpp-225">225</a>
<a href="#CString.cpp-226">226</a>
<a href="#CString.cpp-227">227</a>
<a href="#CString.cpp-228">228</a>
<a href="#CString.cpp-229">229</a>
<a href="#CString.cpp-230">230</a>
<a href="#CString.cpp-231">231</a>
<a href="#CString.cpp-232">232</a>
<a href="#CString.cpp-233">233</a>
<a href="#CString.cpp-234">234</a>
<a href="#CString.cpp-235">235</a>
<a href="#CString.cpp-236">236</a>
<a href="#CString.cpp-237">237</a>
<a href="#CString.cpp-238">238</a>
<a href="#CString.cpp-239">239</a>
<a href="#CString.cpp-240">240</a>
<a href="#CString.cpp-241">241</a>
<a href="#CString.cpp-242">242</a>
<a href="#CString.cpp-243">243</a>
<a href="#CString.cpp-244">244</a>
<a href="#CString.cpp-245">245</a>
<a href="#CString.cpp-246">246</a>
<a href="#CString.cpp-247">247</a>
<a href="#CString.cpp-248">248</a>
<a href="#CString.cpp-249">249</a>
<a href="#CString.cpp-250">250</a>
<a href="#CString.cpp-251">251</a>
<a href="#CString.cpp-252">252</a>
<a href="#CString.cpp-253">253</a>
<a href="#CString.cpp-254">254</a>
<a href="#CString.cpp-255">255</a>
<a href="#CString.cpp-256">256</a>
<a href="#CString.cpp-257">257</a>
<a href="#CString.cpp-258">258</a>
<a href="#CString.cpp-259">259</a>
<a href="#CString.cpp-260">260</a>
<a href="#CString.cpp-261">261</a>
<a href="#CString.cpp-262">262</a>
<a href="#CString.cpp-263">263</a>
<a href="#CString.cpp-264">264</a>
<a href="#CString.cpp-265">265</a>
<a href="#CString.cpp-266">266</a>
<a href="#CString.cpp-267">267</a>
<a href="#CString.cpp-268">268</a>
<a href="#CString.cpp-269">269</a>
<a href="#CString.cpp-270">270</a>
<a href="#CString.cpp-271">271</a>
<a href="#CString.cpp-272">272</a>
<a href="#CString.cpp-273">273</a>
<a href="#CString.cpp-274">274</a>
<a href="#CString.cpp-275">275</a>
<a href="#CString.cpp-276">276</a>
<a href="#CString.cpp-277">277</a>
<a href="#CString.cpp-278">278</a>
<a href="#CString.cpp-279">279</a>
<a href="#CString.cpp-280">280</a>
<a href="#CString.cpp-281">281</a>
<a href="#CString.cpp-282">282</a>
<a href="#CString.cpp-283">283</a>
<a href="#CString.cpp-284">284</a>
<a href="#CString.cpp-285">285</a>
<a href="#CString.cpp-286">286</a>
<a href="#CString.cpp-287">287</a>
<a href="#CString.cpp-288">288</a>
<a href="#CString.cpp-289">289</a>
<a href="#CString.cpp-290">290</a>
<a href="#CString.cpp-291">291</a>
<a href="#CString.cpp-292">292</a>
<a href="#CString.cpp-293">293</a>
<a href="#CString.cpp-294">294</a>
<a href="#CString.cpp-295">295</a>
<a href="#CString.cpp-296">296</a>
<a href="#CString.cpp-297">297</a>
<a href="#CString.cpp-298">298</a>
<a href="#CString.cpp-299">299</a>
<a href="#CString.cpp-300">300</a>
<a href="#CString.cpp-301">301</a>
<a href="#CString.cpp-302">302</a>
<a href="#CString.cpp-303">303</a>
<a href="#CString.cpp-304">304</a>
<a href="#CString.cpp-305">305</a>
<a href="#CString.cpp-306">306</a>
<a href="#CString.cpp-307">307</a>
<a href="#CString.cpp-308">308</a>
<a href="#CString.cpp-309">309</a>
<a href="#CString.cpp-310">310</a>
<a href="#CString.cpp-311">311</a>
<a href="#CString.cpp-312">312</a>
<a href="#CString.cpp-313">313</a>
<a href="#CString.cpp-314">314</a>
<a href="#CString.cpp-315">315</a>
<a href="#CString.cpp-316">316</a>
<a href="#CString.cpp-317">317</a>
<a href="#CString.cpp-318">318</a>
<a href="#CString.cpp-319">319</a>
<a href="#CString.cpp-320">320</a>
<a href="#CString.cpp-321">321</a>
<a href="#CString.cpp-322">322</a>
<a href="#CString.cpp-323">323</a>
<a href="#CString.cpp-324">324</a>
<a href="#CString.cpp-325">325</a>
<a href="#CString.cpp-326">326</a>
<a href="#CString.cpp-327">327</a>
<a href="#CString.cpp-328">328</a>
<a href="#CString.cpp-329">329</a>
<a href="#CString.cpp-330">330</a>
<a href="#CString.cpp-331">331</a>
<a href="#CString.cpp-332">332</a>
<a href="#CString.cpp-333">333</a>
<a href="#CString.cpp-334">334</a>
<a href="#CString.cpp-335">335</a>
<a href="#CString.cpp-336">336</a>
<a href="#CString.cpp-337">337</a>
<a href="#CString.cpp-338">338</a>
<a href="#CString.cpp-339">339</a>
<a href="#CString.cpp-340">340</a>
<a href="#CString.cpp-341">341</a>
<a href="#CString.cpp-342">342</a>
<a href="#CString.cpp-343">343</a>
<a href="#CString.cpp-344">344</a>
<a href="#CString.cpp-345">345</a>
<a href="#CString.cpp-346">346</a>
<a href="#CString.cpp-347">347</a>
<a href="#CString.cpp-348">348</a>
<a href="#CString.cpp-349">349</a>
<a href="#CString.cpp-350">350</a>
<a href="#CString.cpp-351">351</a>
<a href="#CString.cpp-352">352</a>
<a href="#CString.cpp-353">353</a>
<a href="#CString.cpp-354">354</a>
<a href="#CString.cpp-355">355</a>
<a href="#CString.cpp-356">356</a>
<a href="#CString.cpp-357">357</a>
<a href="#CString.cpp-358">358</a>
<a href="#CString.cpp-359">359</a>
<a href="#CString.cpp-360">360</a>
<a href="#CString.cpp-361">361</a>
<a href="#CString.cpp-362">362</a>
<a href="#CString.cpp-363">363</a>
<a href="#CString.cpp-364">364</a>
<a href="#CString.cpp-365">365</a>
<a href="#CString.cpp-366">366</a>
<a href="#CString.cpp-367">367</a>
<a href="#CString.cpp-368">368</a>
<a href="#CString.cpp-369">369</a>
<a href="#CString.cpp-370">370</a>
<a href="#CString.cpp-371">371</a>
<a href="#CString.cpp-372">372</a>
<a href="#CString.cpp-373">373</a>
<a href="#CString.cpp-374">374</a>
<a href="#CString.cpp-375">375</a>
<a href="#CString.cpp-376">376</a>
<a href="#CString.cpp-377">377</a>
<a href="#CString.cpp-378">378</a>
<a href="#CString.cpp-379">379</a>
<a href="#CString.cpp-380">380</a>
<a href="#CString.cpp-381">381</a>
<a href="#CString.cpp-382">382</a>
<a href="#CString.cpp-383">383</a>
<a href="#CString.cpp-384">384</a>
<a href="#CString.cpp-385">385</a>
<a href="#CString.cpp-386">386</a>
<a href="#CString.cpp-387">387</a>
<a href="#CString.cpp-388">388</a>
<a href="#CString.cpp-389">389</a>
<a href="#CString.cpp-390">390</a>
<a href="#CString.cpp-391">391</a>
<a href="#CString.cpp-392">392</a>
<a href="#CString.cpp-393">393</a>
<a href="#CString.cpp-394">394</a>
<a href="#CString.cpp-395">395</a>
<a href="#CString.cpp-396">396</a>
<a href="#CString.cpp-397">397</a>
<a href="#CString.cpp-398">398</a>
<a href="#CString.cpp-399">399</a>
<a href="#CString.cpp-400">400</a>
<a href="#CString.cpp-401">401</a>
<a href="#CString.cpp-402">402</a>
<a href="#CString.cpp-403">403</a>
<a href="#CString.cpp-404">404</a>
<a href="#CString.cpp-405">405</a>
<a href="#CString.cpp-406">406</a>
<a href="#CString.cpp-407">407</a>
<a href="#CString.cpp-408">408</a>
<a href="#CString.cpp-409">409</a>
<a href="#CString.cpp-410">410</a>
<a href="#CString.cpp-411">411</a>
<a href="#CString.cpp-412">412</a>
<a href="#CString.cpp-413">413</a>
<a href="#CString.cpp-414">414</a>
<a href="#CString.cpp-415">415</a>
<a href="#CString.cpp-416">416</a>
<a href="#CString.cpp-417">417</a>
<a href="#CString.cpp-418">418</a>
<a href="#CString.cpp-419">419</a>
<a href="#CString.cpp-420">420</a>
<a href="#CString.cpp-421">421</a>
<a href="#CString.cpp-422">422</a>
<a href="#CString.cpp-423">423</a>
<a href="#CString.cpp-424">424</a>
<a href="#CString.cpp-425">425</a>
<a href="#CString.cpp-426">426</a>
<a href="#CString.cpp-427">427</a>
<a href="#CString.cpp-428">428</a>
<a href="#CString.cpp-429">429</a>
<a href="#CString.cpp-430">430</a>
<a href="#CString.cpp-431">431</a>
<a href="#CString.cpp-432">432</a>
<a href="#CString.cpp-433">433</a>
<a href="#CString.cpp-434">434</a>
<a href="#CString.cpp-435">435</a>
<a href="#CString.cpp-436">436</a>
<a href="#CString.cpp-437">437</a>
<a href="#CString.cpp-438">438</a>
<a href="#CString.cpp-439">439</a>
<a href="#CString.cpp-440">440</a>
<a href="#CString.cpp-441">441</a>
<a href="#CString.cpp-442">442</a>
<a href="#CString.cpp-443">443</a>
<a href="#CString.cpp-444">444</a>
<a href="#CString.cpp-445">445</a>
<a href="#CString.cpp-446">446</a>
<a href="#CString.cpp-447">447</a>
<a href="#CString.cpp-448">448</a>
<a href="#CString.cpp-449">449</a>
<a href="#CString.cpp-450">450</a>
<a href="#CString.cpp-451">451</a>
<a href="#CString.cpp-452">452</a>
<a href="#CString.cpp-453">453</a>
<a href="#CString.cpp-454">454</a>
<a href="#CString.cpp-455">455</a>
<a href="#CString.cpp-456">456</a>
<a href="#CString.cpp-457">457</a>
<a href="#CString.cpp-458">458</a>
<a href="#CString.cpp-459">459</a>
<a href="#CString.cpp-460">460</a>
<a href="#CString.cpp-461">461</a>
<a href="#CString.cpp-462">462</a>
<a href="#CString.cpp-463">463</a>
<a href="#CString.cpp-464">464</a>
<a href="#CString.cpp-465">465</a>
<a href="#CString.cpp-466">466</a>
<a href="#CString.cpp-467">467</a>
<a href="#CString.cpp-468">468</a>
<a href="#CString.cpp-469">469</a>
<a href="#CString.cpp-470">470</a>
<a href="#CString.cpp-471">471</a>
<a href="#CString.cpp-472">472</a>
<a href="#CString.cpp-473">473</a>
<a href="#CString.cpp-474">474</a>
<a href="#CString.cpp-475">475</a>
<a href="#CString.cpp-476">476</a>
<a href="#CString.cpp-477">477</a>
<a href="#CString.cpp-478">478</a>
<a href="#CString.cpp-479">479</a>
<a href="#CString.cpp-480">480</a>
<a href="#CString.cpp-481">481</a>
<a href="#CString.cpp-482">482</a>
<a href="#CString.cpp-483">483</a></pre></div></td><td class="code"><div class="codehilite highlight"><pre><span></span><a name="CString.cpp-1"></a><span class="c1">//Author: Alexey Bandura</span>
<a name="CString.cpp-2"></a>
<a name="CString.cpp-3"></a><span class="cp">#include</span> <span class="cpf">&lt;cstring&gt;</span><span class="cp"></span>
<a name="CString.cpp-4"></a><span class="cp">#include</span> <span class="cpf">&lt;cassert&gt;</span><span class="cp"></span>
<a name="CString.cpp-5"></a><span class="cp">#include</span> <span class="cpf">&lt;cmath&gt;</span><span class="cp"></span>
<a name="CString.cpp-6"></a><span class="cp">#include</span> <span class="cpf">&lt;algorithm&gt;</span><span class="cp"></span>
<a name="CString.cpp-7"></a><span class="cp">#include</span> <span class="cpf">&lt;cctype&gt;</span><span class="cp"></span>
<a name="CString.cpp-8"></a><span class="cp">#include</span> <span class="cpf">&lt;iostream&gt;</span><span class="cp"></span>
<a name="CString.cpp-9"></a>
<a name="CString.cpp-10"></a><span class="cp">#include</span> <span class="cpf">&quot;CString.h&quot;</span><span class="cp"></span>
<a name="CString.cpp-11"></a>
<a name="CString.cpp-12"></a><span class="k">using</span> <span class="k">namespace</span> <span class="n">std</span><span class="p">;</span>
<a name="CString.cpp-13"></a>
<a name="CString.cpp-14"></a>
<a name="CString.cpp-15"></a><span class="kt">void</span> <span class="nf">TestCString</span><span class="p">()</span> <span class="p">{</span>
<a name="CString.cpp-16"></a>    <span class="n">CString</span> <span class="n">str1</span> <span class="o">=</span> <span class="s">&quot;Harbour Space&quot;</span><span class="p">;</span>
<a name="CString.cpp-17"></a>    <span class="n">CString</span> <span class="n">str4</span><span class="p">(</span><span class="s">&quot;Dollar&quot;</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span>
<a name="CString.cpp-18"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="s">&quot; is str4 empty? &quot;</span> <span class="o">&lt;&lt;</span> <span class="n">std</span><span class="o">::</span><span class="n">boolalpha</span> <span class="o">&lt;&lt;</span> <span class="n">str4</span><span class="p">.</span><span class="n">IsEmpty</span><span class="p">()</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-19"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-20"></a>    <span class="n">str1</span><span class="p">.</span><span class="n">MakeUpper</span><span class="p">();</span>
<a name="CString.cpp-21"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-22"></a>    <span class="n">str1</span><span class="p">.</span><span class="n">MakeLower</span><span class="p">();</span>
<a name="CString.cpp-23"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-24"></a>    <span class="n">str1</span><span class="p">.</span><span class="n">MakeReverse</span><span class="p">();</span>
<a name="CString.cpp-25"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-26"></a>    <span class="n">str1</span><span class="p">.</span><span class="n">MakeReverse</span><span class="p">();</span>
<a name="CString.cpp-27"></a>    <span class="n">str1</span><span class="p">.</span><span class="n">Append</span><span class="p">(</span><span class="sc">&#39;!&#39;</span><span class="p">);</span>
<a name="CString.cpp-28"></a>    <span class="n">str1</span><span class="p">.</span><span class="n">Append</span><span class="p">(</span><span class="s">&quot;=)&quot;</span><span class="p">);</span>
<a name="CString.cpp-29"></a>    <span class="n">str1</span><span class="p">.</span><span class="n">Append</span><span class="p">(</span><span class="n">str4</span><span class="p">);</span>
<a name="CString.cpp-30"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-31"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span><span class="p">.</span><span class="n">Length</span><span class="p">()</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-32"></a>    <span class="n">str1</span> <span class="o">=</span> <span class="s">&quot;Hello world&quot;</span><span class="p">;</span>
<a name="CString.cpp-33"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span> <span class="o">+</span> <span class="s">&quot; from Barcelona! &quot;</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-34"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="s">&quot;Hello, &quot;</span> <span class="o">+</span> <span class="n">str1</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-35"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="sc">&#39;#&#39;</span> <span class="o">+</span> <span class="n">str1</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-36"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span> <span class="o">+</span> <span class="sc">&#39;*&#39;</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-37"></a>    <span class="n">str4</span> <span class="o">=</span> <span class="s">&quot; from Space&quot;</span><span class="p">;</span>
<a name="CString.cpp-38"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span> <span class="o">+</span> <span class="n">str4</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-39"></a>    <span class="kt">char</span> <span class="n">ch</span> <span class="o">=</span> <span class="sc">&#39;2&#39;</span><span class="p">;</span>
<a name="CString.cpp-40"></a>    <span class="n">str1</span> <span class="o">=</span> <span class="n">ch</span><span class="p">;</span>
<a name="CString.cpp-41"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-42"></a>    <span class="n">CString</span> <span class="n">str2</span> <span class="o">=</span> <span class="s">&quot;Euro/Dollar&quot;</span><span class="p">;</span>
<a name="CString.cpp-43"></a>    <span class="n">str1</span> <span class="o">=</span> <span class="n">str2</span><span class="p">;</span>
<a name="CString.cpp-44"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-45"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span><span class="p">.</span><span class="n">SubString</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="n">str1</span><span class="p">.</span><span class="n">Find</span><span class="p">(</span><span class="sc">&#39;/&#39;</span><span class="p">))</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-46"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span><span class="p">.</span><span class="n">SubString</span><span class="p">(</span><span class="n">str1</span><span class="p">.</span><span class="n">Find</span><span class="p">(</span><span class="sc">&#39;/&#39;</span><span class="p">)</span> <span class="o">+</span> <span class="mi">1</span><span class="p">)</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-47"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span><span class="p">[</span><span class="mi">4</span><span class="p">]</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-48"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">std</span><span class="o">::</span><span class="n">boolalpha</span> <span class="o">&lt;&lt;</span> <span class="p">(</span><span class="n">str1</span><span class="p">[</span><span class="n">str1</span><span class="p">.</span><span class="n">Length</span><span class="p">()]</span> <span class="o">==</span> <span class="sc">&#39;\0&#39;</span><span class="p">)</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-49"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span><span class="p">.</span><span class="n">GetAt</span><span class="p">(</span><span class="mi">2</span><span class="p">)</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-50"></a>
<a name="CString.cpp-51"></a>    <span class="n">str1</span> <span class="o">=</span> <span class="s">&quot;reality&quot;</span><span class="p">;</span>
<a name="CString.cpp-52"></a>    <span class="n">str2</span> <span class="o">=</span> <span class="s">&quot;ReaLitY&quot;</span><span class="p">;</span>
<a name="CString.cpp-53"></a>
<a name="CString.cpp-54"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">std</span><span class="o">::</span><span class="n">boolalpha</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span><span class="p">.</span><span class="n">EqualsNoCase</span><span class="p">(</span><span class="s">&quot;ReaLitY&quot;</span><span class="p">)</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-55"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">std</span><span class="o">::</span><span class="n">boolalpha</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span><span class="p">.</span><span class="n">CompareNoCase</span><span class="p">(</span><span class="s">&quot;ReaLitY&quot;</span><span class="p">)</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-56"></a>    <span class="n">str1</span> <span class="o">=</span> <span class="s">&quot;reality&quot;</span><span class="p">;</span>
<a name="CString.cpp-57"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span><span class="p">.</span><span class="n">Compare</span><span class="p">(</span><span class="s">&quot;reality&quot;</span><span class="p">)</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-58"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span><span class="p">.</span><span class="n">Compare</span><span class="p">(</span><span class="s">&quot;qeality&quot;</span><span class="p">)</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-59"></a>
<a name="CString.cpp-60"></a>    <span class="n">str1</span> <span class="o">=</span> <span class="s">&quot;DogCatDogCat&quot;</span><span class="p">;</span>
<a name="CString.cpp-61"></a>    <span class="n">str1</span><span class="p">.</span><span class="n">StrDel</span><span class="p">(</span><span class="mi">9</span><span class="p">,</span> <span class="mi">3</span><span class="p">);</span> <span class="c1">// 9 points to C letter - the last word Cat</span>
<a name="CString.cpp-62"></a>    <span class="n">str1</span><span class="p">.</span><span class="n">StrDel</span><span class="p">(</span><span class="mi">5</span><span class="p">);</span> <span class="c1">// must delete &#39;t&#39;</span>
<a name="CString.cpp-63"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-64"></a>    <span class="n">str2</span> <span class="o">=</span> <span class="s">&quot;Elite String Company&quot;</span><span class="p">;</span>
<a name="CString.cpp-65"></a>    <span class="n">str2</span><span class="p">.</span><span class="n">StrReplace</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="s">&quot;-----------------------&quot;</span><span class="p">);</span>
<a name="CString.cpp-66"></a>    <span class="n">str2</span><span class="p">.</span><span class="n">StrReplace</span><span class="p">(</span><span class="mi">2</span><span class="p">,</span> <span class="n">str1</span><span class="p">);</span>
<a name="CString.cpp-67"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str2</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-68"></a>    <span class="n">str1</span> <span class="o">=</span> <span class="s">&quot;DogCaT&quot;</span><span class="p">;</span>
<a name="CString.cpp-69"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span><span class="p">.</span><span class="n">GetBuffer</span><span class="p">()</span> <span class="o">+</span> <span class="n">str1</span><span class="p">.</span><span class="n">FindNoCase</span><span class="p">(</span><span class="s">&quot;cat&quot;</span><span class="p">)</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-70"></a>    <span class="n">str1</span><span class="p">.</span><span class="n">StrIns</span><span class="p">(</span><span class="s">&quot;World&quot;</span><span class="p">,</span> <span class="mi">3</span><span class="p">);</span>
<a name="CString.cpp-71"></a>    <span class="n">CString</span> <span class="n">str3</span><span class="p">(</span><span class="sc">&#39;#&#39;</span><span class="p">,</span> <span class="mi">6</span><span class="p">);</span>
<a name="CString.cpp-72"></a>    <span class="n">str1</span><span class="p">.</span><span class="n">StrIns</span><span class="p">(</span><span class="n">str3</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span>
<a name="CString.cpp-73"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-74"></a>    <span class="n">str1</span> <span class="o">=</span> <span class="s">&quot;dogcatdogcat&quot;</span><span class="p">;</span>
<a name="CString.cpp-75"></a>    <span class="n">str1</span><span class="p">.</span><span class="n">ReplaceAll</span><span class="p">(</span><span class="sc">&#39;o&#39;</span><span class="p">,</span> <span class="sc">&#39;#&#39;</span><span class="p">);</span>
<a name="CString.cpp-76"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-77"></a>    <span class="n">str1</span><span class="p">.</span><span class="n">ReplaceAll</span><span class="p">(</span><span class="s">&quot;cat&quot;</span><span class="p">,</span> <span class="s">&quot;WORLD&quot;</span><span class="p">);</span>
<a name="CString.cpp-78"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-79"></a>    <span class="n">str1</span><span class="p">.</span><span class="n">ReplaceAll</span><span class="p">(</span><span class="sc">&#39;#&#39;</span><span class="p">,</span> <span class="s">&quot;||&quot;</span><span class="p">);</span>
<a name="CString.cpp-80"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-81"></a>    <span class="n">str1</span><span class="p">.</span><span class="n">ReplaceAll</span><span class="p">(</span><span class="s">&quot;WORLD&quot;</span><span class="p">,</span> <span class="sc">&#39;^&#39;</span><span class="p">);</span>
<a name="CString.cpp-82"></a>    <span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">str1</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
<a name="CString.cpp-83"></a><span class="p">}</span>
<a name="CString.cpp-84"></a>
<a name="CString.cpp-85"></a><span class="n">CString</span><span class="o">::</span><span class="n">CString</span><span class="p">()</span> <span class="p">{</span>
<a name="CString.cpp-86"></a>    <span class="n">buffer</span> <span class="o">=</span> <span class="k">new</span> <span class="kt">char</span><span class="p">[</span><span class="n">maxCapacity</span><span class="p">];</span>
<a name="CString.cpp-87"></a>    <span class="n">buffer</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
<a name="CString.cpp-88"></a><span class="p">}</span>
<a name="CString.cpp-89"></a>
<a name="CString.cpp-90"></a><span class="n">CString</span><span class="o">::</span><span class="n">CString</span><span class="p">(</span><span class="kt">char</span> <span class="n">c</span><span class="p">,</span> <span class="kt">int</span> <span class="n">repeatCount</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-91"></a>    <span class="n">length</span> <span class="o">=</span> <span class="n">repeatCount</span><span class="p">;</span>
<a name="CString.cpp-92"></a>    <span class="n">maxCapacity</span> <span class="o">=</span> <span class="n">getCapacityForGrowByFactor</span><span class="p">(</span><span class="n">length</span><span class="p">)</span> <span class="o">+</span> <span class="mi">1</span><span class="p">;</span>
<a name="CString.cpp-93"></a>    <span class="n">buffer</span> <span class="o">=</span> <span class="k">new</span> <span class="kt">char</span><span class="p">[</span><span class="n">maxCapacity</span><span class="p">];</span>
<a name="CString.cpp-94"></a>    <span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">length</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-95"></a>        <span class="n">buffer</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">=</span> <span class="n">c</span><span class="p">;</span>
<a name="CString.cpp-96"></a>    <span class="p">}</span>
<a name="CString.cpp-97"></a>    <span class="n">buffer</span><span class="p">[</span><span class="n">length</span><span class="p">]</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
<a name="CString.cpp-98"></a><span class="p">}</span>
<a name="CString.cpp-99"></a>
<a name="CString.cpp-100"></a><span class="n">CString</span><span class="o">::</span><span class="n">CString</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">str</span><span class="p">,</span> <span class="kt">int</span> <span class="n">length</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-101"></a>    <span class="n">assert</span><span class="p">(</span><span class="n">length</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">length</span> <span class="o">&lt;=</span> <span class="n">strlen</span><span class="p">(</span><span class="n">str</span><span class="p">));</span>
<a name="CString.cpp-102"></a>
<a name="CString.cpp-103"></a>    <span class="k">this</span><span class="o">-&gt;</span><span class="n">length</span> <span class="o">=</span> <span class="n">length</span><span class="p">;</span>
<a name="CString.cpp-104"></a>    <span class="n">maxCapacity</span> <span class="o">=</span> <span class="n">getCapacityForGrowByFactor</span><span class="p">(</span><span class="n">length</span><span class="p">)</span> <span class="o">+</span> <span class="mi">1</span><span class="p">;</span>
<a name="CString.cpp-105"></a>    <span class="n">buffer</span> <span class="o">=</span> <span class="k">new</span> <span class="kt">char</span><span class="p">[</span><span class="n">maxCapacity</span><span class="p">];</span>
<a name="CString.cpp-106"></a>    <span class="n">strncpy</span><span class="p">(</span><span class="n">buffer</span><span class="p">,</span> <span class="n">str</span><span class="p">,</span> <span class="n">length</span><span class="p">);</span>
<a name="CString.cpp-107"></a>    <span class="n">buffer</span><span class="p">[</span><span class="n">length</span><span class="p">]</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
<a name="CString.cpp-108"></a><span class="p">}</span>
<a name="CString.cpp-109"></a>
<a name="CString.cpp-110"></a><span class="n">CString</span> <span class="o">&amp;</span><span class="n">CString</span><span class="o">::</span><span class="k">operator</span><span class="o">=</span><span class="p">(</span><span class="kt">char</span> <span class="n">ch</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-111"></a>    <span class="k">delete</span><span class="p">[]</span> <span class="n">buffer</span><span class="p">;</span>
<a name="CString.cpp-112"></a>    <span class="n">maxCapacity</span> <span class="o">=</span> <span class="n">getCapacityForGrowByFactor</span><span class="p">(</span><span class="mi">80</span><span class="p">);</span>
<a name="CString.cpp-113"></a>    <span class="n">buffer</span> <span class="o">=</span> <span class="k">new</span> <span class="kt">char</span><span class="p">[</span><span class="n">maxCapacity</span><span class="p">];</span>
<a name="CString.cpp-114"></a>    <span class="n">buffer</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span> <span class="n">ch</span><span class="p">;</span>
<a name="CString.cpp-115"></a>    <span class="n">buffer</span><span class="p">[</span><span class="mi">1</span><span class="p">]</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
<a name="CString.cpp-116"></a>    <span class="n">length</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span>
<a name="CString.cpp-117"></a>    <span class="k">return</span> <span class="p">(</span><span class="o">*</span><span class="k">this</span><span class="p">);</span>
<a name="CString.cpp-118"></a><span class="p">}</span>
<a name="CString.cpp-119"></a>
<a name="CString.cpp-120"></a><span class="n">CString</span><span class="o">::</span><span class="n">CString</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">cStr</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-121"></a>    <span class="n">length</span> <span class="o">=</span> <span class="n">strlen</span><span class="p">(</span><span class="n">cStr</span><span class="p">);</span>
<a name="CString.cpp-122"></a>    <span class="n">assert</span><span class="p">(</span><span class="n">length</span> <span class="o">&gt;=</span> <span class="mi">0</span><span class="p">);</span>
<a name="CString.cpp-123"></a>    <span class="n">maxCapacity</span> <span class="o">=</span> <span class="n">getCapacityForGrowByFactor</span><span class="p">(</span><span class="n">length</span><span class="p">)</span> <span class="o">+</span> <span class="mi">1</span><span class="p">;</span>
<a name="CString.cpp-124"></a>    <span class="n">buffer</span> <span class="o">=</span> <span class="k">new</span> <span class="kt">char</span><span class="p">[</span><span class="n">maxCapacity</span><span class="p">];</span>
<a name="CString.cpp-125"></a>    <span class="n">strcpy</span><span class="p">(</span><span class="n">buffer</span><span class="p">,</span> <span class="n">cStr</span><span class="p">);</span>
<a name="CString.cpp-126"></a><span class="p">}</span>
<a name="CString.cpp-127"></a>
<a name="CString.cpp-128"></a><span class="n">CString</span><span class="o">::~</span><span class="n">CString</span><span class="p">()</span> <span class="p">{</span>
<a name="CString.cpp-129"></a>    <span class="k">delete</span><span class="p">[]</span> <span class="n">buffer</span><span class="p">;</span>
<a name="CString.cpp-130"></a><span class="p">}</span>
<a name="CString.cpp-131"></a>
<a name="CString.cpp-132"></a><span class="n">std</span><span class="o">::</span><span class="n">ostream</span> <span class="o">&amp;</span><span class="k">operator</span><span class="o">&lt;&lt;</span><span class="p">(</span><span class="n">std</span><span class="o">::</span><span class="n">ostream</span> <span class="o">&amp;</span><span class="n">out</span><span class="p">,</span> <span class="k">const</span> <span class="n">CString</span> <span class="o">&amp;</span><span class="n">str</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-133"></a>    <span class="n">assert</span><span class="p">(</span><span class="n">str</span><span class="p">.</span><span class="n">buffer</span> <span class="o">!=</span> <span class="k">nullptr</span><span class="p">);</span>
<a name="CString.cpp-134"></a>    <span class="n">out</span> <span class="o">&lt;&lt;</span> <span class="n">str</span><span class="p">.</span><span class="n">buffer</span><span class="p">;</span>
<a name="CString.cpp-135"></a>    <span class="k">return</span> <span class="n">out</span><span class="p">;</span>
<a name="CString.cpp-136"></a><span class="p">}</span>
<a name="CString.cpp-137"></a>
<a name="CString.cpp-138"></a><span class="n">CString</span><span class="o">::</span><span class="n">CString</span><span class="p">(</span><span class="k">const</span> <span class="n">CString</span> <span class="o">&amp;</span><span class="n">other</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-139"></a>    <span class="n">maxCapacity</span> <span class="o">=</span> <span class="n">other</span><span class="p">.</span><span class="n">maxCapacity</span><span class="p">;</span>
<a name="CString.cpp-140"></a>    <span class="n">length</span> <span class="o">=</span> <span class="n">other</span><span class="p">.</span><span class="n">length</span><span class="p">;</span>
<a name="CString.cpp-141"></a>    <span class="n">buffer</span> <span class="o">=</span> <span class="k">new</span> <span class="kt">char</span><span class="p">[</span><span class="n">maxCapacity</span><span class="p">];</span>
<a name="CString.cpp-142"></a>    <span class="n">strcpy</span><span class="p">(</span><span class="n">buffer</span><span class="p">,</span> <span class="n">other</span><span class="p">.</span><span class="n">buffer</span><span class="p">);</span>
<a name="CString.cpp-143"></a><span class="p">}</span>
<a name="CString.cpp-144"></a>
<a name="CString.cpp-145"></a><span class="kt">bool</span> <span class="n">CString</span><span class="o">::</span><span class="k">operator</span><span class="o">==</span><span class="p">(</span><span class="k">const</span> <span class="n">CString</span> <span class="o">&amp;</span><span class="n">other</span><span class="p">)</span> <span class="k">const</span> <span class="p">{</span>
<a name="CString.cpp-146"></a>    <span class="k">if</span> <span class="p">(</span><span class="n">length</span> <span class="o">!=</span> <span class="n">other</span><span class="p">.</span><span class="n">length</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-147"></a>        <span class="k">return</span> <span class="nb">false</span><span class="p">;</span>
<a name="CString.cpp-148"></a>    <span class="p">}</span>
<a name="CString.cpp-149"></a>    <span class="k">return</span> <span class="n">strcmp</span><span class="p">(</span><span class="n">buffer</span><span class="p">,</span> <span class="n">other</span><span class="p">.</span><span class="n">buffer</span><span class="p">)</span> <span class="o">==</span> <span class="mi">0</span><span class="p">;</span>
<a name="CString.cpp-150"></a><span class="p">}</span>
<a name="CString.cpp-151"></a>
<a name="CString.cpp-152"></a><span class="n">CString</span> <span class="o">&amp;</span><span class="n">CString</span><span class="o">::</span><span class="k">operator</span><span class="o">=</span><span class="p">(</span><span class="k">const</span> <span class="n">CString</span> <span class="o">&amp;</span><span class="n">other</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-153"></a>    <span class="k">if</span> <span class="p">(</span><span class="k">this</span> <span class="o">==</span> <span class="o">&amp;</span><span class="n">other</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-154"></a>        <span class="k">return</span> <span class="p">(</span><span class="o">*</span><span class="k">this</span><span class="p">);</span>
<a name="CString.cpp-155"></a>    <span class="p">}</span>
<a name="CString.cpp-156"></a>    <span class="k">delete</span><span class="p">[]</span> <span class="n">buffer</span><span class="p">;</span>
<a name="CString.cpp-157"></a>    <span class="n">maxCapacity</span> <span class="o">=</span> <span class="n">other</span><span class="p">.</span><span class="n">maxCapacity</span><span class="p">;</span>
<a name="CString.cpp-158"></a>    <span class="n">length</span> <span class="o">=</span> <span class="n">other</span><span class="p">.</span><span class="n">length</span><span class="p">;</span>
<a name="CString.cpp-159"></a>    <span class="n">buffer</span> <span class="o">=</span> <span class="k">new</span> <span class="kt">char</span><span class="p">[</span><span class="n">maxCapacity</span><span class="p">];</span>
<a name="CString.cpp-160"></a>    <span class="n">strcpy</span><span class="p">(</span><span class="n">buffer</span><span class="p">,</span> <span class="n">other</span><span class="p">.</span><span class="n">buffer</span><span class="p">);</span>
<a name="CString.cpp-161"></a>    <span class="k">return</span> <span class="p">(</span><span class="o">*</span><span class="k">this</span><span class="p">);</span>
<a name="CString.cpp-162"></a><span class="p">}</span>
<a name="CString.cpp-163"></a>
<a name="CString.cpp-164"></a><span class="n">CString</span> <span class="o">&amp;</span><span class="n">CString</span><span class="o">::</span><span class="k">operator</span><span class="o">=</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">str</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-165"></a>    <span class="k">if</span> <span class="p">(</span><span class="n">buffer</span> <span class="o">==</span> <span class="n">str</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-166"></a>        <span class="k">return</span> <span class="p">(</span><span class="o">*</span><span class="k">this</span><span class="p">);</span>
<a name="CString.cpp-167"></a>    <span class="p">}</span>
<a name="CString.cpp-168"></a>    <span class="k">delete</span><span class="p">[]</span> <span class="n">buffer</span><span class="p">;</span>
<a name="CString.cpp-169"></a>    <span class="n">length</span> <span class="o">=</span> <span class="n">strlen</span><span class="p">(</span><span class="n">str</span><span class="p">);</span>
<a name="CString.cpp-170"></a>    <span class="n">maxCapacity</span> <span class="o">=</span> <span class="n">getCapacityForGrowByFactor</span><span class="p">(</span><span class="n">length</span><span class="p">)</span> <span class="o">+</span> <span class="mi">1</span><span class="p">;</span>
<a name="CString.cpp-171"></a>    <span class="n">buffer</span> <span class="o">=</span> <span class="k">new</span> <span class="kt">char</span><span class="p">[</span><span class="n">maxCapacity</span><span class="p">];</span>
<a name="CString.cpp-172"></a>    <span class="n">strcpy</span><span class="p">(</span><span class="n">buffer</span><span class="p">,</span> <span class="n">str</span><span class="p">);</span>
<a name="CString.cpp-173"></a>
<a name="CString.cpp-174"></a>    <span class="k">return</span> <span class="p">(</span><span class="o">*</span><span class="k">this</span><span class="p">);</span>
<a name="CString.cpp-175"></a><span class="p">}</span>
<a name="CString.cpp-176"></a>
<a name="CString.cpp-177"></a><span class="n">CString</span> <span class="o">&amp;</span><span class="n">CString</span><span class="o">::</span><span class="k">operator</span><span class="o">+=</span><span class="p">(</span><span class="kt">char</span> <span class="n">a</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-178"></a>    <span class="k">if</span> <span class="p">(</span><span class="n">length</span> <span class="o">+</span> <span class="mi">1</span> <span class="o">&gt;=</span> <span class="n">maxCapacity</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-179"></a>        <span class="n">growByFactor</span><span class="p">();</span>
<a name="CString.cpp-180"></a>    <span class="p">}</span>
<a name="CString.cpp-181"></a>    <span class="n">buffer</span><span class="p">[</span><span class="n">length</span><span class="p">]</span> <span class="o">=</span> <span class="n">a</span><span class="p">;</span>
<a name="CString.cpp-182"></a>    <span class="o">++</span><span class="n">length</span><span class="p">;</span>
<a name="CString.cpp-183"></a>    <span class="n">buffer</span><span class="p">[</span><span class="n">length</span><span class="p">]</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
<a name="CString.cpp-184"></a>    <span class="k">return</span> <span class="p">(</span><span class="o">*</span><span class="k">this</span><span class="p">);</span>
<a name="CString.cpp-185"></a><span class="p">}</span>
<a name="CString.cpp-186"></a>
<a name="CString.cpp-187"></a><span class="kt">void</span> <span class="n">CString</span><span class="o">::</span><span class="n">growByFactor</span><span class="p">()</span> <span class="p">{</span>
<a name="CString.cpp-188"></a>    <span class="n">grow</span><span class="p">(</span><span class="n">getCapacityForGrowByFactor</span><span class="p">(</span><span class="n">maxCapacity</span><span class="p">));</span>
<a name="CString.cpp-189"></a><span class="p">}</span>
<a name="CString.cpp-190"></a>
<a name="CString.cpp-191"></a>
<a name="CString.cpp-192"></a><span class="kt">int</span> <span class="n">CString</span><span class="o">::</span><span class="n">getCapacityForGrowByFactor</span><span class="p">(</span><span class="kt">int</span> <span class="n">length</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-193"></a>    <span class="k">return</span> <span class="p">(</span><span class="kt">int</span><span class="p">)</span> <span class="p">(</span><span class="n">floor</span><span class="p">(</span><span class="n">length</span> <span class="o">*</span> <span class="n">growFactor</span><span class="p">));</span>
<a name="CString.cpp-194"></a><span class="p">}</span>
<a name="CString.cpp-195"></a>
<a name="CString.cpp-196"></a><span class="kt">void</span> <span class="n">CString</span><span class="o">::</span><span class="n">grow</span><span class="p">(</span><span class="kt">int</span> <span class="n">newCapacity</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-197"></a>    <span class="n">maxCapacity</span> <span class="o">=</span> <span class="n">newCapacity</span><span class="p">;</span>
<a name="CString.cpp-198"></a>    <span class="kt">char</span> <span class="o">*</span><span class="n">newBuffer</span> <span class="o">=</span> <span class="k">new</span> <span class="kt">char</span><span class="p">[</span><span class="n">newCapacity</span><span class="p">];</span>
<a name="CString.cpp-199"></a>    <span class="n">strcpy</span><span class="p">(</span><span class="n">newBuffer</span><span class="p">,</span> <span class="n">buffer</span><span class="p">);</span>
<a name="CString.cpp-200"></a>    <span class="k">delete</span><span class="p">[]</span> <span class="n">buffer</span><span class="p">;</span>
<a name="CString.cpp-201"></a>    <span class="n">buffer</span> <span class="o">=</span> <span class="n">newBuffer</span><span class="p">;</span>
<a name="CString.cpp-202"></a><span class="p">}</span>
<a name="CString.cpp-203"></a>
<a name="CString.cpp-204"></a><span class="n">CString</span> <span class="o">&amp;</span><span class="n">CString</span><span class="o">::</span><span class="k">operator</span><span class="o">+=</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">str</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-205"></a>    <span class="k">const</span> <span class="kt">int</span> <span class="n">otherStrLength</span> <span class="o">=</span> <span class="n">strlen</span><span class="p">(</span><span class="n">str</span><span class="p">);</span>
<a name="CString.cpp-206"></a>    <span class="k">if</span> <span class="p">(</span><span class="n">length</span> <span class="o">+</span> <span class="n">otherStrLength</span> <span class="o">+</span> <span class="mi">1</span> <span class="o">&gt;=</span> <span class="n">maxCapacity</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-207"></a>        <span class="n">grow</span><span class="p">(</span><span class="n">getCapacityForGrowByFactor</span><span class="p">(</span><span class="n">length</span> <span class="o">+</span> <span class="n">otherStrLength</span><span class="p">));</span>
<a name="CString.cpp-208"></a>    <span class="p">}</span>
<a name="CString.cpp-209"></a>    <span class="n">strcat</span><span class="p">(</span><span class="n">buffer</span><span class="p">,</span> <span class="n">str</span><span class="p">);</span>
<a name="CString.cpp-210"></a>    <span class="n">length</span> <span class="o">+=</span> <span class="n">otherStrLength</span><span class="p">;</span>
<a name="CString.cpp-211"></a>    <span class="k">return</span> <span class="p">(</span><span class="o">*</span><span class="k">this</span><span class="p">);</span>
<a name="CString.cpp-212"></a><span class="p">}</span>
<a name="CString.cpp-213"></a>
<a name="CString.cpp-214"></a><span class="n">CString</span> <span class="o">&amp;</span><span class="n">CString</span><span class="o">::</span><span class="k">operator</span><span class="o">+=</span><span class="p">(</span><span class="k">const</span> <span class="n">CString</span> <span class="o">&amp;</span><span class="n">str</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-215"></a>    <span class="k">return</span> <span class="k">operator</span><span class="o">+=</span><span class="p">(</span><span class="n">str</span><span class="p">.</span><span class="n">buffer</span><span class="p">);</span>
<a name="CString.cpp-216"></a><span class="p">}</span>
<a name="CString.cpp-217"></a>
<a name="CString.cpp-218"></a><span class="n">CString</span> <span class="k">operator</span><span class="o">+</span><span class="p">(</span><span class="k">const</span> <span class="n">CString</span> <span class="o">&amp;</span><span class="n">first</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">second</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-219"></a>    <span class="n">CString</span> <span class="n">temp</span><span class="p">(</span><span class="n">first</span><span class="p">);</span>
<a name="CString.cpp-220"></a>    <span class="n">temp</span> <span class="o">+=</span> <span class="n">second</span><span class="p">;</span>
<a name="CString.cpp-221"></a>    <span class="k">return</span> <span class="n">temp</span><span class="p">;</span>
<a name="CString.cpp-222"></a><span class="p">}</span>
<a name="CString.cpp-223"></a>
<a name="CString.cpp-224"></a><span class="n">CString</span> <span class="k">operator</span><span class="o">+</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">first</span><span class="p">,</span> <span class="k">const</span> <span class="n">CString</span> <span class="o">&amp;</span><span class="n">second</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-225"></a>    <span class="n">CString</span> <span class="n">temp</span><span class="p">(</span><span class="n">first</span><span class="p">);</span>
<a name="CString.cpp-226"></a>    <span class="n">temp</span> <span class="o">+=</span> <span class="n">second</span><span class="p">;</span>
<a name="CString.cpp-227"></a>    <span class="k">return</span> <span class="n">temp</span><span class="p">;</span>
<a name="CString.cpp-228"></a><span class="p">}</span>
<a name="CString.cpp-229"></a>
<a name="CString.cpp-230"></a><span class="kt">void</span> <span class="n">CString</span><span class="o">::</span><span class="n">Append</span><span class="p">(</span><span class="kt">char</span> <span class="n">symbol</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-231"></a>    <span class="k">operator</span><span class="o">+=</span><span class="p">(</span><span class="n">symbol</span><span class="p">);</span>
<a name="CString.cpp-232"></a><span class="p">}</span>
<a name="CString.cpp-233"></a>
<a name="CString.cpp-234"></a><span class="kt">void</span> <span class="n">CString</span><span class="o">::</span><span class="n">SetBufferLength</span><span class="p">(</span><span class="kt">int</span> <span class="n">newLength</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-235"></a>    <span class="n">assert</span><span class="p">(</span><span class="n">newLength</span> <span class="o">&gt;</span> <span class="n">maxCapacity</span><span class="p">);</span>
<a name="CString.cpp-236"></a>    <span class="kt">char</span> <span class="o">*</span><span class="n">new_buffer</span> <span class="o">=</span> <span class="k">new</span> <span class="kt">char</span><span class="p">[</span><span class="n">newLength</span><span class="p">];</span>
<a name="CString.cpp-237"></a>    <span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">length</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-238"></a>        <span class="n">new_buffer</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">=</span> <span class="n">buffer</span><span class="p">[</span><span class="n">i</span><span class="p">];</span>
<a name="CString.cpp-239"></a>    <span class="p">}</span>
<a name="CString.cpp-240"></a>    <span class="n">new_buffer</span><span class="p">[</span><span class="n">length</span><span class="p">]</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
<a name="CString.cpp-241"></a>    <span class="k">if</span> <span class="p">(</span><span class="n">buffer</span> <span class="o">!=</span> <span class="k">nullptr</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-242"></a>        <span class="k">delete</span><span class="p">[]</span><span class="n">buffer</span><span class="p">;</span>
<a name="CString.cpp-243"></a>    <span class="p">}</span>
<a name="CString.cpp-244"></a>    <span class="n">buffer</span> <span class="o">=</span> <span class="n">new_buffer</span><span class="p">;</span>
<a name="CString.cpp-245"></a>    <span class="n">maxCapacity</span> <span class="o">=</span> <span class="n">newLength</span><span class="p">;</span>
<a name="CString.cpp-246"></a><span class="p">}</span>
<a name="CString.cpp-247"></a>
<a name="CString.cpp-248"></a><span class="kt">void</span> <span class="n">CString</span><span class="o">::</span><span class="n">Append</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">str</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-249"></a>    <span class="k">operator</span><span class="o">+=</span><span class="p">(</span><span class="n">str</span><span class="p">);</span>
<a name="CString.cpp-250"></a><span class="p">}</span>
<a name="CString.cpp-251"></a>
<a name="CString.cpp-252"></a><span class="kt">void</span> <span class="n">CString</span><span class="o">::</span><span class="n">Append</span><span class="p">(</span><span class="k">const</span> <span class="n">CString</span> <span class="o">&amp;</span><span class="n">str</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-253"></a>    <span class="k">operator</span><span class="o">+=</span><span class="p">(</span><span class="n">str</span><span class="p">);</span>
<a name="CString.cpp-254"></a><span class="p">}</span>
<a name="CString.cpp-255"></a>
<a name="CString.cpp-256"></a><span class="kt">int</span> <span class="n">CString</span><span class="o">::</span><span class="n">Compare</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">str</span><span class="p">)</span> <span class="k">const</span> <span class="p">{</span>
<a name="CString.cpp-257"></a>    <span class="n">assert</span><span class="p">(</span><span class="n">str</span> <span class="o">!=</span> <span class="k">nullptr</span><span class="p">);</span>
<a name="CString.cpp-258"></a>    <span class="k">return</span> <span class="nf">strcmp</span><span class="p">(</span><span class="n">buffer</span><span class="p">,</span> <span class="n">str</span><span class="p">);</span>
<a name="CString.cpp-259"></a><span class="p">}</span>
<a name="CString.cpp-260"></a>
<a name="CString.cpp-261"></a><span class="kt">int</span> <span class="n">CString</span><span class="o">::</span><span class="n">CompareNoCase</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">str</span><span class="p">)</span> <span class="k">const</span> <span class="p">{</span>
<a name="CString.cpp-262"></a>    <span class="n">assert</span><span class="p">(</span><span class="n">str</span> <span class="o">!=</span> <span class="k">nullptr</span><span class="p">);</span>
<a name="CString.cpp-263"></a>
<a name="CString.cpp-264"></a>    <span class="n">CString</span> <span class="nf">a</span><span class="p">(</span><span class="n">str</span><span class="p">);</span>
<a name="CString.cpp-265"></a>    <span class="n">CString</span> <span class="nf">b</span><span class="p">(</span><span class="n">buffer</span><span class="p">);</span>
<a name="CString.cpp-266"></a>    <span class="n">a</span><span class="p">.</span><span class="n">MakeLower</span><span class="p">();</span>
<a name="CString.cpp-267"></a>    <span class="n">b</span><span class="p">.</span><span class="n">MakeLower</span><span class="p">();</span>
<a name="CString.cpp-268"></a>    <span class="k">return</span> <span class="nf">strcmp</span><span class="p">(</span><span class="n">a</span><span class="p">.</span><span class="n">buffer</span><span class="p">,</span> <span class="n">b</span><span class="p">.</span><span class="n">buffer</span><span class="p">);</span>
<a name="CString.cpp-269"></a><span class="p">}</span>
<a name="CString.cpp-270"></a>
<a name="CString.cpp-271"></a><span class="kt">bool</span> <span class="n">CString</span><span class="o">::</span><span class="n">EqualsNoCase</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">str</span><span class="p">)</span> <span class="k">const</span> <span class="p">{</span>
<a name="CString.cpp-272"></a>    <span class="n">assert</span><span class="p">(</span><span class="n">str</span> <span class="o">!=</span> <span class="k">nullptr</span><span class="p">);</span>
<a name="CString.cpp-273"></a>    <span class="k">return</span> <span class="nf">CompareNoCase</span><span class="p">(</span><span class="n">str</span><span class="p">)</span> <span class="o">==</span> <span class="mi">0</span><span class="p">;</span>
<a name="CString.cpp-274"></a><span class="p">}</span>
<a name="CString.cpp-275"></a>
<a name="CString.cpp-276"></a><span class="kt">char</span> <span class="o">&amp;</span><span class="n">CString</span><span class="o">::</span><span class="n">GetAt</span><span class="p">(</span><span class="kt">int</span> <span class="n">index</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-277"></a>    <span class="n">assert</span><span class="p">(</span><span class="n">index</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">index</span> <span class="o">&lt;=</span> <span class="n">length</span><span class="p">);</span>
<a name="CString.cpp-278"></a>    <span class="k">return</span> <span class="n">buffer</span><span class="p">[</span><span class="n">index</span><span class="p">];</span>
<a name="CString.cpp-279"></a><span class="p">}</span>
<a name="CString.cpp-280"></a>
<a name="CString.cpp-281"></a><span class="kt">char</span> <span class="o">&amp;</span><span class="n">CString</span><span class="o">::</span><span class="k">operator</span><span class="p">[](</span><span class="kt">int</span> <span class="n">index</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-282"></a>    <span class="n">assert</span><span class="p">(</span><span class="n">index</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">index</span> <span class="o">&lt;=</span> <span class="n">length</span><span class="p">);</span>
<a name="CString.cpp-283"></a>    <span class="k">return</span> <span class="n">buffer</span><span class="p">[</span><span class="n">index</span><span class="p">];</span>
<a name="CString.cpp-284"></a><span class="p">}</span>
<a name="CString.cpp-285"></a>
<a name="CString.cpp-286"></a><span class="k">const</span> <span class="kt">char</span> <span class="o">&amp;</span><span class="n">CString</span><span class="o">::</span><span class="k">operator</span><span class="p">[](</span><span class="kt">int</span> <span class="n">index</span><span class="p">)</span> <span class="k">const</span> <span class="p">{</span>
<a name="CString.cpp-287"></a>    <span class="n">assert</span><span class="p">(</span><span class="n">index</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">index</span> <span class="o">&lt;=</span> <span class="n">length</span><span class="p">);</span>
<a name="CString.cpp-288"></a>    <span class="k">return</span> <span class="n">buffer</span><span class="p">[</span><span class="n">index</span><span class="p">];</span>
<a name="CString.cpp-289"></a><span class="p">}</span>
<a name="CString.cpp-290"></a>
<a name="CString.cpp-291"></a><span class="kt">bool</span> <span class="n">CString</span><span class="o">::</span><span class="n">IsEmpty</span><span class="p">()</span> <span class="k">const</span> <span class="p">{</span>
<a name="CString.cpp-292"></a>    <span class="n">assert</span><span class="p">(</span><span class="n">buffer</span> <span class="o">!=</span> <span class="k">nullptr</span><span class="p">);</span>
<a name="CString.cpp-293"></a>    <span class="k">return</span> <span class="n">buffer</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">==</span> <span class="mi">0</span><span class="p">;</span>
<a name="CString.cpp-294"></a><span class="p">}</span>
<a name="CString.cpp-295"></a>
<a name="CString.cpp-296"></a><span class="kt">void</span> <span class="n">CString</span><span class="o">::</span><span class="n">MakeEmpty</span><span class="p">()</span> <span class="p">{</span>
<a name="CString.cpp-297"></a>    <span class="k">delete</span><span class="p">[]</span> <span class="n">buffer</span><span class="p">;</span>
<a name="CString.cpp-298"></a>    <span class="n">buffer</span> <span class="o">=</span> <span class="k">new</span> <span class="kt">char</span><span class="p">[</span><span class="n">maxCapacity</span><span class="p">];</span>
<a name="CString.cpp-299"></a>    <span class="n">buffer</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
<a name="CString.cpp-300"></a>    <span class="n">length</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
<a name="CString.cpp-301"></a><span class="p">}</span>
<a name="CString.cpp-302"></a>
<a name="CString.cpp-303"></a><span class="n">CString</span> <span class="n">CString</span><span class="o">::</span><span class="n">SubString</span><span class="p">(</span><span class="kt">int</span> <span class="n">firstPos</span><span class="p">,</span> <span class="kt">int</span> <span class="n">count</span><span class="p">)</span> <span class="k">const</span> <span class="p">{</span>
<a name="CString.cpp-304"></a>    <span class="n">assert</span><span class="p">(</span><span class="n">firstPos</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">firstPos</span> <span class="o">&lt;</span> <span class="n">length</span><span class="p">);</span>
<a name="CString.cpp-305"></a>    <span class="k">return</span> <span class="nf">CString</span><span class="p">(</span><span class="n">buffer</span> <span class="o">+</span> <span class="n">firstPos</span><span class="p">,</span> <span class="n">count</span><span class="p">);</span>
<a name="CString.cpp-306"></a><span class="p">}</span>
<a name="CString.cpp-307"></a>
<a name="CString.cpp-308"></a><span class="n">CString</span> <span class="n">CString</span><span class="o">::</span><span class="n">SubString</span><span class="p">(</span><span class="kt">int</span> <span class="n">firstPos</span><span class="p">)</span> <span class="k">const</span> <span class="p">{</span>
<a name="CString.cpp-309"></a>    <span class="n">assert</span><span class="p">(</span><span class="n">firstPos</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">firstPos</span> <span class="o">&lt;</span> <span class="n">length</span><span class="p">);</span>
<a name="CString.cpp-310"></a>    <span class="k">return</span> <span class="nf">CString</span><span class="p">(</span><span class="n">buffer</span> <span class="o">+</span> <span class="n">firstPos</span><span class="p">);</span>
<a name="CString.cpp-311"></a><span class="p">}</span>
<a name="CString.cpp-312"></a>
<a name="CString.cpp-313"></a><span class="kt">void</span> <span class="n">CString</span><span class="o">::</span><span class="n">MakeUpper</span><span class="p">()</span> <span class="p">{</span>
<a name="CString.cpp-314"></a>    <span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">buffer</span><span class="p">[</span><span class="n">i</span><span class="p">];</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-315"></a>        <span class="n">buffer</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">=</span> <span class="n">toupper</span><span class="p">(</span><span class="n">buffer</span><span class="p">[</span><span class="n">i</span><span class="p">]);</span>
<a name="CString.cpp-316"></a>    <span class="p">}</span>
<a name="CString.cpp-317"></a><span class="p">}</span>
<a name="CString.cpp-318"></a>
<a name="CString.cpp-319"></a><span class="kt">void</span> <span class="n">CString</span><span class="o">::</span><span class="n">MakeLower</span><span class="p">()</span> <span class="p">{</span>
<a name="CString.cpp-320"></a>    <span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">buffer</span><span class="p">[</span><span class="n">i</span><span class="p">];</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-321"></a>        <span class="n">buffer</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">=</span> <span class="n">tolower</span><span class="p">(</span><span class="n">buffer</span><span class="p">[</span><span class="n">i</span><span class="p">]);</span>
<a name="CString.cpp-322"></a>    <span class="p">}</span>
<a name="CString.cpp-323"></a><span class="p">}</span>
<a name="CString.cpp-324"></a>
<a name="CString.cpp-325"></a><span class="kt">void</span> <span class="n">CString</span><span class="o">::</span><span class="n">MakeReverse</span><span class="p">()</span> <span class="p">{</span>
<a name="CString.cpp-326"></a>
<a name="CString.cpp-327"></a>    <span class="k">if</span> <span class="p">(</span><span class="o">*</span><span class="n">buffer</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span> <span class="k">return</span><span class="p">;</span> <span class="p">}</span>
<a name="CString.cpp-328"></a>
<a name="CString.cpp-329"></a>    <span class="kt">char</span> <span class="o">*</span><span class="n">start</span> <span class="o">=</span> <span class="n">buffer</span><span class="p">;</span>
<a name="CString.cpp-330"></a>    <span class="kt">char</span> <span class="o">*</span><span class="n">end</span> <span class="o">=</span> <span class="n">start</span> <span class="o">+</span> <span class="n">length</span> <span class="o">-</span> <span class="mi">1</span><span class="p">;</span>
<a name="CString.cpp-331"></a>    <span class="k">for</span> <span class="p">(;</span> <span class="n">start</span> <span class="o">&lt;</span> <span class="n">end</span><span class="p">;</span> <span class="o">++</span><span class="n">start</span><span class="p">,</span> <span class="o">--</span><span class="n">end</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-332"></a>        <span class="n">std</span><span class="o">::</span><span class="n">swap</span><span class="p">(</span><span class="o">*</span><span class="n">start</span><span class="p">,</span> <span class="o">*</span><span class="n">end</span><span class="p">);</span>
<a name="CString.cpp-333"></a>    <span class="p">}</span>
<a name="CString.cpp-334"></a><span class="p">}</span>
<a name="CString.cpp-335"></a>
<a name="CString.cpp-336"></a><span class="kt">int</span> <span class="n">CString</span><span class="o">::</span><span class="n">Find</span><span class="p">(</span><span class="kt">char</span> <span class="n">ch</span><span class="p">,</span> <span class="kt">int</span> <span class="n">startPos</span><span class="p">)</span> <span class="k">const</span> <span class="p">{</span>
<a name="CString.cpp-337"></a>    <span class="n">assert</span><span class="p">(</span><span class="n">startPos</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">startPos</span> <span class="o">&lt;=</span> <span class="n">length</span><span class="p">);</span>
<a name="CString.cpp-338"></a>    <span class="kt">char</span> <span class="o">*</span><span class="n">pch</span> <span class="o">=</span> <span class="n">strchr</span><span class="p">(</span><span class="n">buffer</span> <span class="o">+</span> <span class="n">startPos</span><span class="p">,</span> <span class="n">ch</span><span class="p">);</span>
<a name="CString.cpp-339"></a>    <span class="k">return</span> <span class="p">(</span><span class="n">pch</span> <span class="o">==</span> <span class="k">nullptr</span><span class="p">)</span> <span class="o">?</span> <span class="o">-</span><span class="mi">1</span> <span class="o">:</span> <span class="p">(</span><span class="n">pch</span> <span class="o">-</span> <span class="n">buffer</span><span class="p">);</span>
<a name="CString.cpp-340"></a><span class="p">}</span>
<a name="CString.cpp-341"></a>
<a name="CString.cpp-342"></a><span class="kt">int</span> <span class="n">CString</span><span class="o">::</span><span class="n">Find</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">subString</span><span class="p">,</span> <span class="kt">int</span> <span class="n">startPos</span><span class="p">)</span> <span class="k">const</span> <span class="p">{</span>
<a name="CString.cpp-343"></a>    <span class="n">assert</span><span class="p">(</span><span class="n">subString</span> <span class="o">!=</span> <span class="k">nullptr</span><span class="p">);</span>
<a name="CString.cpp-344"></a>    <span class="n">assert</span><span class="p">(</span><span class="n">startPos</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">startPos</span> <span class="o">&lt;</span> <span class="n">length</span><span class="p">);</span>
<a name="CString.cpp-345"></a>    <span class="kt">char</span> <span class="o">*</span><span class="n">pch</span> <span class="o">=</span> <span class="n">strstr</span><span class="p">(</span><span class="n">buffer</span> <span class="o">+</span> <span class="n">startPos</span><span class="p">,</span> <span class="n">subString</span><span class="p">);</span>
<a name="CString.cpp-346"></a>    <span class="k">return</span> <span class="p">(</span><span class="n">pch</span> <span class="o">==</span> <span class="k">nullptr</span><span class="p">)</span> <span class="o">?</span> <span class="o">-</span><span class="mi">1</span> <span class="o">:</span> <span class="p">(</span><span class="n">pch</span> <span class="o">-</span> <span class="n">buffer</span><span class="p">);</span>
<a name="CString.cpp-347"></a><span class="p">}</span>
<a name="CString.cpp-348"></a>
<a name="CString.cpp-349"></a><span class="kt">int</span> <span class="n">CString</span><span class="o">::</span><span class="n">FindNoCase</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">subString</span><span class="p">,</span> <span class="kt">int</span> <span class="n">startPos</span><span class="p">)</span> <span class="k">const</span> <span class="p">{</span>
<a name="CString.cpp-350"></a>    <span class="n">assert</span><span class="p">(</span><span class="n">subString</span> <span class="o">!=</span> <span class="k">nullptr</span><span class="p">);</span>
<a name="CString.cpp-351"></a>    <span class="n">assert</span><span class="p">(</span><span class="n">startPos</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">startPos</span> <span class="o">&lt;</span> <span class="n">length</span><span class="p">);</span>
<a name="CString.cpp-352"></a>
<a name="CString.cpp-353"></a>    <span class="n">CString</span> <span class="nf">a</span><span class="p">(</span><span class="n">subString</span><span class="p">);</span>
<a name="CString.cpp-354"></a>    <span class="n">CString</span> <span class="nf">b</span><span class="p">(</span><span class="n">buffer</span><span class="p">);</span>
<a name="CString.cpp-355"></a>    <span class="n">a</span><span class="p">.</span><span class="n">MakeLower</span><span class="p">();</span>
<a name="CString.cpp-356"></a>    <span class="n">b</span><span class="p">.</span><span class="n">MakeLower</span><span class="p">();</span>
<a name="CString.cpp-357"></a>
<a name="CString.cpp-358"></a>    <span class="k">return</span> <span class="n">b</span><span class="p">.</span><span class="n">Find</span><span class="p">(</span><span class="n">subString</span><span class="p">,</span> <span class="n">startPos</span><span class="p">);</span>
<a name="CString.cpp-359"></a><span class="p">}</span>
<a name="CString.cpp-360"></a>
<a name="CString.cpp-361"></a><span class="kt">void</span> <span class="n">CString</span><span class="o">::</span><span class="n">StrDel</span><span class="p">(</span><span class="kt">int</span> <span class="n">pos</span><span class="p">,</span> <span class="kt">int</span> <span class="n">num</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-362"></a>    <span class="n">assert</span><span class="p">(</span><span class="n">pos</span> <span class="o">+</span> <span class="n">num</span> <span class="o">&lt;=</span> <span class="n">length</span><span class="p">);</span>
<a name="CString.cpp-363"></a>    <span class="n">assert</span><span class="p">(</span><span class="n">num</span> <span class="o">&gt;=</span> <span class="mi">1</span><span class="p">);</span>
<a name="CString.cpp-364"></a>
<a name="CString.cpp-365"></a>    <span class="n">CString</span> <span class="nf">string</span><span class="p">(</span><span class="n">buffer</span><span class="p">,</span> <span class="n">pos</span><span class="p">);</span>
<a name="CString.cpp-366"></a>    <span class="n">string</span> <span class="o">+=</span> <span class="p">(</span><span class="n">buffer</span> <span class="o">+</span> <span class="p">(</span><span class="n">pos</span> <span class="o">+</span> <span class="n">num</span><span class="p">));</span>
<a name="CString.cpp-367"></a>    <span class="k">operator</span><span class="o">=</span><span class="p">(</span><span class="n">string</span><span class="p">);</span>
<a name="CString.cpp-368"></a>    <span class="n">length</span> <span class="o">-=</span> <span class="n">num</span><span class="p">;</span>
<a name="CString.cpp-369"></a><span class="p">}</span>
<a name="CString.cpp-370"></a>
<a name="CString.cpp-371"></a><span class="kt">void</span> <span class="n">CString</span><span class="o">::</span><span class="n">StrDel</span><span class="p">(</span><span class="kt">int</span> <span class="n">pos</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-372"></a>    <span class="n">StrDel</span><span class="p">(</span><span class="n">pos</span><span class="p">,</span> <span class="mi">1</span><span class="p">);</span>
<a name="CString.cpp-373"></a><span class="p">}</span>
<a name="CString.cpp-374"></a>
<a name="CString.cpp-375"></a><span class="kt">void</span> <span class="n">CString</span><span class="o">::</span><span class="n">StrIns</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">str</span><span class="p">,</span> <span class="kt">int</span> <span class="n">pos</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-376"></a>    <span class="n">CString</span> <span class="n">string</span><span class="p">(</span><span class="k">this</span><span class="o">-&gt;</span><span class="n">buffer</span><span class="p">,</span> <span class="n">pos</span><span class="p">);</span>
<a name="CString.cpp-377"></a>    <span class="n">string</span> <span class="o">+=</span> <span class="n">str</span><span class="p">;</span>
<a name="CString.cpp-378"></a>    <span class="n">string</span> <span class="o">+=</span> <span class="p">(</span><span class="n">buffer</span> <span class="o">+</span> <span class="n">pos</span><span class="p">);</span>
<a name="CString.cpp-379"></a>    <span class="k">operator</span><span class="o">=</span><span class="p">(</span><span class="n">string</span><span class="p">);</span>
<a name="CString.cpp-380"></a><span class="p">}</span>
<a name="CString.cpp-381"></a>
<a name="CString.cpp-382"></a><span class="kt">void</span> <span class="n">CString</span><span class="o">::</span><span class="n">StrIns</span><span class="p">(</span><span class="k">const</span> <span class="n">CString</span> <span class="o">&amp;</span><span class="n">str</span><span class="p">,</span> <span class="kt">int</span> <span class="n">pos</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-383"></a>    <span class="n">StrIns</span><span class="p">(</span><span class="n">str</span><span class="p">.</span><span class="n">buffer</span><span class="p">,</span> <span class="n">pos</span><span class="p">);</span>
<a name="CString.cpp-384"></a><span class="p">}</span>
<a name="CString.cpp-385"></a>
<a name="CString.cpp-386"></a><span class="kt">void</span> <span class="n">CString</span><span class="o">::</span><span class="n">StrReplace</span><span class="p">(</span><span class="kt">int</span> <span class="n">pos</span><span class="p">,</span> <span class="k">const</span> <span class="n">CString</span> <span class="o">&amp;</span><span class="n">str</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-387"></a>    <span class="n">StrReplace</span><span class="p">(</span><span class="n">pos</span><span class="p">,</span> <span class="n">str</span><span class="p">.</span><span class="n">buffer</span><span class="p">);</span>
<a name="CString.cpp-388"></a><span class="p">}</span>
<a name="CString.cpp-389"></a>
<a name="CString.cpp-390"></a><span class="kt">void</span> <span class="n">CString</span><span class="o">::</span><span class="n">StrReplace</span><span class="p">(</span><span class="kt">int</span> <span class="n">pos</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">str</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-391"></a>    <span class="n">assert</span><span class="p">(</span><span class="n">str</span> <span class="o">!=</span> <span class="k">nullptr</span><span class="p">);</span>
<a name="CString.cpp-392"></a>    <span class="k">const</span> <span class="kt">int</span> <span class="n">otherStrLength</span> <span class="o">=</span> <span class="n">strlen</span><span class="p">(</span><span class="n">str</span><span class="p">);</span>
<a name="CString.cpp-393"></a>    <span class="n">assert</span><span class="p">(</span><span class="n">pos</span> <span class="o">&lt;</span> <span class="n">length</span><span class="p">);</span>
<a name="CString.cpp-394"></a>    <span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="n">pos</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">pos</span> <span class="o">+</span> <span class="n">otherStrLength</span> <span class="o">&amp;&amp;</span> <span class="n">buffer</span><span class="p">[</span><span class="n">i</span><span class="p">];</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-395"></a>        <span class="n">buffer</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">=</span> <span class="n">str</span><span class="p">[</span><span class="n">i</span> <span class="o">-</span> <span class="n">pos</span><span class="p">];</span>
<a name="CString.cpp-396"></a>    <span class="p">}</span>
<a name="CString.cpp-397"></a><span class="p">}</span>
<a name="CString.cpp-398"></a>
<a name="CString.cpp-399"></a><span class="kt">void</span> <span class="n">CString</span><span class="o">::</span><span class="n">CharIns</span><span class="p">(</span><span class="kt">char</span> <span class="n">ch</span><span class="p">,</span> <span class="kt">int</span> <span class="n">pos</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-400"></a>    <span class="k">if</span> <span class="p">(</span><span class="n">length</span> <span class="o">+</span> <span class="mi">1</span> <span class="o">&gt;=</span> <span class="n">maxCapacity</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-401"></a>        <span class="n">growByFactor</span><span class="p">();</span>
<a name="CString.cpp-402"></a>    <span class="p">}</span>
<a name="CString.cpp-403"></a>    <span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="n">length</span><span class="p">;</span> <span class="n">i</span> <span class="o">&gt;</span> <span class="n">pos</span><span class="p">;</span> <span class="n">i</span><span class="o">--</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-404"></a>        <span class="n">buffer</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">=</span> <span class="n">buffer</span><span class="p">[</span><span class="n">i</span> <span class="o">-</span> <span class="mi">1</span><span class="p">];</span>
<a name="CString.cpp-405"></a>    <span class="p">}</span>
<a name="CString.cpp-406"></a>    <span class="n">buffer</span><span class="p">[</span><span class="n">pos</span><span class="p">]</span> <span class="o">=</span> <span class="n">ch</span><span class="p">;</span>
<a name="CString.cpp-407"></a>    <span class="o">++</span><span class="n">length</span><span class="p">;</span>
<a name="CString.cpp-408"></a>    <span class="n">buffer</span><span class="p">[</span><span class="n">length</span><span class="p">]</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
<a name="CString.cpp-409"></a><span class="p">}</span>
<a name="CString.cpp-410"></a>
<a name="CString.cpp-411"></a><span class="kt">void</span> <span class="n">CString</span><span class="o">::</span><span class="n">ReplaceAll</span><span class="p">(</span><span class="kt">char</span> <span class="n">src</span><span class="p">,</span> <span class="kt">char</span> <span class="n">newSymbol</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-412"></a>    <span class="kt">char</span> <span class="o">*</span><span class="n">strPtr</span> <span class="o">=</span> <span class="n">buffer</span><span class="p">;</span>
<a name="CString.cpp-413"></a>    <span class="k">while</span> <span class="p">((</span><span class="n">strPtr</span> <span class="o">=</span> <span class="n">strchr</span><span class="p">(</span><span class="n">strPtr</span><span class="p">,</span> <span class="n">src</span><span class="p">))</span> <span class="o">!=</span> <span class="k">nullptr</span><span class="p">)</span>
<a name="CString.cpp-414"></a>        <span class="o">*</span><span class="n">strPtr</span><span class="o">++</span> <span class="o">=</span> <span class="n">newSymbol</span><span class="p">;</span>
<a name="CString.cpp-415"></a><span class="p">}</span>
<a name="CString.cpp-416"></a>
<a name="CString.cpp-417"></a><span class="kt">void</span> <span class="n">CString</span><span class="o">::</span><span class="n">ReplaceAll</span><span class="p">(</span><span class="kt">char</span> <span class="n">src</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">newStr</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-418"></a>    <span class="kt">char</span> <span class="n">ch</span><span class="p">[</span><span class="mi">2</span><span class="p">]</span> <span class="o">=</span> <span class="p">{</span><span class="n">src</span><span class="p">,</span> <span class="sc">&#39;\0&#39;</span><span class="p">};</span>
<a name="CString.cpp-419"></a>    <span class="n">ReplaceAll</span><span class="p">(</span><span class="n">ch</span><span class="p">,</span> <span class="n">newStr</span><span class="p">);</span>
<a name="CString.cpp-420"></a><span class="p">}</span>
<a name="CString.cpp-421"></a>
<a name="CString.cpp-422"></a>
<a name="CString.cpp-423"></a><span class="kt">void</span> <span class="n">CString</span><span class="o">::</span><span class="n">ReplaceAll</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">src</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">newStr</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-424"></a>
<a name="CString.cpp-425"></a>    <span class="cm">/* Another possible solution</span>
<a name="CString.cpp-426"></a><span class="cm">     int otherLength = strlen(src);</span>
<a name="CString.cpp-427"></a><span class="cm">     int newStrLength = strlen(newStr);</span>
<a name="CString.cpp-428"></a><span class="cm">     int k = 0;</span>
<a name="CString.cpp-429"></a><span class="cm">     while (k &lt; length &amp;&amp; (k = Find(src,k)) != -1){</span>
<a name="CString.cpp-430"></a><span class="cm">         StrDel(k,otherLength);</span>
<a name="CString.cpp-431"></a><span class="cm">         StrIns(newStr,k);</span>
<a name="CString.cpp-432"></a><span class="cm">         k+=newStrLength;</span>
<a name="CString.cpp-433"></a><span class="cm">    }*/</span>
<a name="CString.cpp-434"></a>
<a name="CString.cpp-435"></a>    <span class="n">CString</span> <span class="n">string</span><span class="p">;</span>
<a name="CString.cpp-436"></a>    <span class="kt">char</span> <span class="o">*</span><span class="n">p</span><span class="p">;</span>
<a name="CString.cpp-437"></a>    <span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">p</span> <span class="o">=</span> <span class="n">strstr</span><span class="p">(</span><span class="n">buffer</span><span class="p">,</span> <span class="n">src</span><span class="p">)))</span> <span class="p">{</span>
<a name="CString.cpp-438"></a>        <span class="k">return</span><span class="p">;</span>
<a name="CString.cpp-439"></a>    <span class="p">}</span>
<a name="CString.cpp-440"></a>
<a name="CString.cpp-441"></a>    <span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
<a name="CString.cpp-442"></a>    <span class="kt">int</span> <span class="n">scrLength</span> <span class="o">=</span> <span class="n">strlen</span><span class="p">(</span><span class="n">src</span><span class="p">);</span>
<a name="CString.cpp-443"></a>    <span class="k">while</span> <span class="p">(</span><span class="n">buffer</span><span class="p">[</span><span class="n">i</span><span class="p">])</span> <span class="p">{</span>
<a name="CString.cpp-444"></a>        <span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">p</span> <span class="o">=</span> <span class="n">strstr</span><span class="p">(</span><span class="n">buffer</span> <span class="o">+</span> <span class="n">i</span><span class="p">,</span> <span class="n">src</span><span class="p">)))</span> <span class="k">break</span><span class="p">;</span>
<a name="CString.cpp-445"></a>        <span class="n">string</span> <span class="o">+=</span> <span class="n">CString</span><span class="p">(</span><span class="n">buffer</span> <span class="o">+</span> <span class="n">i</span><span class="p">,</span> <span class="p">(</span><span class="n">p</span> <span class="o">-</span> <span class="n">buffer</span><span class="p">)</span> <span class="o">-</span> <span class="n">i</span><span class="p">);</span>
<a name="CString.cpp-446"></a>        <span class="n">string</span> <span class="o">+=</span> <span class="n">newStr</span><span class="p">;</span>
<a name="CString.cpp-447"></a>        <span class="n">i</span> <span class="o">=</span> <span class="p">(</span><span class="n">p</span> <span class="o">-</span> <span class="n">buffer</span><span class="p">)</span> <span class="o">+</span> <span class="n">scrLength</span><span class="p">;</span>
<a name="CString.cpp-448"></a>    <span class="p">}</span>
<a name="CString.cpp-449"></a>
<a name="CString.cpp-450"></a>    <span class="k">if</span> <span class="p">(</span><span class="n">buffer</span><span class="p">[</span><span class="n">i</span><span class="p">])</span> <span class="p">{</span>
<a name="CString.cpp-451"></a>        <span class="n">string</span> <span class="o">+=</span> <span class="p">(</span><span class="n">buffer</span> <span class="o">+</span> <span class="n">i</span><span class="p">);</span>
<a name="CString.cpp-452"></a>    <span class="p">}</span>
<a name="CString.cpp-453"></a>    <span class="k">operator</span><span class="o">=</span><span class="p">(</span><span class="n">string</span><span class="p">);</span>
<a name="CString.cpp-454"></a><span class="p">}</span>
<a name="CString.cpp-455"></a>
<a name="CString.cpp-456"></a><span class="kt">void</span> <span class="n">CString</span><span class="o">::</span><span class="n">ReplaceAll</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">src</span><span class="p">,</span> <span class="kt">char</span> <span class="n">newSymbol</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-457"></a>    <span class="kt">char</span> <span class="n">ch</span><span class="p">[</span><span class="mi">2</span><span class="p">]</span> <span class="o">=</span> <span class="p">{</span><span class="n">newSymbol</span><span class="p">,</span> <span class="sc">&#39;\0&#39;</span><span class="p">};</span>
<a name="CString.cpp-458"></a>    <span class="n">ReplaceAll</span><span class="p">(</span><span class="n">src</span><span class="p">,</span> <span class="n">ch</span><span class="p">);</span>
<a name="CString.cpp-459"></a><span class="p">}</span>
<a name="CString.cpp-460"></a>
<a name="CString.cpp-461"></a><span class="n">CString</span> <span class="k">operator</span><span class="o">+</span><span class="p">(</span><span class="kt">char</span> <span class="n">ch</span><span class="p">,</span> <span class="k">const</span> <span class="n">CString</span> <span class="o">&amp;</span><span class="n">str</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-462"></a>    <span class="n">CString</span> <span class="n">temp</span><span class="p">;</span>
<a name="CString.cpp-463"></a>    <span class="n">temp</span> <span class="o">=</span> <span class="n">ch</span><span class="p">;</span>
<a name="CString.cpp-464"></a>    <span class="n">temp</span> <span class="o">+=</span> <span class="n">str</span><span class="p">;</span>
<a name="CString.cpp-465"></a>    <span class="k">return</span> <span class="n">temp</span><span class="p">;</span>
<a name="CString.cpp-466"></a><span class="p">}</span>
<a name="CString.cpp-467"></a>
<a name="CString.cpp-468"></a><span class="n">CString</span> <span class="k">operator</span><span class="o">+</span><span class="p">(</span><span class="k">const</span> <span class="n">CString</span> <span class="o">&amp;</span><span class="n">str</span><span class="p">,</span> <span class="kt">char</span> <span class="n">ch</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-469"></a>    <span class="n">CString</span> <span class="n">temp</span><span class="p">(</span><span class="n">str</span><span class="p">);</span>
<a name="CString.cpp-470"></a>    <span class="n">temp</span> <span class="o">+=</span> <span class="n">ch</span><span class="p">;</span>
<a name="CString.cpp-471"></a>    <span class="k">return</span> <span class="n">temp</span><span class="p">;</span>
<a name="CString.cpp-472"></a><span class="p">}</span>
<a name="CString.cpp-473"></a>
<a name="CString.cpp-474"></a><span class="n">CString</span> <span class="k">operator</span><span class="o">+</span><span class="p">(</span><span class="k">const</span> <span class="n">CString</span> <span class="o">&amp;</span><span class="n">str1</span><span class="p">,</span> <span class="k">const</span> <span class="n">CString</span> <span class="o">&amp;</span><span class="n">str2</span><span class="p">)</span> <span class="p">{</span>
<a name="CString.cpp-475"></a>    <span class="n">CString</span> <span class="n">temp</span><span class="p">(</span><span class="n">str1</span><span class="p">);</span>
<a name="CString.cpp-476"></a>    <span class="n">temp</span> <span class="o">+=</span> <span class="n">str2</span><span class="p">;</span>
<a name="CString.cpp-477"></a>    <span class="k">return</span> <span class="n">temp</span><span class="p">;</span>
<a name="CString.cpp-478"></a><span class="p">}</span>
<a name="CString.cpp-479"></a>
<a name="CString.cpp-480"></a><span class="kt">int</span> <span class="n">main</span><span class="p">()</span> <span class="p">{</span>
<a name="CString.cpp-481"></a>    <span class="n">TestCString</span><span class="p">();</span>
<a name="CString.cpp-482"></a>    <span class="k">return</span> <span class="mi">0</span><span class="p">;</span>
<a name="CString.cpp-483"></a><span class="p">}</span>
</pre></div>
</td></tr></table>
    </div>
  


        </div>
        
      </div>
    </div>
  </div>
  
  <div data-module="source/set-changeset" data-hash="286c32a03bb586675f981e6fc28c3f6b037a0d61"></div>



  
    
    
    
  
  

  </div>

        
        
        
          
    
    
  
        
      </div>
    </div>
  </div>

      </div>
    </div>
  

  
    
      <footer id="footer" role="contentinfo" data-module="components/footer">
        <section class="footer-body">
          
  <ul>
  <li>
    <a class="support-ga" target="_blank"
       data-support-gaq-page="Blog"
       href="http://blog.bitbucket.org">Blog</a>
  </li>
  <li>
    <a class="support-ga" target="_blank"
       data-support-gaq-page="Home"
       href="/support">Support</a>
  </li>
  <li>
    <a class="support-ga"
       data-support-gaq-page="PlansPricing"
       href="/plans">Plans &amp; pricing</a>
  </li>
  <li>
    <a class="support-ga" target="_blank"
       data-support-gaq-page="DocumentationHome"
       href="//confluence.atlassian.com/display/BITBUCKET">Documentation</a>
  </li>
  <li>
    <a class="support-ga" target="_blank"
       data-support-gaq-page="DocumentationAPI"
       href="https://developer.atlassian.com/bitbucket/api/2/reference/">API</a>
  </li>
  <li>
    <a class="support-ga" target="_blank"
       data-support-gaq-page="SiteStatus"
       href="https://status.bitbucket.org/">Site status</a>
  </li>
  <li>
    <a class="support-ga" id="meta-info"
       data-support-gaq-page="MetaInfo"
       href="#">Version info</a>
  </li>
  <li>
    <a class="support-ga" target="_blank"
       data-support-gaq-page="EndUserAgreement"
       href="//www.atlassian.com/legal/customer-agreement?utm_source=bitbucket&amp;utm_medium=link&amp;utm_campaign=footer">Terms of service</a>
  </li>
  <li>
    <a class="support-ga" target="_blank"
       data-support-gaq-page="PrivacyPolicy"
       href="//www.atlassian.com/legal/privacy-policy">Privacy policy</a>
  </li>
</ul>
<div id="meta-info-content" style="display: none;">
  <ul>
    
      <li><a href="/account/user/braza501/" class="view-language-link">English</a></li>
    
    <li>
      <a class="support-ga" target="_blank"
         data-support-gaq-page="GitDocumentation"
         href="http://git-scm.com/">Git 2.7.4.1.g5468f9e</a>
    </li>
    <li>
      <a class="support-ga" target="_blank"
         data-support-gaq-page="HgDocumentation"
         href="https://www.mercurial-scm.org">Mercurial 3.9.2</a>
    </li>
    <li>
      <a class="support-ga" target="_blank"
         data-support-gaq-page="DjangoDocumentation"
         href="https://www.djangoproject.com/">Django 1.9.12</a>
    </li>
    <li>
      <a class="support-ga" target="_blank"
         data-support-gaq-page="PythonDocumentation"
         href="http://www.python.org/">Python 2.7.3</a>
    </li>
    <li>
      <a class="support-ga" target="_blank"
         data-support-gaq-page="DeployedVersion"
         data-media-hex="0fb63cacd50e"
         href="#">0fb63cacd50e / 0fb63cacd50e @ app-124</a>
    </li>
    <li>
      <a class="support-ga" target="_blank"
         data-support-gaq-page="StorageRegion"
         href="#">Region production</a>
    </li>
  </ul>
</div>
<ul class="atlassian-links">
  <li>
    <a id="atlassian-jira-link" target="_blank"
       title="Track everything – bugs, tasks, deadlines, code – and pull reports to stay informed."
       href="https://www.atlassian.com/software/jira/bitbucket-integration?utm_source=bitbucket&amp;utm_medium=link&amp;utm_campaign=bitbucket_footer">JIRA Software</a>
  </li>
  <li>
    <a id="atlassian-confluence-link" target="_blank"
       title="Content Creation, Collaboration & Knowledge Sharing for Teams."
       href="http://www.atlassian.com/software/confluence/overview/team-collaboration-software?utm_source=bitbucket&amp;utm_medium=link&amp;utm_campaign=bitbucket_footer">Confluence</a>
  </li>
  <li>
    <a id="atlassian-bamboo-link" target="_blank"
       title="Continuous integration and deployment, release management."
       href="http://www.atlassian.com/software/bamboo?utm_source=bitbucket&amp;utm_medium=link&amp;utm_campaign=bitbucket_footer">Bamboo</a>
  </li>
  <li>
    <a id="atlassian-sourcetree-link" target="_blank"
       title="A free Git and Mercurial desktop client for Mac or Windows."
       href="http://www.sourcetreeapp.com/?utm_source=bitbucket&amp;utm_medium=link&amp;utm_campaign=bitbucket_footer">SourceTree</a>
  </li>
  <li>
    <a id="atlassian-hipchat-link" target="_blank"
       title="Group chat and IM built for teams."
       href="http://www.hipchat.com/?utm_source=bitbucket&amp;utm_medium=link&amp;utm_campaign=bitbucket_footer">HipChat</a>
  </li>
</ul>
<div id="footer-logo">
  <a target="_blank"
     title="Bitbucket is developed by Atlassian in Austin, San Francisco, and Sydney."
     href="http://www.atlassian.com?utm_source=bitbucket&amp;utm_medium=logo&amp;utm_campaign=bitbucket_footer">Atlassian</a>
</div>

        </section>
      </footer>
    
  
</div>



  

<div data-module="components/mentions/index">
  
    
    
  
  
    
    
  
  
    
    
  
</div>
<div data-module="components/typeahead/emoji/index">
  
    
    
  
</div>

<div data-module="components/repo-typeahead/index">
  
    
    
  
</div>

    
    
  

    
    
  

    
    
  

    
    
  


  


    
    
  

    
    
  


  
    
    
  
  
    
    
  
  
    
    
  
  
    
    
  
  
    
    
  
  
    
    
  
  
    
    
  


  
  
  <aui-inline-dialog
    id="help-menu-dialog"
    data-aui-alignment="bottom right"

    
    data-aui-alignment-static="true"
    data-module="header/help-menu"
    responds-to="toggle"
    aria-hidden="true">

  <div id="help-menu-section">
    <h1 class="help-menu-heading">Help</h1>

    <form id="help-menu-search-form" class="aui" target="_blank" method="get"
        action="https://support.atlassian.com/customer/search">
      <span id="help-menu-search-icon" class="aui-icon aui-icon-large aui-iconfont-search"></span>
      <input id="help-menu-search-form-input" name="q" class="text" type="text" placeholder="Ask a question">
    </form>

    <ul id="help-menu-links">
      <li>
        <a class="support-ga" data-support-gaq-page="DocumentationHome"
            href="https://confluence.atlassian.com/x/bgozDQ" target="_blank">
          Online help
        </a>
      </li>
      <li>
        <a class="support-ga" data-support-gaq-page="GitTutorials"
            href="https://www.atlassian.com/git?utm_source=bitbucket&amp;utm_medium=link&amp;utm_campaign=help_dropdown&amp;utm_content=learn_git"
            target="_blank">
          Learn Git
        </a>
      </li>
      <li>
        <a id="keyboard-shortcuts-link"
           href="#">Keyboard shortcuts</a>
      </li>
      <li>
        <a class="support-ga" data-support-gaq-page="DocumentationTutorials"
            href="https://confluence.atlassian.com/x/Q4sFLQ" target="_blank">
          Bitbucket tutorials
        </a>
      </li>
      <li>
        <a class="support-ga" data-support-gaq-page="SiteStatus"
            href="https://status.bitbucket.org/" target="_blank">
          Site status
        </a>
      </li>
      <li>
        <a class="support-ga" data-support-gaq-page="Home" href="/support">
          Support
        </a>
      </li>
    </ul>
  </div>
</aui-inline-dialog>
  


  <div class="omnibar" data-module="components/omnibar/index">
    <form class="omnibar-form aui"></form>
  </div>
  
    
    
  
  
    
    
  
  
    
    
  
  
    
    
  





  

  <div class="_mustache-templates">
    
      <script id="repo-dropdown-template" type="text/html">
        


[[#hasViewed]]
  <div class="aui-dropdown2-section">
    <strong class="viewed">Recently viewed</strong>
    <ul>
      [[#viewed]]
        <li class="[[#is_private]]private[[/is_private]][[^is_private]]public[[/is_private]] repository">
          <a href="[[url]]" title="[[owner]][[#project]] / [[project]][[/project]] / [[name]]" class="aui-icon-container recently-viewed repo-link"
              data-ct="bitbucket.header.repository.dropdown.repository.click" data-ct-data='{"type": "recently-viewed"}'>
            <span class="aui-avatar aui-avatar-xsmall aui-avatar-project">
              <span class="aui-avatar-inner">
                <img src="[[{avatar}]]">
              </span>
            </span>
            <span class="dropdown-path">
              <span class="dropdown-path-part">[[#project]][[project]][[/project]][[^project]][[owner]][[/project]]</span>
              <span class="dropdown-path-separator">/</span>
              <span class="dropdown-path-part dropdown-path-part--primary">[[name]]</span>
            </span>
          </a>
        </li>
      [[/viewed]]
    </ul>
  </div>
[[/hasViewed]]
[[#hasUpdated]]
  <div class="aui-dropdown2-section">
    <strong class="updated">Recently updated</strong>
    <ul>
      [[#updated]]
      <li class="[[#is_private]]private[[/is_private]][[^is_private]]public[[/is_private]] repository">
        <a href="[[url]]" title="[[owner]][[#project]] / [[project]][[/project]] / [[name]]" class="aui-icon-container recently-updated repo-link"
           data-ct="bitbucket.header.repository.dropdown.repository.click" data-ct-data='{"type": "recently-updated"}'>
          <span class="aui-avatar aui-avatar-xsmall aui-avatar-project">
            <span class="aui-avatar-inner">
              <img src="[[{avatar}]]">
            </span>
          </span>
          <span class="dropdown-path">
            <span class="dropdown-path-part">[[#project]][[project]][[/project]][[^project]][[owner]][[/project]]</span>
            <span class="dropdown-path-separator">/</span>
            <span class="dropdown-path-part dropdown-path-part--primary">[[name]]</span>
          </span>
        </a>
      </li>
      [[/updated]]
    </ul>
  </div>
[[/hasUpdated]]

      </script>
    
      <script id="snippet-dropdown-template" type="text/html">
        <div class="aui-dropdown2-section">
  <strong>[[sectionTitle]]</strong>
  <ul class="aui-list-truncate">
    [[#snippets]]
      <li>
        <a href="[[links.html.href]]">[[owner.display_name]] / [[name]]</a>
      </li>
    [[/snippets]]
  </ul>
</div>

      </script>
    
      <script id="team-dropdown-template" type="text/html">
        

<div class="aui-dropdown2-section primary">
  <ul class="aui-list-truncate">
    [[#teams]]
      <li>
        <a href="/[[username]]/" class="aui-icon-container team-link" data-ct="bitbucket.header.team.dropdown.team.click">
          <span class="aui-avatar aui-avatar-xsmall">
            <span class="aui-avatar-inner">
              <img src="[[avatar]]">
            </span>
          </span>
          [[display_name]]
        </a>
      </li>
    [[/teams]]
  </ul>
</div>

<div class="aui-dropdown2-section">
  <ul>
    <li>
      <a href="/account/create-team/?team_source=header"
          id="create-team-link" data-ct="bitbucket.header.team.dropdown.create.click" data-ct-data='{"empty": false}'>Create team</a>
    </li>
  </ul>
</div>

      </script>
    
      <script id="projects-dropdown-template" type="text/html">
        

[[#hasProjects]]
  <div class="aui-dropdown2-section">
    <strong>Recently viewed</strong>
    <ul class="aui-list-truncate">
      [[#projects]]
        <li>
          <a href="/account/user/[[owner.username]]/projects/[[key]]" class="aui-icon-container project-link">
            <span class="aui-avatar aui-avatar-xsmall aui-avatar-project">
              <span class="aui-avatar-inner">
                <img src="[[links.avatar.href]]">
              </span>
            </span>
            [[name]]
          </a>
        </li>
      [[/projects]]
    </ul>
  </div>
[[/hasProjects]]

[[#isAdmin]]
  <div class="aui-dropdown2-section">
    <ul>
      <li>
        <a href="/account/projects/create"
            id="create-project-link">Create project</a>
      </li>
    </ul>
  </div>
[[/isAdmin]]

      </script>
    
      <script id="branch-checkout-template" type="text/html">
        

<div id="checkout-branch-contents">
  <div class="command-line">
    <p>
      Check out this branch on your local machine to begin working on it.
    </p>
    <input type="text" class="checkout-command" readonly="readonly"
        
           value="git fetch && git checkout [[branchName]]"
        
        >
  </div>
  
    <div class="sourcetree-callout clone-in-sourcetree"
  data-module="components/clone/clone-in-sourcetree"
  data-https-url="https://braza501@bitbucket.org/braza501/c-course-hws.git"
  data-ssh-url="ssh://git@bitbucket.org/braza501/c-course-hws.git">

  <div>
    <button class="aui-button aui-button-primary">
      
        Check out in SourceTree
      
    </button>
  </div>

  <p class="windows-text">
    
      <a href="http://www.sourcetreeapp.com/?utm_source=internal&amp;utm_medium=link&amp;utm_campaign=clone_repo_win" target="_blank">Atlassian SourceTree</a>
      is a free Git and Mercurial client for Windows.
    
  </p>
  <p class="mac-text">
    
      <a href="http://www.sourcetreeapp.com/?utm_source=internal&amp;utm_medium=link&amp;utm_campaign=clone_repo_mac" target="_blank">Atlassian SourceTree</a>
      is a free Git and Mercurial client for Mac.
    
  </p>
</div>
  
</div>

      </script>
    
      <script id="branch-dialog-template" type="text/html">
        

<div class="tabbed-filter-widget branch-dialog">
  <div class="tabbed-filter">
    <input placeholder="Filter branches" class="filter-box" autosave="branch-dropdown-21948411" type="text">
    [[^ignoreTags]]
      <div class="aui-tabs horizontal-tabs aui-tabs-disabled filter-tabs">
        <ul class="tabs-menu">
          <li class="menu-item active-tab"><a href="#branches">Branches</a></li>
          <li class="menu-item"><a href="#tags">Tags</a></li>
        </ul>
      </div>
    [[/ignoreTags]]
  </div>
  
    <div class="tab-pane active-pane" id="branches" data-filter-placeholder="Filter branches">
      <ol class="filter-list">
        <li class="empty-msg">No matching branches</li>
        [[#branches]]
          
            [[#hasMultipleHeads]]
              [[#heads]]
                <li class="comprev filter-item">
                  <a class="pjax-trigger filter-item-link" href="/braza501/c-course-hws/src/[[changeset]]/HW7/CString.cpp?at=[[safeName]]"
                     title="[[name]]">
                    [[name]] ([[shortChangeset]])
                  </a>
                </li>
              [[/heads]]
            [[/hasMultipleHeads]]
            [[^hasMultipleHeads]]
              <li class="comprev filter-item">
                <a class="pjax-trigger filter-item-link" href="/braza501/c-course-hws/src/[[changeset]]/HW7/CString.cpp?at=[[safeName]]" title="[[name]]">
                  [[name]]
                </a>
              </li>
            [[/hasMultipleHeads]]
          
        [[/branches]]
      </ol>
    </div>
    <div class="tab-pane" id="tags" data-filter-placeholder="Filter tags">
      <ol class="filter-list">
        <li class="empty-msg">No matching tags</li>
        [[#tags]]
          <li class="comprev filter-item">
            <a class="pjax-trigger filter-item-link" href="/braza501/c-course-hws/src/[[changeset]]/HW7/CString.cpp?at=[[safeName]]" title="[[name]]">
              [[name]]
            </a>
          </li>
        [[/tags]]
      </ol>
    </div>
  
</div>

      </script>
    
      <script id="image-upload-template" type="text/html">
        

<form id="upload-image" method="POST"
    
      action="/xhr/braza501/c-course-hws/image-upload/"
    >
  <input type='hidden' name='csrfmiddlewaretoken' value='6DZ85Wu7qDlH5bC1WNaZiGOCwkDAWvAq' />

  <div class="drop-target">
    <p class="centered">Drag image here</p>
  </div>

  
  <div>
    <button class="aui-button click-target">Select an image</button>
    <input name="file" type="file" class="hidden file-target"
           accept="image/jpeg, image/gif, image/png" />
    <input type="submit" class="hidden">
  </div>
</form>


      </script>
    
      <script id="mention-result" type="text/html">
        
<span class="mention-result">
  <span class="aui-avatar aui-avatar-small mention-result--avatar">
    <span class="aui-avatar-inner">
      <img src="[[avatar_url]]">
    </span>
  </span>
  [[#display_name]]
    <span class="display-name mention-result--display-name">[[&display_name]]</span> <small class="username mention-result--username">[[&username]]</small>
  [[/display_name]]
  [[^display_name]]
    <span class="username mention-result--username">[[&username]]</span>
  [[/display_name]]
  [[#is_teammate]][[^is_team]]
    <span class="aui-lozenge aui-lozenge-complete aui-lozenge-subtle mention-result--lozenge">teammate</span>
  [[/is_team]][[/is_teammate]]
</span>
      </script>
    
      <script id="mention-call-to-action" type="text/html">
        
[[^query]]
<li class="bb-typeahead-item">Begin typing to search for a user</li>
[[/query]]
[[#query]]
<li class="bb-typeahead-item">Continue typing to search for a user</li>
[[/query]]

      </script>
    
      <script id="mention-no-results" type="text/html">
        
[[^searching]]
<li class="bb-typeahead-item">Found no matching users for <em>[[query]]</em>.</li>
[[/searching]]
[[#searching]]
<li class="bb-typeahead-item bb-typeahead-searching">Searching for <em>[[query]]</em>.</li>
[[/searching]]

      </script>
    
      <script id="emoji-result" type="text/html">
        
<div class="aui-avatar aui-avatar-small">
  <div class="aui-avatar-inner">
    <img src="[[src]]">
  </div>
</div>
<span class="name">[[&name]]</span>

      </script>
    
      <script id="repo-typeahead-result" type="text/html">
        <span class="aui-avatar aui-avatar-project aui-avatar-xsmall">
  <span class="aui-avatar-inner">
    <img src="[[avatar]]">
  </span>
</span>
<span class="owner">[[&owner]]</span>/<span class="slug">[[&slug]]</span>

      </script>
    
      <script id="share-form-template" type="text/html">
        

<div class="error aui-message hidden">
  <span class="aui-icon icon-error"></span>
  <div class="message"></div>
</div>
<form class="aui">
  <table class="widget bb-list aui">
    <thead>
    <tr class="assistive">
      <th class="user">User</th>
      <th class="role">Role</th>
      <th class="actions">Actions</th>
    </tr>
    </thead>
    <tbody>
      <tr class="form">
        <td colspan="2">
          <input type="text" class="text bb-user-typeahead user-or-email"
                 placeholder="Username or email address"
                 autocomplete="off"
                 data-bb-typeahead-focus="false"
                 [[#disabled]]disabled[[/disabled]]>
        </td>
        <td class="actions">
          <button type="submit" class="aui-button aui-button-light" disabled>Add</button>
        </td>
      </tr>
    </tbody>
  </table>
</form>

      </script>
    
      <script id="share-detail-template" type="text/html">
        

[[#username]]
<td class="user
    [[#hasCustomGroups]]custom-groups[[/hasCustomGroups]]"
    [[#error]]data-error="[[error]]"[[/error]]>
  <div title="[[displayName]]">
    <a href="/[[username]]/" class="user">
      <span class="aui-avatar aui-avatar-xsmall">
        <span class="aui-avatar-inner">
          <img src="[[avatar]]">
        </span>
      </span>
      <span>[[displayName]]</span>
    </a>
  </div>
</td>
[[/username]]
[[^username]]
<td class="email
    [[#hasCustomGroups]]custom-groups[[/hasCustomGroups]]"
    [[#error]]data-error="[[error]]"[[/error]]>
  <div title="[[email]]">
    <span class="aui-icon aui-icon-small aui-iconfont-email"></span>
    [[email]]
  </div>
</td>
[[/username]]
<td class="role
    [[#hasCustomGroups]]custom-groups[[/hasCustomGroups]]">
  <div>
    [[#group]]
      [[#hasCustomGroups]]
        <select class="group [[#noGroupChoices]]hidden[[/noGroupChoices]]">
          [[#groups]]
            <option value="[[slug]]"
                [[#isSelected]]selected[[/isSelected]]>
              [[name]]
            </option>
          [[/groups]]
        </select>
      [[/hasCustomGroups]]
      [[^hasCustomGroups]]
      <label>
        <input type="checkbox" class="admin"
            [[#isAdmin]]checked[[/isAdmin]]>
        Administrator
      </label>
      [[/hasCustomGroups]]
    [[/group]]
    [[^group]]
      <ul>
        <li class="permission aui-lozenge aui-lozenge-complete
            [[^read]]aui-lozenge-subtle[[/read]]"
            data-permission="read">
          read
        </li>
        <li class="permission aui-lozenge aui-lozenge-complete
            [[^write]]aui-lozenge-subtle[[/write]]"
            data-permission="write">
          write
        </li>
        <li class="permission aui-lozenge aui-lozenge-complete
            [[^admin]]aui-lozenge-subtle[[/admin]]"
            data-permission="admin">
          admin
        </li>
      </ul>
    [[/group]]
  </div>
</td>
<td class="actions
    [[#hasCustomGroups]]custom-groups[[/hasCustomGroups]]">
  <div>
    <a href="#" class="delete">
      <span class="aui-icon aui-icon-small aui-iconfont-remove">Delete</span>
    </a>
  </div>
</td>

      </script>
    
      <script id="share-team-template" type="text/html">
        

<div class="clearfix">
  <span class="team-avatar-container">
    <span class="aui-avatar aui-avatar-medium">
      <span class="aui-avatar-inner">
        <img src="[[avatar]]">
      </span>
    </span>
  </span>
  <span class="team-name-container">
    [[display_name]]
  </span>
</div>
<p class="helptext">
  
    Existing users are granted access to this team immediately.
    New users will be sent an invitation.
  
</p>
<div class="share-form"></div>

      </script>
    
      <script id="scope-list-template" type="text/html">
        <ul class="scope-list">
  [[#scopes]]
    <li class="scope-list--item">
      <span class="scope-list--icon aui-icon aui-icon-small [[icon]]"></span>
      <span class="scope-list--description">[[description]]</span>
    </li>
  [[/scopes]]
</ul>

      </script>
    
      <script id="source-changeset" type="text/html">
        

<a href="/braza501/c-course-hws/src/[[raw_node]]/[[path]]?at=master"
    class="[[#selected]]highlight[[/selected]]"
    data-hash="[[node]]">
  [[#author.username]]
    <span class="aui-avatar aui-avatar-xsmall">
      <span class="aui-avatar-inner">
        <img src="[[author.avatar]]">
      </span>
    </span>
    <span class="author" title="[[raw_author]]">[[author.display_name]]</span>
  [[/author.username]]
  [[^author.username]]
    <span class="aui-avatar aui-avatar-xsmall">
      <span class="aui-avatar-inner">
        <img src="https://d301sr5gafysq2.cloudfront.net/0fb63cacd50e/img/default_avatar/user_blue.svg">
      </span>
    </span>
    <span class="author unmapped" title="[[raw_author]]">[[author]]</span>
  [[/author.username]]
  <time datetime="[[utctimestamp]]" data-title="true">[[utctimestamp]]</time>
  <span class="message">[[message]]</span>
</a>

      </script>
    
      <script id="embed-template" type="text/html">
        

<form class="aui inline-dialog-embed-dialog">
  <label for="embed-code-[[dialogId]]">Embed this source in another page:</label>
  <input type="text" readonly="true" value="&lt;script src=&quot;[[url]]&quot;&gt;&lt;/script&gt;" id="embed-code-[[dialogId]]" class="embed-code">
</form>

      </script>
    
      <script id="edit-form-template" type="text/html">
        


<form class="bb-content-container online-edit-form aui"
      data-repository="[[owner]]/[[slug]]"
      data-destination-repository="[[destinationOwner]]/[[destinationSlug]]"
      data-local-id="[[localID]]"
      [[#isWriter]]data-is-writer="true"[[/isWriter]]
      [[#hasPushAccess]]data-has-push-access="true"[[/hasPushAccess]]
      [[#isPullRequest]]data-is-pull-request="true"[[/isPullRequest]]
      [[#hideCreatePullRequest]]data-hide-create-pull-request="true"[[/hideCreatePullRequest]]
      data-hash="[[hash]]"
      data-branch="[[branch]]"
      data-path="[[path]]"
      data-is-create="[[isCreate]]"
      data-preview-url="/xhr/[[owner]]/[[slug]]/preview/[[hash]]/[[encodedPath]]"
      data-preview-error="We had trouble generating your preview."
      data-unsaved-changes-error="Your changes will be lost. Are you sure you want to leave?">
  <div class="bb-content-container-header">
    <div class="bb-content-container-header-primary">
      <h2 class="bb-content-container-heading">
        [[#isCreate]]
          [[#branch]]
            
              Creating <span class="edit-path">[[path]]</span> on branch: <strong>[[branch]]</strong>
            
          [[/branch]]
          [[^branch]]
            [[#path]]
              
                Creating <span class="edit-path">[[path]]</span>
              
            [[/path]]
            [[^path]]
              
                Creating <span class="edit-path">unnamed file</span>
              
            [[/path]]
          [[/branch]]
        [[/isCreate]]
        [[^isCreate]]
          
            Editing <span class="edit-path">[[path]]</span> on branch: <strong>[[branch]]</strong>
          
        [[/isCreate]]
      </h2>
    </div>
    <div class="bb-content-container-header-secondary">
      <div class="hunk-nav aui-buttons">
        <button class="prev-hunk-button aui-button aui-button-light"
            disabled="disabled" aria-disabled="true"
            title="Previous change">
          <span class="aui-icon aui-icon-small aui-iconfont-up">Previous change</span>
        </button>
        <button class="next-hunk-button aui-button aui-button-light"
            disabled="disabled" aria-disabled="true"
            title="Next change">
          <span class="aui-icon aui-icon-small aui-iconfont-down">Next change</span>
        </button>
      </div>
    </div>
  </div>
  <div class="bb-content-container-body has-header has-footer file-editor">
    <textarea id="id_source"></textarea>
  </div>
  <div class="preview-pane"></div>
  <div class="bb-content-container-footer">
    <div class="bb-content-container-footer-primary">
      <div id="syntax-mode" class="bb-content-container-item field">
        <label for="id_syntax-mode" class="online-edit-form--label">Syntax mode:</label>
        <select id="id_syntax-mode">
          [[#syntaxes]]
            <option value="[[#mime]][[mime]][[/mime]][[^mime]][[mode]][[/mime]]">[[name]]</option>
          [[/syntaxes]]
        </select>
      </div>
      <div id="indent-mode" class="bb-content-container-item field">
        <label for="id_indent-mode" class="online-edit-form--label">Indent mode:</label>
        <select id="id_indent-mode">
          <option value="tabs">Tabs</option>
          <option value="spaces">Spaces</option>
        </select>
      </div>
      <div id="indent-size" class="bb-content-container-item field">
        <label for="id_indent-size" class="online-edit-form--label">Indent size:</label>
        <select id="id_indent-size">
          <option value="2">2</option>
          <option value="4">4</option>
          <option value="8">8</option>
        </select>
      </div>
      <div id="wrap-mode" class="bb-content-container-item field">
        <label for="id_wrap-mode" class="online-edit-form--label">Line wrap:</label>
        <select id="id_wrap-mode">
          <option value="">Off</option>
          <option value="soft">On</option>
        </select>
      </div>
    </div>
    <div class="bb-content-container-footer-secondary">
      [[^isCreate]]
        <button class="preview-button aui-button aui-button-light"
                disabled="disabled" aria-disabled="true"
                data-preview-label="View diff"
                data-edit-label="Edit file">View diff</button>
      [[/isCreate]]
      <button class="save-button aui-button aui-button-primary"
              disabled="disabled" aria-disabled="true">Commit</button>
      [[^isCreate]]
        <a class="aui-button aui-button-link cancel-link" href="#">Cancel</a>
      [[/isCreate]]
    </div>
  </div>
</form>

      </script>
    
      <script id="commit-form-template" type="text/html">
        

<form class="aui commit-form"
      data-title="Commit changes"
      [[#isDelete]]
        data-default-message="[[filename]] deleted online with Bitbucket"
      [[/isDelete]]
      [[#isCreate]]
        data-default-message="[[filename]] created online with Bitbucket"
      [[/isCreate]]
      [[^isDelete]]
        [[^isCreate]]
          data-default-message="[[filename]] edited online with Bitbucket"
        [[/isCreate]]
      [[/isDelete]]
      data-fork-error="We had trouble creating your fork."
      data-commit-error="We had trouble committing your changes."
      data-pull-request-error="We had trouble creating your pull request."
      data-update-error="We had trouble updating your pull request."
      data-branch-conflict-error="A branch with that name already exists."
      data-forking-message="Forking repository"
      data-committing-message="Committing changes"
      data-merging-message="Branching and merging changes"
      data-creating-pr-message="Creating pull request"
      data-updating-pr-message="Updating pull request"
      data-cta-label="Commit"
      data-cancel-label="Cancel">
  [[#isDelete]]
    <div class="aui-message info">
      <span class="aui-icon icon-info"></span>
      <span class="message">
        
          Committing this change will delete [[filename]] from your repository.
        
      </span>
    </div>
  [[/isDelete]]
  <div class="aui-message error hidden">
    <span class="aui-icon icon-error"></span>
    <span class="message"></span>
  </div>
  [[^isWriter]]
    <div class="aui-message info">
      <span class="aui-icon icon-info"></span>
      <p class="title">
        
          You don't have write access to this repository.
        
      </p>
      <span class="message">
        
          We'll create a fork for your changes and submit a
          pull request back to this repository.
        
      </span>
    </div>
  [[/isWriter]]
  [[#isRename]]
    <div class="field-group">
      <label for="id_path">New path</label>
      <input type="text" id="id_path" class="text" value="[[path]]"/>
    </div>
  [[/isRename]]
  <div class="field-group">
    <label for="id_message">Commit message</label>
    <textarea id="id_message" class="long-field textarea"></textarea>
  </div>
  [[^isPullRequest]]
    [[#isWriter]]
      <fieldset class="group">
        <div class="checkbox">
          [[#hasPushAccess]]
            [[^hideCreatePullRequest]]
              <input id="id_create-pullrequest" class="checkbox" type="checkbox">
              <label for="id_create-pullrequest">Create a pull request for this change</label>
            [[/hideCreatePullRequest]]
          [[/hasPushAccess]]
          [[^hasPushAccess]]
            <input id="id_create-pullrequest" class="checkbox" type="checkbox" checked="checked" aria-disabled="true" disabled="true">
            <label for="id_create-pullrequest" title="Branch restrictions do not allow you to update this branch.">Create a pull request for this change</label>
          [[/hasPushAccess]]
        </div>
      </fieldset>
      <div id="pr-fields">
        <div id="branch-name-group" class="field-group">
          <label for="id_branch-name">Branch name</label>
          <input type="text" id="id_branch-name" class="text long-field">
        </div>
        

<div class="field-group" id="id_reviewers_group">
  <label for="reviewers">Reviewers</label>

  
  <input id="reviewers" name="reviewers" type="hidden"
          value=""
          data-mention-url="/xhr/mentions/repositories/:dest_username/:dest_slug"
          data-reviewers="[]"
          data-suggested="[]"
          data-locked="[]">

  <div class="error"></div>
  <div class="suggested-reviewers"></div>

</div>

      </div>
    [[/isWriter]]
  [[/isPullRequest]]
  <button type="submit" id="id_submit">Commit</button>
</form>

      </script>
    
      <script id="merge-message-template" type="text/html">
        Merged [[hash]] into [[branch]]

[[message]]

      </script>
    
      <script id="commit-merge-error-template" type="text/html">
        



  We had trouble merging your changes. We stored them on the <strong>[[branch]]</strong> branch, so feel free to
  <a href="/[[owner]]/[[slug]]/full-commit/[[hash]]/[[path]]?at=[[encodedBranch]]">view them</a> or
  <a href="#" class="create-pull-request-link">create a pull request</a>.


      </script>
    
      <script id="selected-reviewer-template" type="text/html">
        <div class="aui-avatar aui-avatar-xsmall">
  <div class="aui-avatar-inner">
    <img src="[[avatar_url]]">
  </div>
</div>
[[display_name]]

      </script>
    
      <script id="suggested-reviewer-template" type="text/html">
        <button class="aui-button aui-button-link" type="button" tabindex="-1">[[display_name]]</button>

      </script>
    
      <script id="suggested-reviewers-template" type="text/html">
        

<span class="suggested-reviewer-list-label">Recent:</span>
<ul class="suggested-reviewer-list unstyled-list"></ul>

      </script>
    
      <script id="omnibar-form-template" type="text/html">
        <div class="omnibar-input-container">
  <input class="omnibar-input" type="text" [[#placeholder]]placeholder="[[placeholder]]"[[/placeholder]]>
</div>
<ul class="omnibar-result-group-list"></ul>

      </script>
    
      <script id="omnibar-blank-slate-template" type="text/html">
        

<div class="omnibar-blank-slate">No results found</div>

      </script>
    
      <script id="omnibar-result-group-list-item-template" type="text/html">
        <div class="omnibar-result-group-header clearfix">
  <h2 class="omnibar-result-group-label" title="[[label]]">[[label]]</h2>
  <span class="omnibar-result-group-context" title="[[context]]">[[context]]</span>
</div>
<ul class="omnibar-result-list unstyled-list"></ul>

      </script>
    
      <script id="omnibar-result-list-item-template" type="text/html">
        [[#url]]
  <a href="[[&url]]" class="omnibar-result-label">[[&label]]</a>
[[/url]]
[[^url]]
  <span class="omnibar-result-label">[[&label]]</span>
[[/url]]
[[#context]]
  <span class="omnibar-result-context">[[context]]</span>
[[/context]]

      </script>
    
  </div>




  
  


<script src="https://d301sr5gafysq2.cloudfront.net/0fb63cacd50e/jsi18n/en/djangojs.js"></script>
<script src="https://d301sr5gafysq2.cloudfront.net/0fb63cacd50e/dist/webpack/vendor.js"></script>
<script src="https://d301sr5gafysq2.cloudfront.net/0fb63cacd50e/dist/webpack/app.js"></script>


<script async src="https://www.google-analytics.com/analytics.js"></script>

<script type="text/javascript">window.NREUM||(NREUM={});NREUM.info={"beacon":"bam.nr-data.net","queueTime":0,"licenseKey":"a2cef8c3d3","agent":"","transactionName":"Z11RZxdWW0cEVkYLDV4XdUYLVEFdClsdAAtEWkZQDlJBGgRFQhFMQl1DXFcZQ10AQkFYBFlUVlEXWEJHAA==","applicationID":"1841284","errorBeacon":"bam.nr-data.net","applicationTime":238}</script>
</body>
</html>