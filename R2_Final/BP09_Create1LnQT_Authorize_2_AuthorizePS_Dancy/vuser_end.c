vuser_end()
{
		/*logout*/

	web_add_cookie("ONTCred=CC1B45A38EA2774472582D0D1CAC7A2F76A184B912C2C79A5E5DA79925F78BFDA0DCB245A66909CE03AAC3BFD6F8EE06A94E2800FE27750170D1C7BF9C28C12611666C1721D975267BCCB51EA84EB694; DOMAIN=edge-test.avnet.com");

	web_add_cookie("PD-H-SESSION-ID=4_5dhFCDvOFCEdY5N8OxlqkVD9Vwdcp2-kGZnJSrs9wpLNUYgZ; DOMAIN=edge-test.avnet.com");

	web_url("j_spring_security_logout", 
		"URL=http://qrt-staging.avnet.com/qrtapp/j_spring_security_logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/common/QRTQuoteSummary.jsf?quoteID={QuoteID}&conversationContext=1", 
		"Snapshot=t179.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("JSESSIONID=; DOMAIN=edge-test.avnet.com");

	web_add_cookie("PD-ECC=; DOMAIN=edge-test.avnet.com");

	web_add_cookie("ONTCred=; DOMAIN=edge-test.avnet.com");

	web_url("eaidologin_2", 
		"URL=https://edge-test.avnet.com/eai/EAIavnet/eaidologin", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://edge-test.avnet.com/vouchfor?avnet&http://qrt-staging.avnet.com/qrtapp", 
		"Snapshot=t180.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
