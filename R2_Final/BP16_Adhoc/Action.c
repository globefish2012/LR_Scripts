Action()
{
	web_url("qrtapp", 
		"URL=http://qrt-staging.avnet.com/qrtapp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://edge-test.avnet.com/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_url("eaidologin", 
		"URL=https://edge-test.avnet.com/eai/EAIavnet/eaidologin", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://edge-test.avnet.com/vouchfor?avnet&http://qrt-staging.avnet.com/qrtapp", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	/*login as 001512*/
	
	lr_start_transaction("SMR_Login");
	
	//Jim McAdams
	web_reg_save_param_ex(
		"ParamName=UserName",
		"LB=span class=\"userName\">",
		"RB=<",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_submit_data("eaidologin_2", 
		"Action=https://edge-test.avnet.com/eai/EAIavnet/eaidologin", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={LoginID}", ENDITEM, 
		"Name=password", "Value=Tivoli01", ENDITEM, 
		"Name=login-form-type", "Value=pwd", ENDITEM, 
		"Name=pageName", "Value=eailogin.jsp", ENDITEM, 
		LAST);
	
	lr_end_transaction("SMR_Login", LR_AUTO);

	/*click Create Quote*/

	web_reg_find("Search=Body",
		"Text=Add New Line(s)",
		LAST);

	web_url("qrt_redirect", 
		"URL=http://qrt-staging.avnet.com/qrtapp/qrt_redirect?conversationContext=1&convName=createQuoteBackingBean&nextView=pages/smx/CreateQuote.jsf", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=javax.faces.resource/qrt_create_quote.js.jsf?ln=javascript&conversationContext=1", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/CreateQuote.jsf?conversationContext=1", ENDITEM, 
		LAST);

	/*click My Dashboard*/
	
	//="javax.faces.ViewState" value="1072963233806702804:-4936587566303215028" autocom
	web_reg_save_param_ex(
		"ParamName=ViewState",
		"LB=javax.faces.ViewState\" value=\"",
		"RB=\" autoco",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_url("qrt_redirect_2", 
		"URL=http://qrt-staging.avnet.com/qrtapp/qrt_redirect?conversationContext=1&convName=dashboardBackingBean&tabIndex=0&nextView=pages/smx/Dashboard.jsf", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/CreateQuote.jsf?conversationContext=1", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=javax.faces.resource/images/ui-bg_flat_0_2d5972_40x100.png.jsf?ln=primefaces-aristo", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf?conversationContext=1", ENDITEM, 
		LAST);

	/*click Booked Orders*/

	// Faces-Request: partial/ajax
	web_add_header("Faces-Request", "partial/ajax");
	
	web_submit_data("Dashboard.jsf", 
		"Action=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf?conversationContext=1", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/xml", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf?conversationContext=1", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
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
		"Name=dashboardForm:j_idt74_input", "Value={UserName}", ENDITEM, 
		"Name=dashboardForm:j_idt74_hinput", "Value={LoginID}", ENDITEM, 
		"Name=dashboardForm:dashboardWarnMsgs", "Value=", ENDITEM, 
		"Name=dashboardForm:catchAllMessages", "Value=", ENDITEM, 
		"Name=dashboardForm:messagesPanel_collapsed", "Value=true", ENDITEM, 
		"Name=dashboardForm:tabViewTable:filterByCustomerName", "Value=", ENDITEM, 
		"Name=dashboardForm:tabViewTable:wqExtendedValueOperator", "Value=BLANK", ENDITEM, 
		"Name=dashboardForm:tabViewTable:wqExtendedValueFilter", "Value=", ENDITEM, 
		"Name=dashboardForm:tabViewTable:filterByCreatedDateList", "Value=BETWEEN", ENDITEM, 
		"Name=dashboardForm:tabViewTable:filterByCreatedDateStart_input", "Value=2/16/14", ENDITEM, 
		"Name=dashboardForm:tabViewTable:filterByCreateDateEnd_input", "Value=3/3/14", ENDITEM, 
		"Name=dashboardForm:tabViewTable:filterByFollowUpDateList", "Value=BLANK", ENDITEM, 
		"Name=dashboardForm:tabViewTable:filterByFollowUpDateStart_input", "Value=", ENDITEM, 
		"Name=dashboardForm:tabViewTable:filterByFollowUpDateEnd_input", "Value=", ENDITEM, 
		"Name=dashboardForm:tabViewTable:pagePerView", "Value=25", ENDITEM, 
		"Name=dashboardForm:tabViewTable_activeIndex", "Value=1", ENDITEM, 
		"Name=javax.faces.ViewState", "Value={ViewState}", ENDITEM, 
		LAST);

	/*click Search Quote*/

	web_reg_find("Search=Body",
		"Text=Commodity Code",
		LAST);

	web_url("qrt_redirect_3", 
		"URL=http://qrt-staging.avnet.com/qrtapp/qrt_redirect?conversationContext=1&convName=searchQuoteBackingBean&nextView=pages/common/SearchQuote.jsf", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/smx/Dashboard.jsf?conversationContext=1", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	/*logout*/
	
	lr_start_transaction("SMR_Logout");

	web_add_cookie("JSESSIONID=0000OZEmF8AopeOLmDk_K9zaaNC:15codm8jv; DOMAIN=edge-test.avnet.com");

	web_add_cookie("ONTCred=CC1B45A38EA277445301F0E1A223D758D6687221B7CE46B99C58EDD799B9A8940F09AE935883AA83AEEE41E90B9B3367F23EF2C8AFCDB962A68AECBA742E523D3EDFF7A1E4E9445597656AD814307C23; DOMAIN=edge-test.avnet.com");

	web_add_cookie("PD-H-SESSION-ID=4_0Sg6C-0Tw4mW+ThV-BEko-sTj9kSe8Lk5JRJyXOj1ARWJ5fY; DOMAIN=edge-test.avnet.com");

	web_url("j_spring_security_logout", 
		"URL=http://qrt-staging.avnet.com/qrtapp/j_spring_security_logout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/common/SearchQuote.jsf?conversationContext=1", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("SMR_Logout", LR_AUTO);

	return 0;
}
