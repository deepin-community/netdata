!function(){try{var e="undefined"!=typeof window?window:"undefined"!=typeof global?global:"undefined"!=typeof self?self:{},t=(new Error).stack;t&&(e._sentryDebugIds=e._sentryDebugIds||{},e._sentryDebugIds[t]="b870e5a2-be29-4fbc-9008-1a8e00d01cee",e._sentryDebugIdIdentifier="sentry-dbid-b870e5a2-be29-4fbc-9008-1a8e00d01cee")}catch(e){}}();var _global="undefined"!==typeof window?window:"undefined"!==typeof global?global:"undefined"!==typeof self?self:{};_global.SENTRY_RELEASE={id:"8b7b01b6c705cf50f8050ce0fb8fc6b58fe68567"},(self.webpackChunkcloud_frontend=self.webpackChunkcloud_frontend||[]).push([[5756],{39612:function(e,t,n){n(74916),n(15306);t.Z=function(e){return(e||"").replace(/[\s:()./]/g,"_")}},42448:function(e,t,n){n.d(t,{V:function(){return a}});var r={ErrNoChartExist:"ErrNoChartExist"},a=function(e){var t=!!(arguments.length>1&&void 0!==arguments[1]?arguments[1]:r)[e];return t}},91354:function(e,t,n){var r=n(87462),a=n(29439),o=n(67294),c=n(3701),i=n(73018),l=n(54576),s=n(5312);t.Z=function(e){var t=(0,l.useChart)(),n=(0,s.rJ)(),u=(0,a.Z)(n,2)[1];return o.createElement(c.Button,(0,r.Z)({icon:o.createElement(c.default,{svg:i.default,size:"16px"}),onClick:function(){return u(t)},title:"Add alert configuration","data-testid":"chartHeaderToolbox-addAlertConfiguration"},e))}},84817:function(e,t,n){var r=n(87462),a=n(67294),o=n(65351),c=n(97730),i=n(3701),l=n(54576),s=n(33335),u=function(e){var t=(0,o.Z)("addToDashboardModal").handleOpenModal,n=(0,l.useChart)(),u=function(){var e=n.getAttribute("id");t("",{chartId:e})},d=(0,s.gI)("dashboard:Update");return(0,a.useLayoutEffect)((function(){return n.onKeyChange(["Alt","Shift","KeyD"],d?u:function(){})}),[d]),a.createElement(i.Button,(0,r.Z)({icon:a.createElement(i.default,{svg:c.Z,size:"16px"}),onClick:d?u:function(){},title:d?"Add to dashboard":"You need to be logged in to create your custom dashboards and use this chart in them","data-testid":"chartHeaderToolbox-addDashboard",disabled:!d},e))};t.Z=(0,a.memo)(u)},61181:function(e,t,n){n.d(t,{Cr:function(){return i},EG:function(){return l},G0:function(){return s},Ld:function(){return c}});var r=n(4942);n(92222),n(74916),n(77601),n(91058),n(15306),n(38862),n(47941),n(82526),n(57327),n(41539),n(88449),n(2490),n(59849),n(38880),n(15581),n(34514),n(54747),n(49337),n(33321),n(69070);function a(e,t){var n=Object.keys(e);if(Object.getOwnPropertySymbols){var r=Object.getOwnPropertySymbols(e);t&&(r=r.filter((function(t){return Object.getOwnPropertyDescriptor(e,t).enumerable}))),n.push.apply(n,r)}return n}function o(e){for(var t=1;t<arguments.length;t++){var n=null!=arguments[t]?arguments[t]:{};t%2?a(Object(n),!0).forEach((function(t){(0,r.Z)(e,t,n[t])})):Object.getOwnPropertyDescriptors?Object.defineProperties(e,Object.getOwnPropertyDescriptors(n)):a(Object(n)).forEach((function(t){Object.defineProperty(e,t,Object.getOwnPropertyDescriptor(n,t))}))}return e}var c=function(e,t){return e.on("sizeChanged",(function(e,n,r){if(e.getParent()===t){var a=e.getAttribute("id"),o=t.getAttribute("host"),c="chart_height.".concat(o,"/").concat(a);localStorage.setItem(c,n);var i="chart_width.".concat(o,"/").concat(a);localStorage.setItem(i,r)}}))},i=function(e,t,n){var r=e.getAttribute("host"),a="chart_height.".concat(r,"/").concat(t),o=localStorage.getItem(a);return o?/px/.test(o)?parseInt(o.replace("px",""),10):parseInt(o,10):n},l=function(e,t){var n=arguments.length>2&&void 0!==arguments[2]?arguments[2]:{};localStorage.setItem("chart_layout/".concat(n.i),JSON.stringify(n))},s=function(e){var t=arguments.length>1&&void 0!==arguments[1]?arguments[1]:{},n=arguments.length>2&&void 0!==arguments[2]?arguments[2]:{},r=localStorage.getItem("chart_layout/".concat(e));try{var a=JSON.parse(r);return o(a?o({},a):o({},n),t)}catch(c){return o(o({},n),t)}}},38626:function(e,t,n){var r=n(87462),a=n(29439),o=n(45987),c=n(67294),i=n(93416),l=n(64637),s=n(82351),u=["text","TextComponent"];t.Z=function(e){var t=e.text,n=e.TextComponent,d=void 0===n?i.Text:n,m=(0,o.Z)(e,u),f=(0,c.useState)(""),p=(0,a.Z)(f,2),h=p[0],v=p[1],b=(0,c.useState)(),g=(0,a.Z)(b,2),E=g[0],w=g[1];return(0,c.useEffect)((function(){if(E){for(var e=E.offsetWidth,n=0;E.scrollWidth>e;)E.textContent=(0,l.a)(E.textContent,n),n+=1;E.textContent!==t&&v(t)}}),[t,E]),c.createElement(s.Z,{content:h?t:"",align:"bottom",isBasic:!0},c.createElement(d,(0,r.Z)({truncate:!0,ref:w},m),t))}},43969:function(e,t,n){var r=n(67294),a=n(93416),o=n(91008),c=n(10082),i=n(5710),l=n(37503),s=function(){return r.createElement(a.Flex,{padding:[6],round:1,width:"600px",background:"modalInfoBackground"},r.createElement(a.Box,{margin:[0,4,0,0]},r.createElement(a.Box,{as:a.Icon,width:10,height:10,name:"nodes_update"})),r.createElement(a.Flex,{column:!0,gap:2},r.createElement(a.Text,{strong:!0},"Couldn't find the chart you were looking for? "),r.createElement(a.Text,{color:"textDescription"},"Netdata has zero-configuration auto-detection for most applications and systems, this is achieved using collectors. If you miss some specific chart please check our"," ",r.createElement(o.Z,{href:"https://learn.netdata.cloud/docs/agent/collectors",target:"_blank","data-ga":"chart-area::click-link-collectors::charts-view"},"list of collectors")," ","to see if any additional step is needed.")))},u=function(){return r.createElement(a.Flex,{width:"100%",column:!0,gap:6,margin:[8,0,0,0]},r.createElement(c.Z,null),r.createElement(a.Flex,{gap:1,alignItems:"center",justifyContent:"center",padding:[2],background:"successSemi"},r.createElement(l.Z,null,r.createElement(a.Text,{color:"primary"},"Upgrade to Business for unlimited access")),r.createElement(a.Text,null,"or"),r.createElement(i.Z,null,r.createElement(a.Text,{color:"primary"},"review your Space active Nodes"))))};t.Z=function(e){var t=e.noPreferredNodesError;return r.createElement(a.Flex,{column:!0,justifyContent:"center",alignItems:"center",alignSelf:"center",margin:[30,0,0]},r.createElement(a.Flex,{column:!0,justifyContent:"center",alignItems:"center",width:"300px",margin:[0,0,6]},r.createElement(a.H3,{margin:[0,0,4]},"No charts to display"),r.createElement(a.Text,{color:"textDescription",textAlign:"center"},"Double-check your search or filters and dates and try again with different conditions.")),r.createElement(s,null),t&&r.createElement(u,null))}},72911:function(e,t,n){var r=n(45987),a=n(67294),o=n(93416),c=["width","height","videoId"];t.Z=function(e){var t=e.width,n=void 0===t?443:t,i=e.height,l=void 0===i?249:i,s=e.videoId,u=(0,r.Z)(e,c);return a.createElement(o.Flex,u,a.createElement(o.Box,{className:"video-responsive"},a.createElement("iframe",{width:n,height:l,src:"https://www.youtube.com/embed/".concat(s),frameBorder:"0",allow:"accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture",allowFullScreen:!0,title:"Embedded youtube"})))}},10082:function(e,t,n){var r=n(87462),a=n(45987),o=n(67294),c=n(93416),i=["vertical"];t.Z=function(e){var t=e.vertical,n=(0,a.Z)(e,i);return o.createElement(c.Box,(0,r.Z)({as:"hr",height:t?"100%":"1px"},t?{}:{width:"100%"},{sx:{borderWidth:t?"0px 0px 0px 1px":"1px 0px 0px 0px",borderColor:"borderSecondary",borderStyle:"solid"}},n))}},4781:function(e,t,n){n.r(t),n.d(t,{SettingsContainer:function(){return Ne},default:function(){return Ge}});var r=n(29439),a=(n(66992),n(41539),n(88674),n(78783),n(33948),n(92222),n(60285),n(41637),n(67294)),o=n(2145),c=n(89250),i=n(3975),l=n(4474),s=n(37518),u=n(37497),d=n(41379),m=n(60464),f=n(39904),p=n(74059),h=n(23383),v=n(29983),b=n(29516),g=n(78266),E=n(46189),w=n(87462),y=n(45987),Z=(n(21249),n(57640),n(9924),n(93416)),x=n(4942),O=(n(47941),n(82526),n(57327),n(88449),n(2490),n(59849),n(38880),n(15581),n(34514),n(54747),n(49337),n(33321),n(69070),n(39915)),k=n(54227),P=n(12008),S=n(77796),A=n(96104),I=n(99322);function j(e,t){var n=Object.keys(e);if(Object.getOwnPropertySymbols){var r=Object.getOwnPropertySymbols(e);t&&(r=r.filter((function(t){return Object.getOwnPropertyDescriptor(e,t).enumerable}))),n.push.apply(n,r)}return n}function D(e){for(var t=1;t<arguments.length;t++){var n=null!=arguments[t]?arguments[t]:{};t%2?j(Object(n),!0).forEach((function(t){(0,x.Z)(e,t,n[t])})):Object.getOwnPropertyDescriptors?Object.defineProperties(e,Object.getOwnPropertyDescriptors(n)):j(Object(n)).forEach((function(t){Object.defineProperty(e,t,Object.getOwnPropertyDescriptor(n,t))}))}return e}var C=function(e){var t=e.error,n=e.testPrefix,r=e.onClick,a=e.flavour,o=e.value;return D(D({"data-testid":n?"".concat(n,"-").concat(a):a,flavour:a},r&&{onClick:r}),{},{text:t?"-":"".concat(o)})},W=["critical","warning","error","testPrefix"],T=["id","testPrefix"],_=function(e){var t=e.critical,n=e.warning,r=e.error,o=e.testPrefix,c=(0,y.Z)(e,W),i=C({error:r,testPrefix:o,flavour:t?"error":"disabledError",value:t}),l=C({error:r,testPrefix:o,flavour:n?"warning":"disabledWarning",value:n});return a.createElement(Z.Flex,c,a.createElement(Z.MasterCard,{"data-testid":"alertsMastercard",pillLeft:i,pillRight:l,size:"small"}))},F=function(e){var t=e.id,n=e.testPrefix,r=(0,y.Z)(e,T),o=(0,S.ev)(t),c=(0,P.n_)(o),i=c.critical,l=c.warning;return a.createElement(_,(0,w.Z)({"data-testid":"alerts",testPrefix:n,critical:i,warning:l},r))},B=function(e){var t=e.critical,n=e.warning,r=e.error;return a.createElement(F,{critical:t,"data-testid":"tabAlerts",error:r,testPrefix:"tabAlerts-alert",warning:n,margin:[0,0,0,1]})},L=function(e){var t=e.nodeId,n=(0,S.ev)(t),r=(0,P.n_)(n),o=r.critical,c=r.warning;return a.createElement(B,{critical:o,warning:c})},N=function(){var e=(0,A.fX)({emptyIfAll:!1}),t=(0,S.rw)(e),n=(0,I.u)("error"),r=(0,P.n_)(t),o=r.critical,c=r.warning;return a.createElement(B,{critical:o,warning:c,error:n})},R={warning:"warning",critical:"error"},G=function(e){var t=e.alertId,n=(0,P.E5)(t,"status");return R[n]?a.createElement(Z.Flex,{alignSelf:"center",margin:[0,0,0,2],round:1,background:R[n],width:2,height:2}):null};function M(e,t){var n=Object.keys(e);if(Object.getOwnPropertySymbols){var r=Object.getOwnPropertySymbols(e);t&&(r=r.filter((function(t){return Object.getOwnPropertyDescriptor(e,t).enumerable}))),n.push.apply(n,r)}return n}function z(e){for(var t=1;t<arguments.length;t++){var n=null!=arguments[t]?arguments[t]:{};t%2?M(Object(n),!0).forEach((function(t){(0,x.Z)(e,t,n[t])})):Object.getOwnPropertyDescriptors?Object.defineProperties(e,Object.getOwnPropertyDescriptors(n)):M(Object(n)).forEach((function(t){Object.defineProperty(e,t,Object.getOwnPropertyDescriptor(n,t))}))}return e}var V=n(81488),H=function(){var e=(0,I.u)("error"),t=(0,I.u)("updatedAt");return a.createElement(V.Z,{error:e,updatedAt:t,text:"All your active alerts"})},J=n(33335);function K(e,t){var n=Object.keys(e);if(Object.getOwnPropertySymbols){var r=Object.getOwnPropertySymbols(e);t&&(r=r.filter((function(t){return Object.getOwnPropertyDescriptor(e,t).enumerable}))),n.push.apply(n,r)}return n}function U(e){for(var t=1;t<arguments.length;t++){var n=null!=arguments[t]?arguments[t]:{};t%2?K(Object(n),!0).forEach((function(t){(0,x.Z)(e,t,n[t])})):Object.getOwnPropertyDescriptors?Object.defineProperties(e,Object.getOwnPropertyDescriptors(n)):K(Object(n)).forEach((function(t){Object.defineProperty(e,t,Object.getOwnPropertyDescriptor(n,t))}))}return e}var Y=function(){var e,t,n=(0,s.A3)(),r=(0,J.gI)("dashboard:ReadAll"),o=function(e){return(0,a.useMemo)((function(){return U(U({home:{title:"Home",icon:"room_home",path:"".concat(e,"/home"),dataGa:"view-picker::click-view-home::global-view",testId:"viewPicker-home",tooltip:"A dashboard metrics from all your nodes"},overview:{title:"Overview",icon:"room_overview",path:"".concat(e,"/overview"),dataGa:"view-picker::click-view-overview::global-view",testId:"viewPicker-overview",tooltip:"A dashboard with charts and metrics from all your nodes"},nodes:{title:"Nodes",icon:"nodes_hollow",path:"".concat(e,"/nodes"),dataGa:"view-picker::click-view-nodes::global-view",testId:"viewPicker-nodes",tooltip:"An index of your nodes with alert status and key metrics"}},!window.envSettings.isAgent&&!window.envSettings.onprem&&{k8s:{title:"Kubernetes",icon:"serviceKubernetes",path:"".concat(e,"/kubernetes"),dataGa:"view-picker::click-view-kubernetes::global-view",testId:"viewPicker-kubernetes",tooltip:"k8s"}}),{},{dashboards:{title:"Dashboards",icon:"dashboard",path:"".concat(e,"/dashboards"),dataGa:"view-picker::click-view-dashboard::global-view",testId:"viewPicker-customDashboards",tooltip:"Customize dashboards according to your needs"},alerts:{title:"Alerts",icon:"alarm",path:"".concat(e,"/alerts"),dataGa:"view-picker::click-view-alerts::global-view",testId:"viewPicker-alerts",tooltip:a.createElement(H,null),children:a.createElement(N,null)},ar:{title:"Anomalies",icon:"anomaliesLens",path:"".concat(e,"/anomalies"),dataGa:"view-picker::click-view-anomalies::global-view",testId:"viewPicker-anomalies",tooltip:"Anomaly Advisor - ML powered anomaly detection"},fn:{title:"Functions",icon:"functions",path:"".concat(e,"/functions"),dataGa:"view-picker::click-view-functions::global-overview",testId:"viewPicker-functions",tooltip:"Functions to run on your nodes"},events:{title:"Events",icon:"feed",path:"".concat(e,"/events"),dataGa:"view-picker::click-view-feed::mn-overview",testId:"viewPicker-feed",tooltip:"Feed & events"}})}),[e])}(n),c=(0,p.Q6)();return[(0,a.useMemo)((function(){return[!c&&o.home,o.overview,o.nodes,o.k8s,r&&o.dashboards,o.alerts,o.ar,o.fn,o.events].filter(Boolean)}),[n,c]),(e=n,t=!c,(0,a.useMemo)((function(){var n;return n={},(0,x.Z)(n,"".concat(e,"/overview"),!0),(0,x.Z)(n,"".concat(e,"/home"),t),(0,x.Z)(n,"".concat(e,"/nodes"),!0),(0,x.Z)(n,"".concat(e,"/dashboards"),!0),(0,x.Z)(n,"".concat(e,"/alerts"),!0),(0,x.Z)(n,"".concat(e,"/anomalies"),!0),(0,x.Z)(n,"".concat(e,"/functions"),!0),n}),[e,t]))]},X=n(22648),q=n(82351),Q=["to","params","exact","icon","title","fixed","dataGa","testId","children","type","tooltip","showBorderLeft"],$=function(e){return e?"text":"textDescription"},ee=(0,a.forwardRef)((function(e,t){var n=e.to,r=e.params,o=e.exact,i=e.icon,l=e.title,s=e.fixed,u=e.dataGa,d=e.testId,m=e.children,f=e.type,p=e.tooltip,h=e.showBorderLeft,v=(0,y.Z)(e,Q),b=(0,c.bS)({end:o,path:n}),g=(0,c.s0)(),E=(0,X.m)(),x=!!b,O="nodes"!==f||x,k=(0,a.useCallback)((function(){if(!x){var e="".concat(n).concat(r?"/".concat(r):"");g(e)}}),[n,x,r]);return a.createElement(Z.NavigationTab,(0,w.Z)({ref:t,fixed:s,active:x,showBorderLeft:h,icon:a.createElement(Z.Icon,{name:i,size:"small"}),onActivate:k,"data-ga":u,"data-testid":d,"aria-selected":x,tooltip:p||l},v),!E&&a.createElement(q.Z,{content:p||l,align:p?"bottom":"top",isBasic:!0},a.createElement(Z.TextSmall,{alignSelf:"center",color:$(x),whiteSpace:"nowrap"},l)),O&&m)})),te=["title","path","children","index"],ne=["id","icon","title","path"],re=(0,a.forwardRef)((function(e,t){var n=e.title,r=e.path,o=e.children,c=e.index,i=(0,y.Z)(e,te);return a.createElement(ee,(0,w.Z)({ref:t,showBorderLeft:0===c,exact:!0,to:r,title:n,"data-testid":"navigation-dynamicTab-".concat(n),index:c},i),o)})),ae=function(){var e=Y(),t=(0,r.Z)(e,2),n=t[0],o=function(e){var t=(0,c.s0)(),n=(0,c.bS)("/spaces/:spaceSlug/rooms/:roomSlug/:type/*"),r=(0,k.ZS)(),o=(0,k.Yy)(),i=(0,k.CN)(),l=n?n.pathnameBase:"/spaces",s=(0,c.TH)().pathname,u=(0,O.Z)(e[s]&&s,!0),d=(0,a.useCallback)((function(e,n){if(!n)return o(e);var a=r[e-1],c=r[e+1],i=function(n,r){var a="".concat(n).concat(r?"/".concat(r):"");t(a),o(e)};return u?i(u):a?i(a.path,a.params):c?i(c.path,c.params):i(l)}),[r,o,l,u]);return[(0,a.useMemo)((function(){return r.map((function(e){return z(z({},e),{},{children:e.id&&"nodes"===e.type?a.createElement(L,{nodeId:e.id}):"alerts"===e.type?a.createElement(G,{alertId:e.id}):null})}))}),[r]),function(e,t){-1===e&&-1===t||i({sourceIndex:e,destinationIndex:t})},d]}(t[1]),i=(0,r.Z)(o,3),l=i[0],s=i[1],u=i[2];return a.createElement(Z.NavigationTabs,null,n.map((function(e,t){var n=e.id,r=e.icon,o=e.title,c=e.path,i=(0,y.Z)(e,ne);return a.createElement(ee,(0,w.Z)({exact:!0,fixed:!0,to:c,icon:r,title:o,key:"".concat(n,"-").concat(t)},i))})),a.createElement(Z.TabSeparator,null),a.createElement(Z.DraggableTabs,{onDragEnd:s,onTabClose:u,items:l,Item:re}))},oe=n(32300),ce=n(4571),ie=n(57992),le=n(77901),se=n(72869),ue=n(92501),de=n(69063),me=function(){return(0,de.Z)(),null},fe=n(15418),pe=n(78710),he=n(6308),ve=n(65840),be=(0,o.Z)((function(){return Promise.all([n.e(7514),n.e(8663),n.e(8276)]).then(n.bind(n,88276))}),"ManageSpaceRoute"),ge=(0,o.Z)((function(){return n.e(3017).then(n.bind(n,23017)).then((function(e){return{default:e.TrialWelcome}}))}),"TrialWelcome"),Ee=(0,o.Z)((function(){return n.e(6288).then(n.bind(n,66288))}),"PreferredNodesModal"),we=(0,o.Z)((function(){return Promise.resolve().then(n.bind(n,98469))}),"JoinSpace"),ye=(0,o.Z)((function(){return n.e(6610).then(n.bind(n,6610))}),"NoSpaceAccess"),Ze=(0,o.Z)((function(){return n.e(9201).then(n.bind(n,69201))}),"AlertView"),xe=(0,o.Z)((function(){return n.e(6347).then(n.bind(n,66347))}),"Anomalies"),Oe=(0,o.Z)((function(){return n.e(6876).then(n.bind(n,26876))}),"AlertsSmartboard"),ke=(0,o.Z)((function(){return n.e(2357).then(n.bind(n,22357))}),"DashboardsOverview"),Pe=(0,o.Z)((function(){return n.e(6181).then(n.bind(n,76181))}),"DashboardView"),Se=(0,o.Z)((function(){return Promise.all([n.e(7514),n.e(498),n.e(1452)]).then(n.bind(n,81452))}),"FunctionsView"),Ae=(0,o.Z)((function(){return Promise.all([n.e(6502),n.e(8663),n.e(6129)]).then(n.bind(n,66129))}),"Integrations"),Ie=E.Z.demoSlug,je=E.Z.demoDefaultRoomViews,De=E.Z.defaultRoomView,Ce=E.Z.integrationsView,We=function(){var e=(0,i.ZP)(),t=(0,r.Z)(e,2),n=t[0],o=t[1],l=Ie===n?je[o]||je.default:pe.ZP&&n===pe.Xh&&o===pe.Fb?pe.vT:De;return a.createElement(c.Fg,{replace:!0,to:"/spaces/".concat(n,"/rooms/").concat(o,"/").concat(l)})},Te=(0,ie.Z)((0,le.Z)(ce.Z)),_e=(0,le.Z)(ce.Z),Fe=(0,a.memo)((function(){return a.createElement(a.Suspense,{fallback:a.createElement(g.Z,{title:"Loading..."})},a.createElement(c.Z5,null,a.createElement(c.AW,{path:"nodes/:nodeId",element:a.createElement(Te,null)}),a.createElement(c.AW,{path:"nodes",element:a.createElement(oe.Z,null)}),a.createElement(c.AW,{path:"home",element:a.createElement(se.Z,null)}),a.createElement(c.AW,{path:"overview",element:a.createElement(_e,null)}),a.createElement(c.AW,{path:"alerts/:alertId",element:a.createElement(Ze,null)}),a.createElement(c.AW,{path:"alerts",element:a.createElement(Oe,null)}),a.createElement(c.AW,{path:"alarms/:alertId",element:a.createElement(Ze,null)}),a.createElement(c.AW,{path:"alarms",element:a.createElement(Oe,null)}),a.createElement(c.AW,{path:"dashboards/:dashboardSlug",element:a.createElement(Pe,null)}),a.createElement(c.AW,{path:"dashboards",element:a.createElement(ke,null)}),a.createElement(c.AW,{path:"anomalies",element:a.createElement(xe,null)}),a.createElement(c.AW,{path:"kubernetes",element:a.createElement(_e,{flavour:"k8s"})}),a.createElement(c.AW,{path:"/functions",element:a.createElement(Se,{key:"fn",flavour:"fn"})}),a.createElement(c.AW,{path:"/events",element:a.createElement(Se,{key:"feed",flavour:"feed"})}),a.createElement(c.AW,{path:"/",element:a.createElement(We,null)})))})),Be=function(){var e=(0,c.s0)(),t=(0,i.ZP)(),n=(0,r.Z)(t,2),o=n[0],l=n[1],h=(0,he.Z)(),v=(0,r.Z)(h,2),b=v[0],E=v[1],w=(0,p.th)(),y=(0,s.UL)(),Z=(0,a.useState)(!0),x=(0,r.Z)(Z,2),O=x[0],k=x[1],P=(0,ve.M5)(),S=(0,r.Z)(P,2),A=S[0],I=S[1];return(0,u.Z)(w,y),(0,d.Z)({spaceId:w,id:y,pollingInterval:63e3}),(0,m.Z)(w,y),(0,f.Z)(w,y),(0,a.useEffect)((function(){var t=!0,n=null;return n=setTimeout((function(){t&&(b&&e("/spaces/".concat(o,"/rooms/").concat(l,"/").concat(Ce),{replace:!0}),k(!1))}),1e3),function(){t=!1,n&&(clearTimeout(n),n=null)}}),[b]),(0,a.useEffect)((function(){I(O||!y||E)}),[O,y,E]),A?a.createElement(g.Z,{title:"Loading room..."}):a.createElement(Fe,null)},Le=(0,ue.Pf)((0,a.memo)((function(){var e=(0,he.c)().isIntegrationsPath,t=(0,ve.x4)();return a.createElement(fe.Z,{permission:"room:Read"},(function(n){return n?a.createElement(a.Fragment,null,!t&&!e&&a.createElement(ae,null),a.createElement(a.Suspense,{fallback:a.createElement(g.Z,{title:"Loading your space..."})},a.createElement(c.Z5,null,a.createElement(c.AW,{path:"spaces/:spaceSlug/join-space",element:a.createElement(we,null)}),a.createElement(c.AW,{path:"spaces/:spaceSlug/no-rooms",element:a.createElement(ye,{reason:"noRooms"})}),a.createElement(c.AW,{path:"spaces/:spaceSlug/settings/*",element:a.createElement(Ne,null)}),a.createElement(c.AW,{path:"spaces/:spaceSlug/rooms/:roomSlug/".concat(Ce),element:a.createElement(Ae,null)}),a.createElement(c.AW,{path:"spaces/:spaceSlug/rooms/:roomSlug/*",element:a.createElement(Be,null)})))):a.createElement(ye,{reason:"noRoomPermission"})}))}))),Ne=function(){return(0,i.vq)(),a.createElement(be,null)},Re=function(){var e=(0,p.th)();return(0,h.Z)(e),(0,v.Z)(e),(0,b.Z)(e),null},Ge=(0,ue.Pf)((function(){var e=(0,p.th)();return(0,l.ZP)(),(0,a.useEffect)((function(){var e=new URL(window.location.href).searchParams.get("join_callback");e&&(window.location.href=e)}),[]),a.createElement(a.Fragment,null,a.createElement(Re,null),a.createElement(fe.Z,{permission:"space:Read"},(function(t){return t?a.createElement(a.Fragment,null,a.createElement(c.Z5,null,a.createElement(c.AW,{path:"/*",element:a.createElement(me,null)})),a.createElement(a.Suspense,{fallback:a.createElement(g.Z,{title:"Loading your space..."})},a.createElement(Le,null)),a.createElement(a.Suspense,{fallback:""},a.createElement(ge,null)),a.createElement(a.Suspense,{fallback:""},a.createElement(Ee,null))):a.createElement(ye,{key:e,reason:"noSpacePermission"})})))}))}}]);