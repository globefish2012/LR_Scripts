vuser_init()
{
	lr_save_datetime("%a %b %d %X %Z %Y", TIME_NOW, "SysDate");
	
	web_convert_param(
		"SysDate_URL",
	    "SourceString={SysDate}",
		"SourceEncoding=PLAIN",
		"TargetEncoding=URL",		
		LAST);
		
	
	web_url("qrtapp", 
		"URL=http://qrt-staging.avnet.com/qrtapp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	
	web_url("eaidologin_2",
		"URL=https://edge-test.avnet.com/eai/EAIavnet/eaidologin", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://edge-test.avnet.com/vouchfor?avnet&http://qrt-staging.avnet.com/qrtapp", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("PS_Login");
	
	web_submit_data("eaidologin_3", 
		"Action=https://edge-test.avnet.com/eai/EAIavnet/eaidologin", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=000902", ENDITEM, 
		"Name=password", "Value=Test01", ENDITEM, 
		"Name=login-form-type", "Value=pwd", ENDITEM, 
		"Name=pageName", "Value=eailogin.jsp", ENDITEM, 
		EXTRARES, 
		"Url=http://qrt-staging.avnet.com/qrtapp/javax.faces.resource/qrt_psquote_list.js.jsf?ln=javascript&conversationContext=1", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", ENDITEM, 
		LAST);
	
	lr_end_transaction("PS_Login", LR_AUTO);
	
	web_add_cookie("ONTCred=CC1B45A38EA2774472582D0D1CAC7A2F76A184B912C2C79A5E5DA79925F78BFDA0DCB245A66909CE03AAC3BFD6F8EE06A94E2800FE27750170D1C7BF9C28C12611666C1721D97526BC8C6DA9A3F8C482; DOMAIN=qrt-staging.avnet.com");

	web_url("qrtapp_2", 
		"URL=http://qrt-staging.avnet.com/qrtapp?PD-VFHOST=edge-test.avnet.com&PD-VF=BAGs3DCBgQIBAQICAZoCAQICAQAEAARwpH8NDyCMUa1YdNmmXNCwY/OJWKbtbgxLewn+CQJFHHbDgDavdRBnOFg8i84S/7SHtk9PnwN4eLcTbmqBj2/lKEg/lA60CrS4c1AnmDKAT+KxpsTbVjKWCbpgRF+P/T4o+Z4oK9rutib043PgGY0Vgg==", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/qrtapp/javax.faces.resource/qrt_util.js.jsf?ln=javascript&conversationContext=1", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", ENDITEM, 
		"Url=/qrtapp/javax.faces.resource/json2.js.jsf?ln=javascript&conversationContext=1", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", ENDITEM, 
		"Url=/qrtapp/javax.faces.resource/qrt_BRUtil.js.jsf?ln=javascript&conversationContext=1", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", ENDITEM, 
		"Url=/qrtapp/javax.faces.resource/ui.multiselect.js.jsf?ln=javascript&conversationContext=1", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", ENDITEM, 
		"Url=/qrtapp/javax.faces.resource/qrt_psquote_list.js.jsf?ln=javascript&conversationContext=1", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", ENDITEM, 
		"Url=/qrtapp/resources/images/ajaxloadingbar.gif?conversationContext=1", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", ENDITEM, 
		"Url=/qrtapp/resources/images/iQuoteIcons.png", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", ENDITEM, 
		"Url=/qrtapp/resources/css/icons/iquote-logo.png", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", ENDITEM, 
		"Url=/qrtapp/resources/images/nav-arrow.gif", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", ENDITEM, 
		"Url=/qrtapp/javax.faces.resource/images/ui-icons_616161_256x240.png.jsf?ln=primefaces-aristo", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", ENDITEM, 
		LAST);
	
	return 0;
}
