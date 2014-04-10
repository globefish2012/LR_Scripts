Action()
{
	
	web_url("qrtapp", 
		"URL=http://qrt-staging.avnet.com/qrtapp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t54.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("eaidologin", 
		"URL=https://edge-test.avnet.com/eai/EAIavnet/eaidologin", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://edge-test.avnet.com/vouchfor?avnet&http://qrt-staging.avnet.com/qrtapp", 
		"Snapshot=t55.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("logo.gif", 
		"URL=https://edge-test.avnet.com/eai/EAIavnet/logo.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://edge-test.avnet.com/eai/EAIavnet/eaidologin", 
		"Snapshot=t56.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("map.gif", 
		"URL=https://edge-test.avnet.com/eai/EAIavnet/map.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://edge-test.avnet.com/eai/EAIavnet/eaidologin", 
		"Snapshot=t57.inf", 
		LAST);

	web_url("favicon.ico", 
		"URL=https://edge-test.avnet.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t58.inf", 
		LAST);

	web_concurrent_end(NULL);

	/*login as {username}*/

	lr_think_time(26);
	
	lr_start_transaction("SMR_Login");
	
	// id="javax.faces.ViewState" value="-5587057281831271945:5770956977240206005" autocomplete="off" />
	web_reg_save_param_ex(
		"ParamName=ViewState",
		"LB=javax.faces.ViewState\" value=\"",
		"RB=\" autocomplete",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_reg_save_param_ex(
		"ParamName=usernameactual",
		"LB=<span class=\"userName\">",
		"RB=</span",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

		
	web_submit_data("eaidologin_2", 
		"Action=https://edge-test.avnet.com/eai/EAIavnet/eaidologin", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t60.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=username", "Value={username}", ENDITEM, 
		"Name=password", "Value=Tivoli01", ENDITEM, 
		"Name=login-form-type", "Value=pwd", ENDITEM, 
		"Name=pageName", "Value=eailogin.jsp", ENDITEM, 
		LAST);

	lr_end_transaction("SMR_Login",LR_AUTO);
	
	web_concurrent_start(NULL);

	web_url("theme.css.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/theme.css.jsf?ln=primefaces-aristo", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t61.inf", 
		LAST);

	web_url("ui.multiselect.css.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/ui.multiselect.css.jsf?ln=css&conversationContext=1", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t62.inf", 
		LAST);

	web_url("qrt_icon.css.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/qrt_icon.css.jsf?ln=css&conversationContext=1", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t63.inf", 
		LAST);

	web_url("primefaces.css.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/primefaces.css.jsf?ln=primefaces&conversationContext=1", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t64.inf", 
		LAST);

	web_url("watermark.css.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/watermark/watermark.css.jsf?ln=primefaces&conversationContext=1", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t65.inf", 
		LAST);

	web_url("jquery.js.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/jquery/jquery.js.jsf?ln=primefaces&conversationContext=1", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t66.inf", 
		LAST);

	web_url("jquery-plugins.js.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/jquery/jquery-plugins.js.jsf?ln=primefaces&conversationContext=1", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t67.inf", 
		LAST);

	web_url("primefaces.js.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/primefaces.js.jsf?ln=primefaces&conversationContext=1", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t68.inf", 
		LAST);

	web_url("watermark.js.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/watermark/watermark.js.jsf?ln=primefaces&conversationContext=1", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t69.inf", 
		LAST);

	web_url("idlemonitor.js.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/idlemonitor/idlemonitor.js.jsf?ln=primefaces&conversationContext=1", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t70.inf", 
		LAST);

	web_url("istyle.css", 
		"URL=http://qrt-staging.avnet.com/qrtapp/styles/istyle.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t71.inf", 
		LAST);

	web_url("ajaxloadingbar.gif", 
		"URL=http://qrt-staging.avnet.com/qrtapp/resources/images/ajaxloadingbar.gif?conversationContext=1", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t72.inf", 
		LAST);

	web_url("qrt_Dashboard.js.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/qrt_Dashboard.js.jsf?ln=javascript&conversationContext=1", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t76.inf", 
		LAST);

	web_url("qrt_util.js.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/qrt_util.js.jsf?ln=javascript&conversationContext=1", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t79.inf", 
		LAST);

	web_url("qrt_BRUtil.js.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/qrt_BRUtil.js.jsf?ln=javascript&conversationContext=1", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t80.inf", 
		LAST);

	web_url("json2.js.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/json2.js.jsf?ln=javascript&conversationContext=1", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t81.inf", 
		LAST);

	web_url("ui.multiselect.js.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/ui.multiselect.js.jsf?ln=javascript&conversationContext=1", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t82.inf", 
		LAST);

	web_url("avnetico.ico", 
		"URL=http://qrt-staging.avnet.com/qrtapp/resources/images/avnetico.ico", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t84.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("iQuoteIcons.png", 
		"URL=http://qrt-staging.avnet.com/qrtapp/resources/images/iQuoteIcons.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t73.inf", 
		LAST);

	web_url("iquote-logo.png", 
		"URL=http://qrt-staging.avnet.com/qrtapp/resources/css/icons/iquote-logo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t74.inf", 
		LAST);

	web_url("nav-arrow.gif", 
		"URL=http://qrt-staging.avnet.com/qrtapp/resources/images/nav-arrow.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t75.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("icon-expanded.png", 
		"URL=http://qrt-staging.avnet.com/qrtapp/resources/css/icons/icon-expanded.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t77.inf", 
		LAST);

	web_url("ui-icons_38667f_256x240.png.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/images/ui-icons_38667f_256x240.png.jsf?ln=primefaces-aristo", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t78.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("ui-icons_616161_256x240.png.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/images/ui-icons_616161_256x240.png.jsf?ln=primefaces-aristo", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t83.inf", 
		LAST);

	/*click booked order*/

	lr_think_time(15);

	web_url("ui-bg_flat_0_2d5972_40x100.png.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/images/ui-bg_flat_0_2d5972_40x100.png.jsf?ln=primefaces-aristo", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t86.inf", 
		LAST);

	// Faces-Request: partial/ajax
	web_add_header("Faces-Request", "partial/ajax");
	
	web_submit_data("Dashboard.jsf", 
		"Action=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf?conversationContext=1", 
		"Method=POST", 
		"RecContentType=text/xml", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t87.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=javax.faces.partial.ajax", "Value=true", ENDITEM, 
		"Name=javax.faces.source", "Value=dashboardForm:tabViewTable", ENDITEM, 
		"Name=javax.faces.partial.execute", "Value=dashboardForm:tabViewTable", ENDITEM, 
		"Name=javax.faces.partial.render", "Value=dashboardForm:tabViewTable:wqSearchFilter dashboardForm:tabViewTable:smxWorkQueueDataTable dashboardForm:tabViewTable:smxBookedOrdersDataTable dashboardForm:tabViewTable:workQueuePaginationLinks dashboardForm:tabViewTable:bookedOrdersPaginationLinks dashboardForm:tabViewTable", ENDITEM, 
		"Name=javax.faces.behavior.event", "Value=tabChange", ENDITEM, 
		"Name=javax.faces.partial.event", "Value=tabChange", ENDITEM, 
		"Name=dashboardForm:tabViewTable_contentLoad", "Value=true", ENDITEM, 
		"Name=dashboardForm:tabViewTable_newTab", "Value=dashboardForm:tabViewTable:bookedOrders", ENDITEM, 
		"Name=dashboardForm:tabViewTable_tabindex", "Value=1", ENDITEM, 
		"Name=dashboardForm", "Value=dashboardForm", ENDITEM, 
		"Name=dashboardForm:j_idt74_input", "Value={usernameactual}", ENDITEM, 
		"Name=dashboardForm:j_idt74_hinput", "Value={username}", ENDITEM, 
		"Name=dashboardForm:dashboardWarnMsgs", "Value=", ENDITEM, 
		"Name=dashboardForm:catchAllMessages", "Value=", ENDITEM, 
		"Name=dashboardForm:messagesPanel_collapsed", "Value=true", ENDITEM, 
		"Name=dashboardForm:tabViewTable:filterByCustomerName", "Value=", ENDITEM, 
		"Name=dashboardForm:tabViewTable:wqExtendedValueOperator", "Value=BLANK", ENDITEM, 
		"Name=dashboardForm:tabViewTable:wqExtendedValueFilter", "Value=", ENDITEM, 
		"Name=dashboardForm:tabViewTable:filterByCreatedDateList", "Value=BETWEEN", ENDITEM, 
		"Name=dashboardForm:tabViewTable:filterByCreatedDateStart_input", "Value=1/23/14", ENDITEM, 
		"Name=dashboardForm:tabViewTable:filterByCreateDateEnd_input", "Value=2/7/14", ENDITEM, 
		"Name=dashboardForm:tabViewTable:filterByFollowUpDateList", "Value=BLANK", ENDITEM, 
		"Name=dashboardForm:tabViewTable:filterByFollowUpDateStart_input", "Value=", ENDITEM, 
		"Name=dashboardForm:tabViewTable:filterByFollowUpDateEnd_input", "Value=", ENDITEM, 
		"Name=dashboardForm:tabViewTable:pagePerView", "Value=25", ENDITEM, 
		"Name=dashboardForm:tabViewTable_activeIndex", "Value=1", ENDITEM, 
		"Name=javax.faces.ViewState", "Value={ViewState}", ENDITEM, 
		LAST);

	/*enter 2030825*/

	/*click go button*/
	
	lr_start_transaction("BP14_QuickSearch_SearchQT");

	web_reg_find("Search=Body",
		"Text=Add New Line",
		LAST);

	web_submit_data("Dashboard.jsf_2", 
		"Action=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf?conversationContext=1", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t88.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=commonHeaderPart", "Value=commonHeaderPart", ENDITEM, 
		"Name=commonHeaderPart:eventComponent:events_selection", "Value=", ENDITEM, 
		"Name=commonHeaderPart:quickSearchErrorMsg", "Value={QuoteID}", ENDITEM, 
		"Name=commonHeaderPart:idBtnGo", "Value=Go", ENDITEM, 
		"Name=commonHeaderPart:logoutTimer", "Value=49683", ENDITEM, 
		"Name=javax.faces.ViewState", "Value={ViewState}", ENDITEM, 
		LAST);

	lr_end_transaction("BP14_QuickSearch_SearchQT",LR_AUTO);
	
	web_concurrent_start(NULL);

	web_url("datepicker.css.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/datepicker.css.jsf?ln=css&conversationContext=1", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/common/QRTQuoteSummary.jsf?quoteID={QuoteID}&conversationContext=1", 
		"Snapshot=t89.inf", 
		LAST);

	web_url("fileupload.css.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/fileupload/fileupload.css.jsf?ln=primefaces&conversationContext=1", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/common/QRTQuoteSummary.jsf?quoteID={QuoteID}&conversationContext=1", 
		"Snapshot=t90.inf", 
		LAST);

	web_url("iquote.css.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/iquote.css.jsf?ln=css&conversationContext=1", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/common/QRTQuoteSummary.jsf?quoteID={QuoteID}&conversationContext=1", 
		"Snapshot=t91.inf", 
		LAST);

	web_url("jsf.js.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/jsf.js.jsf?ln=javax.faces&conversationContext=1", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/common/QRTQuoteSummary.jsf?quoteID={QuoteID}&conversationContext=1", 
		"Snapshot=t92.inf", 
		LAST);

	web_url("fileupload.js.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/fileupload/fileupload.js.jsf?ln=primefaces&conversationContext=1", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/common/QRTQuoteSummary.jsf?quoteID={QuoteID}&conversationContext=1", 
		"Snapshot=t93.inf", 
		LAST);

	web_url("ajaxloadingbar.gif_2", 
		"URL=http://qrt-staging.avnet.com/qrtapp/resources/images/ajaxloadingbar.gif?conversationContext=1", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t96.inf", 
		LAST);

	web_url("ajaxloading.gif.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/ajaxloading.gif.jsf?ln=images", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/common/QRTQuoteSummary.jsf?quoteID={QuoteID}&conversationContext=1", 
		"Snapshot=t98.inf", 
		LAST);

	web_url("avnetico.ico_2", 
		"URL=http://qrt-staging.avnet.com/qrtapp/resources/images/avnetico.ico", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t102.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("iQuoteIcons.png_2", 
		"URL=http://qrt-staging.avnet.com/qrtapp/resources/images/iQuoteIcons.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t94.inf", 
		LAST);

	web_url("qrt_default2.css", 
		"URL=http://qrt-staging.avnet.com/qrtapp/customresources/qrt_default2.css?screenWidth=1280", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/common/QRTQuoteSummary.jsf?quoteID={QuoteID}&conversationContext=1", 
		"Snapshot=t95.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("iquote-logo.png_2", 
		"URL=http://qrt-staging.avnet.com/qrtapp/resources/css/icons/iquote-logo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t97.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("datepicker.js.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/datepicker.js.jsf?ln=javascript&conversationContext=1", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/common/QRTQuoteSummary.jsf?quoteID={QuoteID}&conversationContext=1", 
		"Snapshot=t99.inf", 
		LAST);

	web_url("qrt_quote_summary.js.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/qrt_quote_summary.js.jsf?ln=javascript&conversationContext=1", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/common/QRTQuoteSummary.jsf?quoteID={QuoteID}&conversationContext=1", 
		"Snapshot=t100.inf", 
		LAST);

	web_url("dot_clear.gif.jsf", 
		"URL=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/spacer/dot_clear.gif.jsf?ln=primefaces", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/common/QRTQuoteSummary.jsf?quoteID={QuoteID}&conversationContext=1", 
		"Snapshot=t101.inf", 
		LAST);

	web_concurrent_end(NULL);

	/*go back to dashboard*/

	lr_think_time(22);

	web_url("nav-arrow.gif_2", 
		"URL=http://qrt-staging.avnet.com/qrtapp/resources/images/nav-arrow.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t103.inf", 
		LAST);

	web_reg_find("Search=Body",
		"Text=View Work Queue For",
		LAST);

	web_url("qrt_redirect", 
		"URL=http://qrt-staging.avnet.com/qrtapp/qrt_redirect?conversationContext=1&convName=dashboardBackingBean&tabIndex=0&nextView=pages/smx/Dashboard.jsf", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/common/QRTQuoteSummary.jsf?quoteID={QuoteID}&conversationContext=1", 
		"Snapshot=t104.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("istyle.css_2", 
		"URL=http://qrt-staging.avnet.com/qrtapp/styles/istyle.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf?conversationContext=1", 
		"Snapshot=t105.inf", 
		LAST);

	web_url("ajaxloadingbar.gif_3", 
		"URL=http://qrt-staging.avnet.com/qrtapp/resources/images/ajaxloadingbar.gif?conversationContext=1", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t107.inf", 
		LAST);

	web_url("avnetico.ico_3", 
		"URL=http://qrt-staging.avnet.com/qrtapp/resources/images/avnetico.ico", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t111.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("iQuoteIcons.png_3", 
		"URL=http://qrt-staging.avnet.com/qrtapp/resources/images/iQuoteIcons.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t106.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("iquote-logo.png_3", 
		"URL=http://qrt-staging.avnet.com/qrtapp/resources/css/icons/iquote-logo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t108.inf", 
		LAST);

	web_url("nav-arrow.gif_3", 
		"URL=http://qrt-staging.avnet.com/qrtapp/resources/images/nav-arrow.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t109.inf", 
		LAST);

	web_url("icon-expanded.png_2", 
		"URL=http://qrt-staging.avnet.com/qrtapp/resources/css/icons/icon-expanded.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t110.inf", 
		LAST);

	web_concurrent_end(NULL);

	/*lgoout*/

	lr_think_time(10);

	lr_start_transaction("SMR_Logout");
	
	web_url("j_spring_security_logout", 
		"URL=http://qrt-staging.avnet.com/qrtapp/j_spring_security_logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf?conversationContext=1", 
		"Snapshot=t112.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("pkmslogout", 
		"URL=http://edge-test.avnet.com/pkmslogout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://edge-test.avnet.com/pkmslogout?filename=qrt-stage-logout.htm", 
		"Snapshot=t113.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("pkmslogout_2", 
		"URL=http://qrt-staging.avnet.com/pkmslogout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://edge-test.avnet.com/pkmslogout?filename=qrt-stage-logout.htm", 
		"Snapshot=t114.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("pkmslogout_3", 
		"URL=https://edge-test.avnet.com/pkmslogout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://edge-test.avnet.com/pkmslogout?filename=qrt-stage-logout.htm", 
		"Snapshot=t115.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("PD-H-SESSION-ID=; DOMAIN=edge-test.avnet.com");

	web_add_cookie("JSESSIONID=; DOMAIN=edge-test.avnet.com");

	web_add_cookie("PD-ECC=; DOMAIN=edge-test.avnet.com");

	web_add_cookie("ONTCred=; DOMAIN=edge-test.avnet.com");
	
	web_url("qrtapp_2", 
		"URL=http://qrt-staging.avnet.com/qrtapp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://edge-test.avnet.com/pkmslogout?filename=qrt-stage-logout.htm", 
		"Snapshot=t116.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("eaidologin_3", 
		"URL=https://edge-test.avnet.com/eai/EAIavnet/eaidologin", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://edge-test.avnet.com/vouchfor?avnet&http://qrt-staging.avnet.com/qrtapp", 
		"Snapshot=t117.inf", 
		"Mode=HTTP", 
		LAST);
	
	lr_end_transaction("SMR_Logout",LR_AUTO);

	return 0;
}
