!function(){try{var e="undefined"!=typeof window?window:"undefined"!=typeof global?global:"undefined"!=typeof self?self:{},t=(new Error).stack;t&&(e._sentryDebugIds=e._sentryDebugIds||{},e._sentryDebugIds[t]="5efb066b-85eb-4f9e-b200-c0c2ba7edf9b",e._sentryDebugIdIdentifier="sentry-dbid-5efb066b-85eb-4f9e-b200-c0c2ba7edf9b")}catch(e){}}();var _global="undefined"!==typeof window?window:"undefined"!==typeof global?global:"undefined"!==typeof self?self:{};_global.SENTRY_RELEASE={id:"8b7b01b6c705cf50f8050ce0fb8fc6b58fe68567"},(self.webpackChunkcloud_frontend=self.webpackChunkcloud_frontend||[]).push([[1178],{1178:function(e,t,n){n.r(t),n.d(t,{MagicLinkSent:function(){return m}});n(74916),n(64765);var i=n(67294),a=n(71893),c=n(89250),o=n(93416),r=n(15794),l=n(27266),d=n(87562),f=n(1043),s=n(39979),u=n(63346),b=(0,a.default)(o.Text).attrs({role:"button"}).withConfig({displayName:"magicLinkSent__ButtonText",componentId:"sc-ua6kmo-0"})(["cursor:pointer;"]),g=(0,s.Z)(b),m=function(){var e=(0,c.TH)(),t=e.search,n=e.state,a=((void 0===n?{}:n)||{}).email,r=window.location.hash,s=(0,f.iM)(),b=(0,i.useCallback)((function(){var e=encodeURIComponent((0,d.$)("/sign-in".concat(t),r)),n=encodeURIComponent((0,d.$)("/sign-up/verify".concat(t),r));s({email:a,redirectURI:e,registerURI:n,resend:!0})}),[a]);return i.createElement(u.ZP,{feature:"MagicLinkSent",email:a},i.createElement(l.Z,{"data-testid":"magicLinkSent"},i.createElement(o.H1,{textAlign:"center"},"Check your email!"),i.createElement(o.Flex,{column:!0,padding:[0,0,8,0],gap:8,justifyContent:"between",alignItems:"center"},i.createElement(o.Flex,{column:!0,gap:1,alignItems:"center"},i.createElement(o.TextBig,{textAlign:"center"},"We have sent an email to ",i.createElement(o.TextBig,{strong:!0},!!a&&a),"."),i.createElement(o.TextBig,{textAlign:"center"},"Please find this email (check your spam folder too) and click the button there to continue.")),i.createElement(o.Text,{textAlign:"center"},"Didn't receive it?"," ",i.createElement(g,{onClick:b,color:"primary","data-ga":"magicLikSent::click-resent::check-email-view"},"Click here to resend it.")))))};t.default=(0,r.k)(m,"light")}}]);