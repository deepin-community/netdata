!function(){try{var e="undefined"!=typeof window?window:"undefined"!=typeof global?global:"undefined"!=typeof self?self:{},t=(new Error).stack;t&&(e._sentryDebugIds=e._sentryDebugIds||{},e._sentryDebugIds[t]="23100f0d-ac4f-4bfc-bf2f-77097c92d50a",e._sentryDebugIdIdentifier="sentry-dbid-23100f0d-ac4f-4bfc-bf2f-77097c92d50a")}catch(e){}}();var _global="undefined"!==typeof window?window:"undefined"!==typeof global?global:"undefined"!==typeof self?self:{};_global.SENTRY_RELEASE={id:"8b7b01b6c705cf50f8050ce0fb8fc6b58fe68567"},(self.webpackChunkcloud_frontend=self.webpackChunkcloud_frontend||[]).push([[2713],{38671:function(e,t,n){n(47941),n(82526),n(57327),n(41539),n(88449),n(2490),n(59849),n(38880),n(15581),n(34514),n(54747),n(49337),n(33321),n(69070);var a=n(4942),r=n(29439),o=n(67294),c=n(8641),i=n(58591);function l(e,t){var n=Object.keys(e);if(Object.getOwnPropertySymbols){var a=Object.getOwnPropertySymbols(e);t&&(a=a.filter((function(t){return Object.getOwnPropertyDescriptor(e,t).enumerable}))),n.push.apply(n,a)}return n}function s(e){for(var t=1;t<arguments.length;t++){var n=null!=arguments[t]?arguments[t]:{};t%2?l(Object(n),!0).forEach((function(t){(0,a.Z)(e,t,n[t])})):Object.getOwnPropertyDescriptors?Object.defineProperties(e,Object.getOwnPropertyDescriptors(n)):l(Object(n)).forEach((function(t){Object.defineProperty(e,t,Object.getOwnPropertyDescriptor(n,t))}))}return e}t.Z=function(){var e=(0,i.m$)(),t=(0,c.Oi)(),n=(0,r.Z)(t,2),a=n[0],l=n[1],u=(0,c.wC)().reset,d=(0,o.useCallback)((function(){u(),(0,i.xs)(s(s({},e),{},{integrationsModalOpen:"true"})),l("true")}),[u,e]);return{isIntegrationsVisible:a,hideIntegrations:(0,o.useCallback)((function(){(0,i.xs)(s(s({},e),{},{integrationsModalOpen:""})),l("")}),[e]),onIntegrationsClick:d}}},12713:function(e,t,n){n.r(t),n.d(t,{default:function(){return we}});var a=n(29439),r=n(67294),o=n(93416),c=n(33937),i=n(87462),l=(n(21249),n(57640),n(9924),n(71893)),s=n(89250),u=n(46189),d=n(46667),p=n(27622),m=n(77872),g=n(36459),f=(n(19601),n(82351)),h=n(93033),b=n(15418),E=n(74059),v=function(e){var t=Object.assign({},((0,g.Z)(e),e)),n=(0,h.Z)(),a=(0,E.Q6)();return r.createElement(b.Z,{permission:"space:ReadSettings"},(function(e){return r.createElement(f.Z,{content:e?"Space settings":a?"You are viewing a local agent. Connect the agent to a space on cloud to be able to view and change the settings":"Only admins can view space settings"},r.createElement(o.Flex,{opacity:e?null:"weak",padding:[0,1]},r.createElement(o.Button,(0,i.Z)({disabled:!e,flavour:"borderless",icon:"gear",neutral:!0,onClick:n,small:!0,"data-ga":"left-sidebar::click-space-settings::global-view","data-testid":"workspaceBar-manageSpace"},t))))}))},x=n(36065),w=n(15257),k=n(92432),C=n(14428),y=n(97346),I=n(21960),Z=n(3528),S=function(){var e=(0,Z.hd)("email"),t=(0,I.Z)().handleOpenProfileModal;return"loading"===e.state||e.state.hasError?null:r.createElement(o.IconButton,{flavour:"borderless","data-testid":"open-email-notification",cursor:"pointer",width:"20px",height:"20px",onClick:function(){return t("notifications")},icon:e.contents.email?"notification_shortcut_enabled":"notification_shortcut_disabled",tooltip:"Email Notifications","data-ga":"left-sidebar::click-user-notification-settings::global-view",iconColor:"iconColor"})},F=(0,r.memo)(S),P=(0,n(39979).Z)(C.Z),_=l.default.div.withConfig({displayName:"spaces__Separator",componentId:"sc-1gbju6k-0"})(["height:1px;width:",";background:",";"],(0,o.getSizeBy)(3),(0,o.getColor)("border")),N=(0,l.default)(o.Button).withConfig({displayName:"spaces__DocButton",componentId:"sc-1gbju6k-1"})(["&&{> .button-icon{width:20px;height:20px;}}"]),O=(0,l.default)(o.Button).withConfig({displayName:"spaces__ExpandButton",componentId:"sc-1gbju6k-2"})(["&&{> .button-icon{width:6px;height:9px;}}"]),T={onClickOut:function(){return(0,k.L)("header-help","click-out-modal","global-view")},onCloseClick:function(){return(0,k.L)("header-help","click-close","global-view")},onOpenIssueClick:function(){return(0,k.L)("header-help","click-\u03bfpen-issue","global-view")},onContributeClick:function(){return(0,k.L)("header-help","click-contribute","global-view")},onOpenBugClick:function(){return(0,k.L)("header-help","click-bug","global-view")},onSupportClick:function(){return(0,k.L)("header-help","click-support","global-view")},onVisitDocumentClick:function(){return(0,k.L)("header-help","click-visit-doc","global-view")},onGoToDemoClick:function(){return(0,k.L)("header-help","click-go-to-demo","global-view")}},B=function(e){var t=e.spacePanelCollapsed,n=e.toggleSpacePanel,c=(0,E.Iw)(),l=(0,E.th)(),g=(0,d.Z)(),h=(0,a.Z)(g,4),b=h[0],k=h[2],C=h[3],I=(0,s.s0)(),Z=(0,r.useCallback)((function(){var e=(arguments.length>0&&void 0!==arguments[0]?arguments[0]:{}).slug;return I("/spaces/".concat(e))}),[]);return r.createElement(o.Flex,{background:"sideBarMini","data-testid":"workspaceBar",padding:[3,0],column:!0,alignItems:"center",gap:6,height:"100vh",justifyContent:"between"},r.createElement(o.Flex,{column:!0,"data-testid":"workspaceBar-spaces-list",gap:4,alignItems:"center",overflow:"hidden"},r.createElement(p.Z,{"data-testid":"workspaceBar-netdataLogo"}),t&&r.createElement(O,{"data-testid":"workspaceBar-expandButton",onClick:n,icon:"chevron_right_s",neutral:!0,flavour:"borderless",small:!0}),r.createElement(o.Flex,{column:!0,"data-testid":"workspaceBar-spacesList",gap:4,overflow:{vertical:"auto"}},c.map((function(e){return r.createElement(m.Z,{testIdPrefix:"workspaceBar-space",key:e,spaceId:e,active:e===l})}))),r.createElement(y.Z,{permission:"user:CreateSpace"},r.createElement(_,{"data-testid":"workspaceBar-separator"})),r.createElement(f.Z,{content:"Create a new Space",align:"right"},r.createElement(P,{permission:"user:CreateSpace",ifForbidden:"hide",icon:"plus",onClick:k,"data-testid":"workspaceBar-addSpace-button",feature:"CreateSpace",isStart:!0}))),r.createElement(o.Flex,{column:!0,"data-testid":"workspaceBar-actionsList",gap:4,alignItems:"center"},r.createElement(o.Flex,{column:!0,gap:1,alignItems:"center"},r.createElement(y.Z,{permission:"user:ChangeSpaceRoomNotifications"},r.createElement(F,null)),r.createElement(o.Documentation,(0,i.Z)({app:"cloud",demoUrl:u.Z.demoUrl},T),(function(e){return r.createElement(f.Z,{content:"Read documentation, engage with the community and let us know about any feature requests or bugs",align:"right"},r.createElement(N,{neutral:!0,flavour:"borderless",icon:"question",onClick:e,"data-ga":"header-help::click-help::global-view","data-testid":"documentation-button",title:"Need help?"}))})),r.createElement(v,null)),r.createElement(w.Z,null)),b&&r.createElement(x.Z,{onClose:C,onDone:Z}))},j=n(15861),L=n(64687),D=n.n(L),R=(n(9170),n(66992),n(41539),n(88674),n(34668),n(78783),n(33948),n(69826),n(31672),n(2490),n(59461),n(26699),n(32023),n(92222),n(57327),n(88449),n(59849),n(74916),n(77601),n(15306),n(26398)),z=n(18761),W=n(97945),A=n(7335),M=n(25819),U=n(67622),H=n(61458),q=n(92501),V=n(64358),G=(0,l.default)(o.Icon).withConfig({displayName:"styled__TrashIcon",componentId:"sc-1hr9uxl-0"})(["&:hover{fill:",";opacity:0.6;}"],(0,o.getColor)("textFocus")),Q=(0,l.default)(o.TextSmall).withConfig({displayName:"styled__UrlWrapper",componentId:"sc-1hr9uxl-1"})(["overflow-wrap:anywhere;"]),Y=(0,l.default)(o.Icon).withConfig({displayName:"styled__StyledIcon",componentId:"sc-1hr9uxl-2"})(["transform:",";"],(function(e){return e.right?"rotate(0)":"rotate(180deg)"})),$=function(){var e=(0,j.Z)(D().mark((function e(t,n){var a,r,o,c,i,l,s;return D().wrap((function(e){for(;;)switch(e.prev=e.next){case 0:return a=n.spaces,r=void 0===a?[]:a,o=n.id,e.next=3,(0,z.kq)(o);case 3:if(c=e.sent,!(i=c.data).length){e.next=9;break}return e.next=8,Promise.any(r.map((function(e){return R.Z.get((0,V.W)({spaceId:e.id})).then((function(t){var n=t.data;return Promise.any(n.map((function(t){return(0,M.Fz)({roomId:t.id,spaceId:e.id}).then((function(n){var a=n.data.find((function(e){var t=e.id;return i.includes(t)}));if(!a)throw new Error("can't find matching node");return"".concat(window.envSettings.cloudUrl,"/spaces/").concat(e.slug,"/rooms/").concat(t.slug,"/nodes/").concat(a.id)}))})))}))}))).then((function(e){return e})).catch((function(){}));case 8:l=e.sent;case 9:if(!l){e.next=11;break}return e.abrupt("return",l);case 11:if(!(s=t.filter((function(e){return!/netdata\.cloud\//.test(e)}))).length){e.next=16;break}return e.next=15,Promise.any(s.map((function(e){var t=/^https?:\/\//.test(e)?e:"http://".concat(e);return t=t.replace(/\/+$/,""),R.Z.get("".concat(t,"/api/v1/registry?action=hello")).then((function(){return t}))}))).then((function(e){return e})).catch((function(){}));case 15:return e.abrupt("return",e.sent);case 16:return e.abrupt("return");case 17:case"end":return e.stop()}}),e)})));return function(t,n){return e.apply(this,arguments)}}(),J=function(e){/https?:\/\//.test(e)||(e="http://".concat(e)),location.replace(e)},K=function(e){var t=e.id,n=e.selectedId,c=e.setSelectedId,i=(0,W.iy)(t,"name"),l=(0,d.Z)(),s=(0,a.Z)(l,4),u=s[0],p=s[2],m=s[3],g=(0,A.lL)(),f=(0,W.iy)(t,"urls"),h=function(e,t){var n=arguments.length>2&&void 0!==arguments[2]?arguments[2]:{},a=n.openList,o=n.setSelectedId,c=(0,r.useRef)(),i=(0,E.GM)("ids"),l=(0,E.Zu)(i);return(0,r.useCallback)((0,j.Z)(D().mark((function n(){return D().wrap((function(n){for(;;)switch(n.prev=n.next){case 0:if(o(e),c.current){n.next=5;break}return n.next=4,$(t,{spaces:l,id:e});case 4:c.current=n.sent;case 5:if(o(),c.current){n.next=8;break}return n.abrupt("return",a());case 8:J(c.current);case 9:case"end":return n.stop()}}),n)}))),[t,l])}(t,f,{openList:p,setSelectedId:c}),b=(0,r.useCallback)((function(){u?m():h()}),[u,h]),v=n===t;return r.createElement(r.Fragment,null,r.createElement(U.Z,{onClick:b,isSidebar:!0,padding:[1,2,1,4],testid:"visitedNodes-".concat(i),disabled:!!n&&!v,selected:v,loading:v,iconColor:"textNoFocus",textColor:"textNoFocus",Wrapper:o.TextSmall},i),u&&r.createElement(o.Flex,{column:!0,margin:[1,3],padding:[2],border:{side:"all",color:"placeholder"},round:2},r.createElement(o.Text,{textAlign:"center"},"We couldn't connect to any of your instances, here is the list:"),f.map((function(e){return r.createElement(U.Z,{key:e,onClick:function(){return J(e)},isSidebar:!0,testid:"visitedNodes-node-".concat(e),actions:r.createElement(o.Flex,{flex:!1,margin:[0,0,0,1]},r.createElement(G,{name:"trashcan",size:"small",color:"textNoFocus",onClick:function(n){n.stopPropagation(),g(t,e)},width:"16px",height:"16px"})),padding:[2],Wrapper:Q,iconColor:"textNoFocus",textColor:"textNoFocus"},e)}))))},X=function(){var e=(0,A.z2)(),t=(0,d.Z)(e.length>0),n=(0,a.Z)(t,2),c=n[0],i=n[1];(0,r.useEffect)((function(){c||i()}),[e.length]);var l=(0,r.useState)(""),s=(0,a.Z)(l,2),u=s[0],p=s[1],m=(0,A.H3)(u),g=(0,r.useState)(),f=(0,a.Z)(g,2),h=f[0],b=f[1];return e.length?r.createElement(H.Z,{isOpen:c,toggleOpen:i,label:r.createElement(o.Flex,{padding:[1,0],flex:!0,justifyContent:"between",alignItems:"center"},r.createElement(o.Flex,{alignItems:"center",gap:2},r.createElement(o.Icon,{name:"node_hollow",color:"textNoFocus",width:"14px",height:"14px"}),r.createElement(o.TextSmall,{color:"textNoFocus"},"Visited Nodes")),r.createElement(Y,{right:!c,name:"chevron_down",size:"small",color:"textNoFocus"})),headerTestId:"visitedNodes"},e.length>3&&r.createElement(o.Flex,{padding:[1,2,2,4]},r.createElement(o.SearchInput,{"data-testid":"search-visited-nodes-input",onChange:p,value:u,size:"tiny"})),r.createElement(o.Flex,{padding:[0,0,2],column:!0},m.length?m.map((function(e){return r.createElement(K,{key:e,id:e,selectedId:h,setSelectedId:b})})):r.createElement(o.Text,{padding:[3,5]},"No nodes match your search"))):null},ee=(0,r.memo)((function(){return r.createElement(q.ZP,{fallback:""},r.createElement(r.Suspense,{fallback:""},r.createElement(X,null)))})),te=n(56662),ne=n(55917),ae=n(33335),re=function(e){return function(t){var n=(0,E.th)();return r.createElement(e,(0,i.Z)({},t,{key:n}))}},oe=n(59636),ce={isSidebar:!0,padding:[1,2,1,4],textColor:"textNoFocus",Wrapper:o.TextSmall},ie=re((function(){var e=(0,ae.gI)("room:Create"),t=(0,ae.gI)("room:Read"),n=(0,d.Z)(t),c=(0,a.Z)(n,2),i=c[0],l=c[1],s=(0,d.Z)(!1),u=(0,a.Z)(s,4),p=u[0],m=u[2],g=u[3],h=(0,r.useCallback)((function(t){t.stopPropagation(),e&&m()}),[e]);return r.createElement(r.Fragment,null,r.createElement(H.Z,{"data-testid":"workspaceRooms-menuList",disabled:!t,headerTestId:"workspaceRooms-warRooms",isOpen:i,label:r.createElement(o.Flex,{padding:[1,0],margin:[0,0,1,0],flex:!0,justifyContent:"between",alignItems:"center",height:"24px"},r.createElement(o.Flex,{alignItems:"center",gap:2},r.createElement(o.Icon,{name:"space_new",color:"textNoFocus",width:"14px",height:"14px"}),r.createElement(o.TextSmall,{color:"textNoFocus"},"Rooms")),r.createElement(o.Flex,{alignItems:"center",gap:2},r.createElement(f.Z,{content:"Create a new room",align:"right"},r.createElement(C.Z,{permission:"room:Create",tiny:!0,icon:"plus",onClick:h,"data-testid":"workspaceRooms-addWarRoom-button"})),r.createElement(ne.x,{right:!i,name:"chevron_down",size:"small",color:"textNoFocus"}))),toggleOpen:l},r.createElement(o.Flex,{column:!0,"data-testid":"workspaceRooms-warRoomsList",padding:[0,0,1]},r.createElement(oe.Z,ce))),p&&r.createElement(te.U,{onClose:g,isSubmodal:!1}))})),le=n(2145),se=n(61152),ue=(0,l.default)(o.Flex).attrs({alignItems:"center",justifyContent:"center",width:10,height:4,round:.5,background:"sideBarMini"}).withConfig({displayName:"styled__AdminPill",componentId:"sc-1ps23b1-0"})(["opacity:0;",":hover &{opacity:1;}"],U.z),de=(0,le.Z)((function(){return n.e(6914).then(n.bind(n,76914))}),"CurrentPlan"),pe=function(e){var t=e.children,n=e.onToggle;return r.createElement(o.Flex,{column:!0,gap:1},r.createElement(o.Flex,{justifyContent:"between",alignItems:"center"},r.createElement(o.Flex,{alignItems:"center"},t),r.createElement(o.Button,{onClick:n,icon:"chevron_left",neutral:!0,flavour:"hollow",small:!0})),r.createElement(r.Suspense,{fallback:""},r.createElement(de,null)))},me=n(89149),ge=n(38671),fe=(0,le.Z)((function(){return n.e(3017).then(n.bind(n,23017)).then((function(e){return{default:e.TrialWarning}}))}),"TrialWarning"),he=(0,l.default)(H.g).attrs({padding:[2],color:"textLite"}).withConfig({displayName:"spacePanel__ListHeader",componentId:"sc-1275zgk-0"})([""]),be=function(e){return r.createElement(o.Flex,(0,i.Z)({alignItems:"center",gap:2},e),r.createElement(ue,null,r.createElement(o.TextFemto,{strong:!0,color:"text"},"ADMIN")),r.createElement(o.Flex,{opacity:"medium"},r.createElement(o.Icon,{name:"padlock",size:"small",width:"18px",height:"18px",color:"text"})))},Ee={iconWidth:"14px",iconHeight:"14px",padding:[1,2],gap:2,isSidebar:!0,textColor:"textNoFocus",iconColor:"textNoFocus",Wrapper:o.TextSmall},ve=function(e){var t=e.toggleSpacePanel,n=(0,E.OS)(),c=(0,d.Z)(),l=(0,a.Z)(c,4),s=l[0],u=l[2],p=l[3],m=(0,se.Z)("manageInvitations"),g=(0,a.Z)(m,2)[1],f=(0,E.Q6)(),h=(0,ge.Z)().onIntegrationsClick;return r.createElement(r.Fragment,null,s&&r.createElement(me.Z,{title:"Integrations",onClose:p}),r.createElement(H.Z,{"data-testid":"spacesPanel",isOpen:!0,label:r.createElement(pe,{onToggle:t},n.name),headerTestId:"spacesPanel-activeSpaceHeader",Header:he},r.createElement(o.Flex,{column:!0,padding:[2,0,1],"data-testid":"spacesPanel-menuList"},r.createElement(r.Suspense,{fallback:""},r.createElement(fe,{flavour:"sidebar"})),r.createElement(U.Z,(0,i.Z)({onClick:h,testid:"agentDashboard-addIntegrations",dataGa:"integrations::click-add-integrations::sideMenu",icon:"integrations"},Ee),"Integrations"),f?null:r.createElement(r.Fragment,null,r.createElement(b.Z,{permission:"node:Create"},(function(e){return r.createElement(U.Z,(0,i.Z)({actions:e?null:r.createElement(be,{"data-testid":"adminWarning-notAdmin"}),disabled:!e,onClick:u,testid:"spacesPanel-claimNodes",icon:"nodes_hollow"},Ee),"Connect Nodes")})),r.createElement(b.Z,{permission:"space:InviteUser"},(function(e){return r.createElement(U.Z,(0,i.Z)({actions:e?null:r.createElement(be,{"data-testid":"adminWarning-cannotInvite"}),disabled:!e,onClick:g,testid:"spacesPanel-inviteUsers",icon:"user"},Ee),"Invite Users")}))))))},xe=function(e){var t=e.spacePanelCollapsed,n=e.toggleSpacePanel;return r.createElement(o.Collapsible,{width:56,background:"sideBar",border:{side:"right",color:"borderSecondary"},open:!t,direction:"horizontal"},r.createElement(o.Flex,{flex:!0,width:56,column:!0,overflow:{vertical:"hidden"},padding:[2,0]},r.createElement(ve,{toggleSpacePanel:n}),r.createElement(o.Flex,{overflow:{vertical:"auto"},flex:!0,column:!0},r.createElement(ie,null),r.createElement(ee,null))))},we=(0,r.memo)((function(){var e=(0,c.kq)("spacePanelCollapsed"),t=(0,a.Z)(e,2),n=t[0],i=t[1],l=(0,ge.Z)(),s=l.isIntegrationsVisible,u=l.hideIntegrations,d=(0,r.useCallback)((function(){return i(!n)}),[n]);return(0,r.useLayoutEffect)((function(){var e=setTimeout((function(){return window.dispatchEvent(new Event("resize"))}),400);return function(){return clearTimeout(e)}}),[n]),r.createElement(o.Flex,null,r.createElement(B,{spacePanelCollapsed:n,toggleSpacePanel:d}),r.createElement(xe,{spacePanelCollapsed:n,toggleSpacePanel:d}),s&&r.createElement(me.Z,{title:"Integrations",onClose:u,flavour:"integrations"}))}))},11060:function(e,t,n){var a=n(1702),r=Error,o=a("".replace),c=String(new r("zxcasd").stack),i=/\n\s*at [^:]*:[^\n]*/,l=i.test(c);e.exports=function(e,t){if(l&&"string"==typeof e&&!r.prepareStackTrace)for(;t--;)e=o(e,i,"");return e}},5392:function(e,t,n){var a=n(68880),r=n(11060),o=n(22914),c=Error.captureStackTrace;e.exports=function(e,t,n,i){o&&(c?c(e,t):a(e,"stack",r(n,i)))}},22914:function(e,t,n){var a=n(47293),r=n(79114);e.exports=!a((function(){var e=new Error("a");return!("stack"in e)||(Object.defineProperty(e,"stack",r(1,7)),7!==e.stack)}))},58340:function(e,t,n){var a=n(70111),r=n(68880);e.exports=function(e,t){a(t)&&"cause"in t&&r(e,"cause",t.cause)}},56277:function(e,t,n){var a=n(41340);e.exports=function(e,t){return void 0===e?arguments.length<2?"":t:a(e)}},56967:function(e,t,n){var a=n(82109),r=n(47976),o=n(79518),c=n(27674),i=n(99920),l=n(70030),s=n(68880),u=n(79114),d=n(58340),p=n(5392),m=n(20408),g=n(56277),f=n(5112)("toStringTag"),h=Error,b=[].push,E=function(e,t){var n,a=r(v,this);c?n=c(new h,a?o(this):v):(n=a?this:l(v),s(n,f,"Error")),void 0!==t&&s(n,"message",g(t)),p(n,E,n.stack,1),arguments.length>2&&d(n,arguments[2]);var i=[];return m(e,b,{that:i}),s(n,"errors",i),n};c?c(E,h):i(E,h,{name:!0});var v=E.prototype=l(h.prototype,{constructor:u(1,E),message:u(1,""),name:u(1,"AggregateError")});a({global:!0,constructor:!0,arity:2},{AggregateError:E})},9170:function(e,t,n){n(56967)},34668:function(e,t,n){var a=n(82109),r=n(46916),o=n(19662),c=n(35005),i=n(78523),l=n(12534),s=n(20408),u=n(80612),d="No one promise resolved";a({target:"Promise",stat:!0,forced:u},{any:function(e){var t=this,n=c("AggregateError"),a=i.f(t),u=a.resolve,p=a.reject,m=l((function(){var a=o(t.resolve),c=[],i=0,l=1,m=!1;s(e,(function(e){var o=i++,s=!1;l++,r(a,t,e).then((function(e){s||m||(m=!0,u(e))}),(function(e){s||m||(s=!0,c[o]=e,--l||p(new n(c,d)))}))})),--l||p(new n(c,d))}));return m.error&&p(m.value),a.promise}})}}]);