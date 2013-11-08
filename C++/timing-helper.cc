<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="de" lang="de">
<head>
  <meta http-equiv="content-type" content="text/html;charset=UTF-8" />
  <meta http-equiv="generator" content="WebSVN 2.3.3" /> <!-- leave this for stats -->
  <link rel="shortcut icon" type="image/x-icon" href="/websvn/templates/calm/images/favicon.ico" />
  <link type="text/css" href="/websvn/templates/calm/styles.css" rel="stylesheet" media="screen" />
  <link rel='alternate' type='application/rss+xml' title='WebSVN RSS' href='/wsvn/student-theses/anton-stepan/EntityUnification/src/timing-helper.cc?op=rss&amp;' />
  <!--[if gte IE 5.5000]>
  <script type="text/javascript" src="/websvn/templates/calm/png.js"></script>
  <style type="text/css" media="screen">
  tbody tr td { padding:1px 0 }
  #wrap h2 { padding:10px 5px 0 5px; margin-bottom:-8px }
  </style>
  <![endif]-->
  <title>
       WebSVN
          - student-theses
               - Revision 15727
            - /anton-stepan/EntityUnification/src/timing-helper.cc
  </title>
  <script type="text/javascript">
  //<![CDATA[
       function getPath()
       {
         return '/websvn';
       }
       
       function checkCB(chBox)
       {
          count = 0
          first = null
          f = chBox.form
          for (i = 0 ; i < f.elements.length ; i++)
          if (f.elements[i].type == 'checkbox' && f.elements[i].checked)
          {
             if (first == null && f.elements[i] != chBox)
                first = f.elements[i]
             count += 1
          }
          
          if (count > 2) 
          {
             first.checked = false
             count -= 1
          }
       }
  //]]>
  </script>
</head>
<body id="file">
<div id="container">
	<div id="select">
		<form method="get" action="" id="project"><input type="hidden" name="op" value="rep" /><select name="repname" onchange="javascript:this.form.submit();"><option value="student-theses" selected="selected">student-theses</option><option value="lucene-sem">lucene-sem</option><option value="papers">papers</option><option value="reading">reading</option><option value="student-projects">student-projects</option><option value="wikilists">wikilists</option></select><noscript><input type="submit" value="Los" /></noscript></form>
		<form method="get" action="" id="template"><select name="template" onchange="javascript:this.form.submit();"><option value="BlueGrey">BlueGrey</option><option value="calm" selected="selected">calm</option><option value="Elegant">Elegant</option></select><noscript><input type="submit" value="Los" /></noscript></form>
		<form method="get" action="" id="language"><select name="language" onchange="javascript:this.form.submit();"><option value="ca">Catal&agrave;-Valenci&agrave; - Catalan</option><option value="zh-CN">&#20013;&#25991; - Chinese (Simplified)</option><option value="zh-TW">&#20013;&#25991; - Chinese (Traditional)</option><option value="cs">&#268;esky - Czech</option><option value="da">Dansk - Danish</option><option value="nl">Nederlands - Dutch</option><option value="en">English - English</option><option value="fi">Suomi - Finnish</option><option value="fr">Fran&ccedil;ais - French</option><option value="de" selected="selected">Deutsch - German</option><option value="he-IL">&#1506;&#1489;&#1512;&#1497;&#1514; - Hebrew</option><option value="hin">&#2361;&#2367;&#2306;&#2342;&#2368; - Hindi</option><option value="hu">Magyar - Hungarian</option><option value="id">Bahasa Indonesia - Indonesian</option><option value="it">Italiano - Italian</option><option value="ja">&#26085;&#26412;&#35486; - Japanese</option><option value="ko">&#54620;&#44397;&#50612; - Korean</option><option value="mk">&#1052;&#1072;&#1082;&#1077;&#1076;&#1086;&#1085;&#1089;&#1082;&#1080; - Macedonian</option><option value="mr">&#2350;&#2352;&#2366;&#2336;&#2368; - Marathi</option><option value="no">Norsk - Norwegian</option><option value="pl">Polski - Polish</option><option value="pt">Portugu&ecirc;s - Portuguese</option><option value="pt-BR">Portugu&ecirc;s - Portuguese (Brazil)</option><option value="ru">&#1056;&#1091;&#1089;&#1089;&#1082;&#1080;&#1081; - Russian</option><option value="sk">Sloven&#269;ina - Slovak</option><option value="sl">Sloven&#353;&#269;ina - Slovenian</option><option value="es">Espa&ntilde;ol - Spanish</option><option value="sv">Svenska - Swedish</option><option value="tr">T&uuml;rk&ccedil;e - Turkish</option><option value="uk">&#1059;&#1082;&#1088;&#1072;&#1111;&#1085;&#1089;&#1100;&#1082;&#1072; - Ukrainian</option><option value="uz">O&euml;zbekcha - Uzbek</option></select><noscript><input type="submit" value="Los" /></noscript></form>
	</div>
	<h1><a href="/wsvn/?" title="Subversion-Projekte">Subversion-Projekte</a>
		<span><a href="/wsvn/student-theses?">student-theses</a></span>
	</h1>
  <h2 id="pathlinks"><a href="/wsvn/student-theses/?" class="root"><span>(root)</span></a>/<a href="/wsvn/student-theses/anton-stepan/?#ab4c8450d8f2c07f20fe7905882b13138">anton-stepan</a>/<a href="/wsvn/student-theses/anton-stepan/EntityUnification/?#ab0902420c90499f27a0edfebd432bfce">EntityUnification</a>/<a href="/wsvn/student-theses/anton-stepan/EntityUnification/src/?#a70bcc557437b928b20779497f6332a1c">src</a>/<span class="file">timing-helper.cc</span> - Revision 15727</h2>
  <div id="revjump"><form method="get" action="" id="revision">Revision <input type="text" size="5" name="rev" placeholder="HEAD" /><span class="submit"><input type="submit" value="Los" /></span></form></div>
  <p>
    <span class="prev"><a href="/wsvn/student-theses/anton-stepan/EntityUnification/src/timing-helper.cc?rev=15691">Revision 15691</a></span> &#124;
    <span class="blame"><a href="/wsvn/student-theses/anton-stepan/EntityUnification/src/timing-helper.cc?op=blame&amp;rev=15727">Blame</a></span> &#124;
    <span class="diff"><a href="/wsvn/student-theses/anton-stepan/EntityUnification/src/timing-helper.cc?op=diff&amp;rev=15727">Vergleich mit vorheriger</a></span> &#124;
    <span class="changes"><a href="/wsvn/student-theses/anton-stepan/EntityUnification/src/timing-helper.cc?op=revision&amp;rev=15727">Letzte Änderung</a></span> &#124;
    <span class="log"><a href="/wsvn/student-theses/anton-stepan/EntityUnification/src/timing-helper.cc?op=log&amp;rev=15727">Log anzeigen</a></span>
    &#124; <span class="feed"><a href="/wsvn/student-theses/anton-stepan/EntityUnification/src/timing-helper.cc?op=rss&amp;">RSS feed</a></span>
  </p>
  <div class="listing">
<span style="color: #666666;">// Copyright 2013</span><br />
<span style="color: #666666;">// Anton Stepan &lt;stepana@informatik.uni-freiburg.de&gt;</span><br />
<br />
<span style="color: #339900;">#include &quot;./timing-helper.h&quot;</span><br />
<br />
<span style="color: #339900;">#include &lt;chrono&gt;</span><br />
<span style="color: #339900;">#include &lt;string&gt;</span><br />
<span style="color: #339900;">#include &lt;sstream&gt;</span><br />
<span style="color: #339900;">#include &lt;ctime&gt;</span><br />
<br />
<span style="color: #0000ff;">using</span> std<span style="color: #008080;">::</span><span style="color: #007788;">string</span><span style="color: #008080;">;</span><br />
<br />
<span style="color: #666666;">// _____________________________________________________________________________</span><br />
TimingHelper<span style="color: #008080;">::</span><span style="color: #007788;">TimingHelper</span><span style="color: #008000;">&#40;</span><span style="color: #008000;">&#41;</span> <span style="color: #008000;">&#123;</span><span style="color: #008000;">&#125;</span><br />
<br />
<span style="color: #666666;">// _____________________________________________________________________________</span><br />
<span style="color: #0000ff;">void</span> TimingHelper<span style="color: #008080;">::</span><span style="color: #007788;">Start</span><span style="color: #008000;">&#40;</span><span style="color: #008000;">&#41;</span> <span style="color: #008000;">&#123;</span><br />
&nbsp; start_ <span style="color: #000080;">=</span> std<span style="color: #008080;">::</span><span style="color: #007788;">chrono</span><span style="color: #008080;">::</span><span style="color: #007788;">high_resolution_clock</span><span style="color: #008080;">::</span><span style="color: #007788;">now</span><span style="color: #008000;">&#40;</span><span style="color: #008000;">&#41;</span><span style="color: #008080;">;</span><br />
<span style="color: #008000;">&#125;</span><br />
<br />
<span style="color: #666666;">// _____________________________________________________________________________</span><br />
<span style="color: #0000ff;">void</span> TimingHelper<span style="color: #008080;">::</span><span style="color: #007788;">Stop</span><span style="color: #008000;">&#40;</span><span style="color: #008000;">&#41;</span> <span style="color: #008000;">&#123;</span><br />
&nbsp; end_ <span style="color: #000080;">=</span> std<span style="color: #008080;">::</span><span style="color: #007788;">chrono</span><span style="color: #008080;">::</span><span style="color: #007788;">high_resolution_clock</span><span style="color: #008080;">::</span><span style="color: #007788;">now</span><span style="color: #008000;">&#40;</span><span style="color: #008000;">&#41;</span><span style="color: #008080;">;</span><br />
<span style="color: #008000;">&#125;</span><br />
<br />
<span style="color: #666666;">// _____________________________________________________________________________</span><br />
string TimingHelper<span style="color: #008080;">::</span><span style="color: #007788;">GetCurrentTime</span><span style="color: #008000;">&#40;</span><span style="color: #008000;">&#41;</span> <span style="color: #008000;">&#123;</span><br />
&nbsp; <span style="color: #0000ff;">auto</span> now <span style="color: #000080;">=</span> std<span style="color: #008080;">::</span><span style="color: #007788;">chrono</span><span style="color: #008080;">::</span><span style="color: #007788;">system_clock</span><span style="color: #008080;">::</span><span style="color: #007788;">to_time_t</span><span style="color: #008000;">&#40;</span><br />
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; std<span style="color: #008080;">::</span><span style="color: #007788;">chrono</span><span style="color: #008080;">::</span><span style="color: #007788;">system_clock</span><span style="color: #008080;">::</span><span style="color: #007788;">now</span><span style="color: #008000;">&#40;</span><span style="color: #008000;">&#41;</span><span style="color: #008000;">&#41;</span><span style="color: #008080;">;</span><br />
&nbsp; std<span style="color: #008080;">::</span><span style="color: #007788;">string</span> s <span style="color: #000080;">=</span> std<span style="color: #008080;">::</span><span style="color: #0000dd;">ctime</span><span style="color: #008000;">&#40;</span><span style="color: #000040;">&amp;</span>now<span style="color: #008000;">&#41;</span><span style="color: #008080;">;</span> <span style="color: #666666;">// NOLINT</span><br />
&nbsp; <span style="color: #0000ff;">return</span> s<span style="color: #008080;">;</span><br />
<span style="color: #008000;">&#125;</span><br />
<br />
<span style="color: #666666;">// _____________________________________________________________________________</span><br />
string TimingHelper<span style="color: #008080;">::</span><span style="color: #007788;">Get</span><span style="color: #008000;">&#40;</span><span style="color: #008000;">&#41;</span> <span style="color: #0000ff;">const</span> <span style="color: #008000;">&#123;</span><br />
&nbsp; string time_unit <span style="color: #000080;">=</span> <span style="color: #FF0000;">&quot;ms&quot;</span><span style="color: #008080;">;</span><br />
&nbsp; <span style="color: #0000ff;">auto</span> diff <span style="color: #000080;">=</span><br />
&nbsp; &nbsp; <span style="color: #008000;">&#40;</span>std<span style="color: #008080;">::</span><span style="color: #007788;">chrono</span><span style="color: #008080;">::</span><span style="color: #007788;">duration_cast</span><span style="color: #000080;">&lt;</span>std<span style="color: #008080;">::</span><span style="color: #007788;">chrono</span><span style="color: #008080;">::</span><span style="color: #007788;">nanoseconds</span><span style="color: #000080;">&gt;</span><span style="color: #008000;">&#40;</span>end_ <span style="color: #000040;">-</span> start_<span style="color: #008000;">&#41;</span>.<span style="color: #007788;">count</span><span style="color: #008000;">&#40;</span><span style="color: #008000;">&#41;</span><br />
&nbsp; &nbsp; &nbsp;<span style="color: #000040;">*</span> <span style="color:#800080;">0.000001</span><span style="color: #008000;">&#41;</span><span style="color: #008080;">;</span><br />
&nbsp; std<span style="color: #008080;">::</span><span style="color: #007788;">ostringstream</span> oss<span style="color: #008080;">;</span><br />
&nbsp; <span style="color: #0000ff;">if</span> <span style="color: #008000;">&#40;</span>diff <span style="color: #000080;">&gt;</span> <span style="color: #0000dd;">1000</span><span style="color: #008000;">&#41;</span> <span style="color: #008000;">&#123;</span><br />
&nbsp; &nbsp; diff <span style="color: #000080;">=</span> diff <span style="color: #000040;">/</span> <span style="color: #0000dd;">1000</span><span style="color: #008080;">;</span><br />
&nbsp; &nbsp; time_unit <span style="color: #000080;">=</span> <span style="color: #FF0000;">&quot;s&quot;</span><span style="color: #008080;">;</span><br />
&nbsp; &nbsp; <span style="color: #0000ff;">if</span> <span style="color: #008000;">&#40;</span>diff <span style="color: #000080;">&gt;</span> <span style="color: #0000dd;">60</span><span style="color: #008000;">&#41;</span> <span style="color: #008000;">&#123;</span><br />
&nbsp; &nbsp; &nbsp; diff <span style="color: #000080;">=</span> diff <span style="color: #000040;">/</span> <span style="color: #0000dd;">60</span><span style="color: #008080;">;</span><br />
&nbsp; &nbsp; &nbsp; time_unit <span style="color: #000080;">=</span> <span style="color: #FF0000;">&quot;min&quot;</span><span style="color: #008080;">;</span><br />
&nbsp; &nbsp; <span style="color: #008000;">&#125;</span><br />
&nbsp; <span style="color: #008000;">&#125;</span><br />
&nbsp; oss <span style="color: #000080;">&lt;&lt;</span> diff <span style="color: #000080;">&lt;&lt;</span> time_unit<span style="color: #008080;">;</span><br />
&nbsp; <span style="color: #0000ff;">return</span> oss.<span style="color: #007788;">str</span><span style="color: #008000;">&#40;</span><span style="color: #008000;">&#41;</span><span style="color: #008080;">;</span><br />
<span style="color: #008000;">&#125;</span><br />
<br />
<span style="color: #666666;">// _____________________________________________________________________________</span><br />
string TimingHelper<span style="color: #008080;">::</span><span style="color: #007788;">GetMs</span><span style="color: #008000;">&#40;</span><span style="color: #008000;">&#41;</span> <span style="color: #0000ff;">const</span> <span style="color: #008000;">&#123;</span><br />
&nbsp; string time_unit <span style="color: #000080;">=</span> <span style="color: #FF0000;">&quot;ms&quot;</span><span style="color: #008080;">;</span><br />
&nbsp; <span style="color: #0000ff;">auto</span> diff <span style="color: #000080;">=</span><br />
&nbsp; &nbsp; <span style="color: #008000;">&#40;</span>std<span style="color: #008080;">::</span><span style="color: #007788;">chrono</span><span style="color: #008080;">::</span><span style="color: #007788;">duration_cast</span><span style="color: #000080;">&lt;</span>std<span style="color: #008080;">::</span><span style="color: #007788;">chrono</span><span style="color: #008080;">::</span><span style="color: #007788;">nanoseconds</span><span style="color: #000080;">&gt;</span><span style="color: #008000;">&#40;</span>end_ <span style="color: #000040;">-</span> start_<span style="color: #008000;">&#41;</span>.<span style="color: #007788;">count</span><span style="color: #008000;">&#40;</span><span style="color: #008000;">&#41;</span><br />
&nbsp; &nbsp; &nbsp;<span style="color: #000040;">*</span> <span style="color:#800080;">0.000001</span><span style="color: #008000;">&#41;</span><span style="color: #008080;">;</span><br />
&nbsp; std<span style="color: #008080;">::</span><span style="color: #007788;">ostringstream</span> oss<span style="color: #008080;">;</span><br />
&nbsp; oss <span style="color: #000080;">&lt;&lt;</span> diff <span style="color: #000080;">&lt;&lt;</span> time_unit<span style="color: #008080;">;</span><br />
&nbsp; <span style="color: #0000ff;">return</span> oss.<span style="color: #007788;">str</span><span style="color: #008000;">&#40;</span><span style="color: #008000;">&#41;</span><span style="color: #008080;">;</span><br />
<span style="color: #008000;">&#125;</span><br />
<br />
<span style="color: #666666;">// _____________________________________________________________________________</span><br />
string TimingHelper<span style="color: #008080;">::</span><span style="color: #007788;">GetNs</span><span style="color: #008000;">&#40;</span><span style="color: #008000;">&#41;</span> <span style="color: #0000ff;">const</span> <span style="color: #008000;">&#123;</span><br />
&nbsp; std<span style="color: #008080;">::</span><span style="color: #007788;">ostringstream</span> oss<span style="color: #008080;">;</span><br />
&nbsp; oss <span style="color: #000080;">&lt;&lt;</span><br />
&nbsp; &nbsp; std<span style="color: #008080;">::</span><span style="color: #007788;">chrono</span><span style="color: #008080;">::</span><span style="color: #007788;">duration_cast</span><span style="color: #000080;">&lt;</span>std<span style="color: #008080;">::</span><span style="color: #007788;">chrono</span><span style="color: #008080;">::</span><span style="color: #007788;">nanoseconds</span><span style="color: #000080;">&gt;</span><span style="color: #008000;">&#40;</span>end_ <span style="color: #000040;">-</span> start_<span style="color: #008000;">&#41;</span>.<span style="color: #007788;">count</span><span style="color: #008000;">&#40;</span><span style="color: #008000;">&#41;</span><span style="color: #008080;">;</span><br />
&nbsp; oss <span style="color: #000080;">&lt;&lt;</span> <span style="color: #FF0000;">&quot;ns&quot;</span><span style="color: #008080;">;</span><br />
&nbsp; <span style="color: #0000ff;">return</span> oss.<span style="color: #007788;">str</span><span style="color: #008000;">&#40;</span><span style="color: #008000;">&#41;</span><span style="color: #008080;">;</span><br />
<span style="color: #008000;">&#125;</span><br />
&nbsp;  </div>
</div>
<div id="footer">
  <p style="padding:0; margin:0"><small>Powered by <a href="http://www.websvn.info/">WebSVN</a> 2.3.3 und <a href="http://subversion.tigris.org">Subversion</a> 1.6.17 &nbsp; &nbsp; &#x2713; <a href="http://validator.w3.org/check?uri=https://ad-websvn.informatik.uni-freiburg.de/wsvn.php?template=%26language=de">XHTML</a> &amp; <a href="http://jigsaw.w3.org/css-validator/validator?uri=https://ad-websvn.informatik.uni-freiburg.de/wsvn.php?template=%26language=de">CSS</a></small></p>
</div>
</body>
</html>
