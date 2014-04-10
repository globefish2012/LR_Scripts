Action()
{
	lr_vuser_status_message("IP address: %s", lr_get_vuser_ip());

	web_url("qrtapp", 
		"URL=http://qrt-staging.avnet.com/qrtapp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Search=Body",
		"Text=Avnet ID",
		LAST);

	web_url("eaidologin", 
		"URL=https://edge-test.avnet.com/eai/EAIavnet/eaidologin", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://edge-test.avnet.com/vouchfor?avnet&http://qrt-staging.avnet.com/qrtapp", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	/*login using 004996*/
	
	lr_start_transaction("PS_Login");

	web_reg_find("Search=Body",
		"Text=Quoted Manufacturer",
		LAST);

	web_submit_form("eaidologin_2", 
		"Snapshot=t4.inf", 
		ITEMDATA, 
		"Name=username", "Value={PSID}", ENDITEM, 
		"Name=password", "Value=Tivoli01", ENDITEM, 
		EXTRARES, 
		"Url=http://qrt-staging.avnet.com/qrtapp/resources/images/iQuoteIcons.png", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", ENDITEM, 
		"Url=http://qrt-staging.avnet.com/qrtapp/resources/css/icons/iquote-logo.png", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", ENDITEM, 
		"Url=http://qrt-staging.avnet.com/qrtapp/resources/images/nav-arrow.gif", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", ENDITEM, 
		"Url=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/images/ui-icons_38667f_256x240.png.jsf?ln=primefaces-aristo", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", ENDITEM, 
		"Url=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/qrt_util.js.jsf?ln=javascript&conversationContext=1", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", ENDITEM, 
		"Url=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/qrt_BRUtil.js.jsf?ln=javascript&conversationContext=1", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", ENDITEM, 
		"Url=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/json2.js.jsf?ln=javascript&conversationContext=1", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", ENDITEM, 
		"Url=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/ui.multiselect.js.jsf?ln=javascript&conversationContext=1", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", ENDITEM, 
		"Url=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/qrt_psquote_list.js.jsf?ln=javascript&conversationContext=1", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", ENDITEM, 
		"Url=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/images/ui-icons_616161_256x240.png.jsf?ln=primefaces-aristo", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", ENDITEM, 
		"Url=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/spacer/dot_clear.gif.jsf?ln=primefaces", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", ENDITEM, 
		LAST);
	
	lr_end_transaction("PS_Login", LR_AUTO);
	

	/*click QuoteList*/
	
	lr_think_time(4);	
	
	if (atoi(lr_eval_string("{LnCount}")) < 10)
		lr_start_transaction("BP05_ViewAssignLN_Less10Ln");
	if (atoi(lr_eval_string("{LnCount}")) > 9 && atoi(lr_eval_string("{LnCount}")) < 30) 
		lr_start_transaction("BP05_ViewAssignLN_10To30Ln");
	if (atoi(lr_eval_string("{LnCount}")) >29)
		lr_start_transaction("BP05_ViewAssignLN_Large30Ln");

	web_reg_find("Search=Body",
		"Text=Auth Req",
		LAST);

	web_url("qrt_redirect", 
		"URL=http://qrt-staging.avnet.com/qrtapp/qrt_redirect?conversationContext=1&convName=psQuoteListBackingBean&nextView=pages/psx/psQuoteList.jsf", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);
	
	if (atoi(lr_eval_string("{LnCount}")) < 10)
		lr_end_transaction("BP05_ViewAssignLN_Less10Ln", LR_AUTO);
	if (atoi(lr_eval_string("{LnCount}")) > 9 && atoi(lr_eval_string("{LnCount}")) < 30) 
		lr_end_transaction("BP05_ViewAssignLN_10To30Ln", LR_AUTO);
	if (atoi(lr_eval_string("{LnCount}")) >29)
		lr_end_transaction("BP05_ViewAssignLN_Large30Ln", LR_AUTO);
	
	


//
//	/*click My Dashboard*/
//
//	web_url("qrt_redirect_2", 
//		"URL=http://qrt-staging.avnet.com/qrtapp/qrt_redirect?conversationContext=1&convName=dashboardBackingBean&tabIndex=0&nextView=pages/psx/psxDashboard.jsf", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf?conversationContext=1", 
//		"Snapshot=t7.inf", 
//		"Mode=HTML", 
//		LAST);
//
//
//	/*click Quote List*/
//
//	web_reg_find("Search=Body",
//		"Text=Auth Req",
//		LAST);
//
//	web_url("qrt_redirect_3", 
//		"URL=http://qrt-staging.avnet.com/qrtapp/qrt_redirect?conversationContext=1&convName=psQuoteListBackingBean&nextView=pages/psx/psQuoteList.jsf", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psxDashboard.jsf?conversationContext=1", 
//		"Snapshot=t9.inf", 
//		"Mode=HTML", 
//		LAST);

	/*click Logout*/
	
	lr_start_transaction("PS_Logout");

	web_url("j_spring_security_logout", 
		"URL=http://qrt-staging.avnet.com/qrtapp/j_spring_security_logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf?conversationContext=1", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("JSESSIONID=; DOMAIN=edge-test.avnet.com");

	web_add_cookie("PD-ECC=; DOMAIN=edge-test.avnet.com");

	web_add_cookie("ONTCred=; DOMAIN=edge-test.avnet.com");

	web_url("eaidologin_3", 
		"URL=https://edge-test.avnet.com/eai/EAIavnet/eaidologin", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://edge-test.avnet.com/vouchfor?avnet&http://qrt-staging.avnet.com/qrtapp", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("PS_Logout", LR_AUTO);

	return 0;
}
