!function(){try{var e="undefined"!=typeof window?window:"undefined"!=typeof global?global:"undefined"!=typeof self?self:{},n=(new Error).stack;n&&(e._sentryDebugIds=e._sentryDebugIds||{},e._sentryDebugIds[n]="50898fa9-b942-4802-9da0-55672ac332d2",e._sentryDebugIdIdentifier="sentry-dbid-50898fa9-b942-4802-9da0-55672ac332d2")}catch(e){}}();var _global="undefined"!==typeof window?window:"undefined"!==typeof global?global:"undefined"!==typeof self?self:{};_global.SENTRY_RELEASE={id:"8b7b01b6c705cf50f8050ce0fb8fc6b58fe68567"},(self.webpackChunkcloud_frontend=self.webpackChunkcloud_frontend||[]).push([[5112],{46469:function(e,n,a){a.r(n),a.d(n,{default:function(){return E}});var r,d=a(87462),t=a(45987),o=a(67294),l=a(93416),i=a(45916),s=a(60511),u=a(96009),c=a(71893),f=(0,c.default)(l.Flex).withConfig({displayName:"styled__TrialWarningSidebar",componentId:"sc-66x250-0"})(["background-color:",";border-width:1px;border-style:dashed;border-color:",";border-radius:2px;"],(function(e){var n,a=e.type;return(0,l.getColor)(null===(n=u.NY[a])||void 0===n?void 0:n.background)}),(function(e){var n,a=e.type;return(0,l.getColor)(null===(n=u.NY[a])||void 0===n?void 0:n.border)})),p=(0,c.default)(l.Button).withConfig({displayName:"styled__TrialUpgradeButton",componentId:"sc-66x250-1"})(["flex:auto;"]),b=a(66987),g=a(80413),y=a(39979),m=a(82351),v=["canUpgrade"],w=(r=(0,y.Z)(p),function(e){var n=e.canUpgrade,a=(0,t.Z)(e,v);return n?o.createElement(r,a):o.createElement(m.Z,{content:"You don't have permissions to upgrade the plan"},o.createElement(l.Flex,null,o.createElement(r,(0,d.Z)({disabled:!0},a))))}),E=function(e){var n=e.flavour,a=void 0===n?"banner":n,r=(0,s.Z)(),d=r.onTrial,t=r.sidebarWarningVisible,l=r.bannerVisible,c=r.dismissBanner,p=r.daysRemaining,y=r.type,m=r.canUpgrade,v=r.planIsFreeOrEarlyBird,E=(0,g.Z)();return"sidebar"==a&&(t||!d&&v)?o.createElement(f,{type:d?y:"default",column:!0,gap:2,margin:[2],padding:[2],showFreePlanUpgradePrompt:!0},o.createElement(b.Z,{flavour:d?a:"freePlanUpgrade"}),o.createElement(w,{feature:"UpgradeToBusiness",isStart:!0,small:!0,"data-testid":"upgradeToBusiness-sidebar",label:"Upgrade!",canUpgrade:m,onClick:E})):l?o.createElement(i.Z,{testId:"trial-banner",width:"100%",background:u.v8[y],onClose:c,tooltipProps:{align:"top"},zIndex:20},o.createElement(b.Z,{flavour:a,daysRemaining:p,canUpgrade:m,onUpdateClick:E})):null}}}]);