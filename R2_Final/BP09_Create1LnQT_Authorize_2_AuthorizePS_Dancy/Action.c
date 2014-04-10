Action()
{

	web_reg_save_param_ex(
		"ParamName=ViewState1",
		"LB=javax.faces.ViewState\" value=\"",
		"RB=\" autocomplete",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);		



		web_url("qrt_redirect_2", 
		"URL=http://qrt-staging.avnet.com/qrtapp/qrt_redirect?conversationContext=1&convName=psQuoteListBackingBean&nextView=pages/psx/psQuoteList.jsf", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);
	
		
	web_reg_save_param_ex(
		"ParamName=ViewState2",
		"LB=javax.faces.ViewState\" value=\"",
		"RB=\" autocomplete",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);		
	
	
	/*Input 2190739 and click search*/
	//Value1=5474275183234618350:-943957739263900087
	
	
	web_submit_data("psQuoteList.jsf", 
		"Action=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf?conversationContext=1", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/psx/psQuoteList.jsf", 
		"Snapshot=t174.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=commonHeaderPart", "Value=commonHeaderPart", ENDITEM, 
		"Name=commonHeaderPart:quickSearchErrorMsg", "Value={QuoteID}", ENDITEM, 
		"Name=commonHeaderPart:idBtnGo", "Value=Go", ENDITEM, 
		"Name=commonHeaderPart:logoutTimer", "Value=19289", ENDITEM, 
		"Name=javax.faces.ViewState", "Value={ViewState1}", ENDITEM, 
		EXTRARES, 
		"Url=/qrtapp/javax.faces.resource/datepicker.js.jsf?ln=javascript&conversationContext=1", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/common/QRTQuoteSummary.jsf?quoteID={QuoteID}&conversationContext=1", ENDITEM, 
		"Url=/qrtapp/javax.faces.resource/jquery.contextMenu.js.jsf?ln=javascript&conversationContext=1", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/common/QRTQuoteSummary.jsf?quoteID={QuoteID}&conversationContext=1", ENDITEM, 
		"Url=/qrtapp/javax.faces.resource/qrt_primeface.js.jsf?ln=javascript&conversationContext=1", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/common/QRTQuoteSummary.jsf?quoteID={QuoteID}&conversationContext=1", ENDITEM, 
		"Url=/qrtapp/javax.faces.resource/qrt_quote_summary.js.jsf?ln=javascript&conversationContext=1", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/common/QRTQuoteSummary.jsf?quoteID={QuoteID}&conversationContext=1", ENDITEM, 
		"Url=/qrtapp/javax.faces.resource/images/ui-bg_flat_0_2d5972_40x100.png.jsf?ln=primefaces-aristo", "Referer=http://qrt-staging.avnet.com/qrtapp/pages/common/QRTQuoteSummary.jsf?quoteID={QuoteID}&conversationContext=1", ENDITEM, 
		LAST);
	

	web_convert_param("ViewState2_URL",
	"SourceString={ViewState2}",
	"SourceEncoding=HTML",
	"TargetEncoding=URL",
	LAST);
		
	web_reg_save_param_ex(
		"ParamName=UniqueID",
		"LB=quot;1-",
		"RB=&",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);
	
	/*Click X*/
	//Value2=977954555347022656:6250346807562933382
	//"Name=quoteSummary:todayDateId", "Value=Thu Apr 03 18:39:15 MST 2014", ENDITEM, 
	web_submit_data("QRTQuoteSummary.jsf", 
		"Action=http://qrt-staging.avnet.com/qrtapp/pages/common/QRTQuoteSummary.jsf?conversationContext=1&quoteID={QuoteID}", 
		"Method=POST", 
		"RecContentType=text/xml", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/common/QRTQuoteSummary.jsf?quoteID={QuoteID}&conversationContext=1", 
		"Snapshot=t175.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=javax.faces.partial.ajax", "Value=true", ENDITEM, 
		"Name=javax.faces.source", "Value=quoteSummary:licPanel:j_idt2044:0:j_idt2045", ENDITEM, 
		"Name=javax.faces.partial.execute", "Value=quoteSummary:licPanel:j_idt2044:0:j_idt2045", ENDITEM, 
		"Name=javax.faces.partial.render", "Value=quoteSummary:searchFilterDial:dialFilter quoteSummary:licPanel:lineItemDataTableOutputPanel quoteSummary:licPanel:filteredByOutputPanel  quoteSummary:licPanel:quoteLinePaginationLinks quoteSummary:licPanel:extendedValueForAllItems quoteSummary:idHidLineItemTableJsonOriginal quoteSummary:idHiddenLiJsonVal", ENDITEM, 
		"Name=quoteSummary:licPanel:j_idt2044:0:j_idt2045", "Value=quoteSummary:licPanel:j_idt2044:0:j_idt2045", ENDITEM, 
		"Name=removedFilter", "Value=quickFilter", ENDITEM, 
		"Name=quoteSummary", "Value=quoteSummary", ENDITEM, 
		"Name=quoteSummary:partSearchDial:shipToAccountNo", "Value=", ENDITEM, 
		"Name=quoteSummary:partSearchDial:customerOnDockDate", "Value=", ENDITEM, 
		"Name=quoteSummary:partSearchDial:miscAcctNo", "Value=", ENDITEM, 
		"Name=quoteSummary:partSearchDial:miscBranch", "Value=", ENDITEM, 
		"Name=quoteSummary:partSearchDial:beanCustAccountNo", "Value=", ENDITEM, 
		"Name=quoteSummary:partSearchDial:beanQuantity", "Value=", ENDITEM, 
		"Name=quoteSummary:partSearchDial:beanCustomerPart", "Value=", ENDITEM, 
		"Name=quoteSummary:partSearchDial:originalPartNumber", "Value=", ENDITEM, 
		"Name=quoteSummary:partSearchDial:beanLineItem", "Value=", ENDITEM, 
		"Name=quoteSummary:partSearchDial:enableAddLine", "Value=true", ENDITEM, 
		"Name=quoteSummary:idlen", "Value=1", ENDITEM, 
		"Name=quoteSummary:iduipStatusCount", "Value=0", ENDITEM, 
		"Name=quoteSummary:idpendingStatusCount", "Value=1", ENDITEM, 
		"Name=quoteSummary:idbipStatusCount", "Value=0", ENDITEM, 
		"Name=quoteSummary:idlostSaleStatusCount", "Value=0", ENDITEM, 
		"Name=quoteSummary:idreadyStatusCount", "Value=0", ENDITEM, 
		"Name=quoteSummary:idbookedStatusCount", "Value=0", ENDITEM, 
		"Name=quoteSummary:idoipStatusCount", "Value=0", ENDITEM, 
		"Name=quoteSummary:idNewStatusCount", "Value=0", ENDITEM, 
		"Name=quoteSummary:idAuthorizedStatusCount", "Value=0", ENDITEM, 
		"Name=quoteSummary:idAllUipStatusCount", "Value=0", ENDITEM, 
		"Name=quoteSummary:idAllPendingStatusCount", "Value=1", ENDITEM, 
		"Name=quoteSummary:idAllBipStatusCount", "Value=0", ENDITEM, 
		"Name=quoteSummary:idAllLostSaleStatusCount", "Value=0", ENDITEM, 
		"Name=quoteSummary:idAllReadyStatusCount", "Value=0", ENDITEM, 
		"Name=quoteSummary:idAllBookedStatusCount", "Value=0", ENDITEM, 
		"Name=quoteSummary:idAllOipStatusCount", "Value=0", ENDITEM, 
		"Name=quoteSummary:idAllNewStatusCount", "Value=0", ENDITEM, 
		"Name=quoteSummary:idAllAuthorizedStatusCount", "Value=0", ENDITEM, 
		"Name=quoteSummary:idNumLinesReadyToSubmitToProduct", "Value=0", ENDITEM, 
		"Name=quoteSummary:idUipStatusCountThisPage", "Value=0", ENDITEM, 
		"Name=quoteSummary:idHidLineItemTableJsonChange", "Value=", ENDITEM, 
		"Name=quoteSummary:idHidLineItemTableJsonOriginal", "Value={\"role\":\"PS\"}", ENDITEM, 
		"Name=quoteSummary:idHiddenLiJsonVal", "Value=[]", ENDITEM, 
		"Name=quoteSummary:idTxtCreatedBy", "Value=Traci Mollica", ENDITEM, 
		"Name=quoteSummary:idTxtassignedTo", "Value=Ed McAdams", ENDITEM, 
		"Name=quoteSummary:idTxtBranch", "Value=H010", ENDITEM, 
		"Name=quoteSummary:hfield", "Value=", ENDITEM, 
		"Name=quoteSummary:blockMesssagePanelid", "Value=", ENDITEM, 
		"Name=quoteSummary:idHidIsNationalAccount", "Value=false", ENDITEM, 
		"Name=quoteSummary:idDisableShipToAccountStr", "Value=false", ENDITEM, 
		"Name=quoteSummary:billToAttention", "Value=ACCOUNTS PAYABLE", ENDITEM, 
		"Name=quoteSummary:shipToAttention", "Value=ACCOUNTS PAYABLE", ENDITEM, 
		"Name=quoteSummary:contactPhone", "Value=222-222-2222", ENDITEM, 
		"Name=quoteSummary:billToAddress", "Value=600 HICKS RD\r\nROLLING MEADOWS\r\nIllinois\r\nUnited States\r\n60008", ENDITEM, 
		"Name=quoteSummary:shipToAddress", "Value=600 HICKS RD\r\nROLLING MEADOWS\r\nIllinois\r\nUnited States\r\n60008", ENDITEM, 
		"Name=quoteSummary:shipToAddress1Line", "Value=600 HICKS RD", ENDITEM, 
		"Name=quoteSummary:shipToAddress2Line", "Value=", ENDITEM, 
		"Name=quoteSummary:shipToAddress3Line", "Value=", ENDITEM, 
		"Name=quoteSummary:shipToCity2", "Value=ROLLING MEADOWS", ENDITEM, 
		"Name=quoteSummary:zipCode2", "Value=60008", ENDITEM, 
		"Name=quoteSummary:country2", "Value=US", ENDITEM, 
		"Name=quoteSummary:updateFollowUp", "Value=false", ENDITEM, 
		"Name=quoteSummary:idTxtCustomerQuoteNum", "Value=", ENDITEM, 
		"Name=quoteSummary:hfgfPartNo", "Value=", ENDITEM, 
		"Name=quoteSummary:hTxtShipToLocation", "Value=", ENDITEM, 
		"Name=quoteSummary:idTxtShipToLocation", "Value=", ENDITEM, 
		"Name=quoteSummary:idTxtCustomersHazmatPreference", "Value=", ENDITEM, 
		"Name=quoteSummary:idTxtCreditCategory", "Value=G - Monthly Credit Limit", ENDITEM, 
		"Name=quoteSummary:idTxtCreditReviewStatus", "Value=Not on Review", ENDITEM, 
		"Name=quoteSummary:idTxtResaleCertificate", "Value=Y", ENDITEM, 
		"Name=quoteSummary:idTxtRegistrationMatching", "Value=Auto Match", ENDITEM, 
		"Name=quoteSummary:idTxtCreditLimit", "Value=100000", ENDITEM, 
		"Name=quoteSummary:idTxtPaymentTerms", "Value=NET 45", ENDITEM, 
		"Name=quoteSummary:idTxtStatementOfAssurance", "Value=Statement of Assurance", ENDITEM, 
		"Name=quoteSummary:idTxtSpecialHandlingCode", "Value=01909", ENDITEM, 
		"Name=quoteSummary:idTxtCreditBalance", "Value=-3965.88", ENDITEM, 
		"Name=quoteSummary:idTxtChannelCode", "Value=Defense-Aerospace", ENDITEM, 
		"Name=quoteSummary:deniedPartyStatus", "Value=N - No Check", ENDITEM, 
		"Name=quoteSummary:idTxtCreditAvailable", "Value=103965.88", ENDITEM, 
		"Name=quoteSummary:idTxtTaxIndicator", "Value=N", ENDITEM, 
		"Name=quoteSummary:idTxtAreaAddHeaderComments1", "Value=", ENDITEM, 
		"Name=quoteSummary:idTxtAreaHeaderComments1", "Value=", ENDITEM, 
		"Name=quoteSummary:shipToInformationHidden", "Value=2", ENDITEM, 
		"Name=quoteSummary:quoteSummaryInformationPanel_collapsed", "Value=true", ENDITEM, 
		"Name=quoteSummary:fileName", "Value=", ENDITEM, 
		"Name=quoteSummary:upload_collapsed", "Value=false", ENDITEM, 
		"Name=quoteSummary:quoteSummaryErrorMsgs", "Value=", ENDITEM, 
		"Name=quoteSummary:quoteSummaryLineItemErrorMsgs", "Value=", ENDITEM, 
		"Name=quoteSummary:quoteSummaryLineItemWarnMsgs", "Value=", ENDITEM, 
		"Name=quoteSummary:idDisplayStatistics1", "Value=", ENDITEM, 
		"Name=quoteSummary:quoteStatistics_collapsed", "Value=true", ENDITEM, 
		"Name=quoteSummary:licPanel:idDataTbl_selection", "Value=", ENDITEM, 
		"Name=quoteSummary:licPanel:changedLineNumbers", "Value=", ENDITEM, 
		"Name=quoteSummary:licPanel:changedLineIds", "Value=", ENDITEM, 
		"Name=quoteSummary:licPanel:psSelectedLines", "Value=", ENDITEM, 
		"Name=quoteSummary:licPanel:idHiddenCfgExport", "Value=", ENDITEM, 
		"Name=quoteSummary:licPanel:lineItemSummaryInformationPanel_collapsed", "Value=false", ENDITEM, 
		"Name=quoteSummary:idHidLineItemSize", "Value=0", ENDITEM, 
		"Name=quoteSummary:idlargeQuoteProcessingCompletedFlag", "Value=true", ENDITEM, 
		"Name=quoteSummary:selectedLineItemRowList", "Value=", ENDITEM, 
		"Name=quoteSummary:totalNumbarOfLines", "Value=0", ENDITEM, 
		"Name=quoteSummary:panelCollapsedText", "Value=true", ENDITEM, 
		"Name=quoteSummary:lineItemSizeId", "Value=0", ENDITEM, 
		"Name=quoteSummary:idHighlightRowNumbers", "Value=", ENDITEM, 
		"Name=quoteSummary:idQuoteType", "Value=RFQ", ENDITEM, 
		"Name=quoteSummary:hiddenCfgabcd", "Value=", ENDITEM, 
		"Name=quoteSummary:partSearchPartNo", "Value=", ENDITEM, 
		"Name=quoteSummary:partSearchMfgCode", "Value=", ENDITEM, 
		"Name=quoteSummary:cslHidden", "Value=", ENDITEM, 
		"Name=quoteSummary:currentUser", "Value=false", ENDITEM, 
		"Name=quoteSummary:selectedDebitCustAcct", "Value=", ENDITEM, 
		"Name=quoteSummary:selectedDebitMfgCd", "Value=", ENDITEM, 
		"Name=quoteSummary:selectedDebitPartNum", "Value=", ENDITEM, 
		"Name=quoteSummary:todayDateId", "Value={SysDate}", ENDITEM, 
		"Name=quoteSummary:processAndSaveSuccessId", "Value=", ENDITEM, 
		"Name=javax.faces.ViewState", "Value={ViewState2}", ENDITEM, 
		LAST);

	/*input price 55*/

	/*select price type*/

	/*Click save*/

	lr_think_time(52);

	
	web_custom_request("QRTQuoteSummary.jsf_2", 
		"URL=http://qrt-staging.avnet.com/qrtapp/pages/common/QRTQuoteSummary.jsf?conversationContext=1&quoteID={QuoteID}", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://qrt-staging.avnet.com/qrtapp/pages/common/QRTQuoteSummary.jsf?quoteID={QuoteID}&conversationContext=1", 
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=javax.faces.partial.ajax=true&javax.faces.source=quoteSummary%3AidBtnidBtnProcessAndSaveTestRemoteCommand&javax.faces.partial.execute=quoteSummary&javax.faces.partial.render=quoteSummary%3AqsLineItemOPanel+quoteSummary%3AerrorMessagesPanel+quoteSummary%3AquoteLineStatusCountFields+quoteSummary%3AidClndrFollowUpDate+quoteSummary%3AidCmbLostSale&quoteSummary%3AidBtnidBtnProcessAndSaveTestRemoteCommand=quoteSummary%3AidBtnidBtnProcessAndSaveTestRemoteCommand&quoteSummary=quoteSummary&"
		"quoteSummary%3ApartSearchDial%3AshipToAccountNo=&quoteSummary%3ApartSearchDial%3AcustomerOnDockDate=&quoteSummary%3ApartSearchDial%3AmiscAcctNo=&quoteSummary%3ApartSearchDial%3AmiscBranch=&quoteSummary%3ApartSearchDial%3AbeanCustAccountNo=&quoteSummary%3ApartSearchDial%3AbeanQuantity=&quoteSummary%3ApartSearchDial%3AbeanCustomerPart=&quoteSummary%3ApartSearchDial%3AoriginalPartNumber=&quoteSummary%3ApartSearchDial%3AbeanLineItem=&quoteSummary%3ApartSearchDial%3AenableAddLine=true&"
		"quoteSummary%3Aidlen=1&quoteSummary%3AiduipStatusCount=0&quoteSummary%3AidpendingStatusCount=1&quoteSummary%3AidbipStatusCount=0&quoteSummary%3AidlostSaleStatusCount=0&quoteSummary%3AidreadyStatusCount=0&quoteSummary%3AidbookedStatusCount=0&quoteSummary%3AidoipStatusCount=0&quoteSummary%3AidNewStatusCount=0&quoteSummary%3AidAuthorizedStatusCount=0&quoteSummary%3AidAllUipStatusCount=0&quoteSummary%3AidAllPendingStatusCount=1&quoteSummary%3AidAllBipStatusCount=0&"
		"quoteSummary%3AidAllLostSaleStatusCount=0&quoteSummary%3AidAllReadyStatusCount=0&quoteSummary%3AidAllBookedStatusCount=0&quoteSummary%3AidAllOipStatusCount=0&quoteSummary%3AidAllNewStatusCount=0&quoteSummary%3AidAllAuthorizedStatusCount=0&quoteSummary%3AidNumLinesReadyToSubmitToProduct=0&quoteSummary%3AidUipStatusCountThisPage=0&quoteSummary%3AidHidLineItemTableJsonChange="
		"%7B%221-{UniqueID}%22%3A%7B%22idRts%22%3A%22true%22%2C%22idInputTxtApprovedResale%22%3A%2255%22%2C%22idTxtQuotedResale%22%3A%2255%22%2C%22idResaleSource%22%3A%22APR%22%2C%22idInputTxtPriceType%22%3A%221%22%7D%7D&quoteSummary%3AidHidLineItemTableJsonOriginal=%7B%22role%22%3A%22PS%22%2C%221-{UniqueID}%22%3A%7B%22idAdditionalCost1%22%3A%220.97%22%2C%22idOutTxtLineItem%22%3A%221%22%2C%22idOutTxtAssignedTo%22%3A%22Sue+"
		"Bruner%22%2C%22idTxtQuotedLeadTime%22%3A%2210%22%2C%22idTxtRequestedManufacturer%22%3A%22GLE%22%2C%22idTxtRequestedPartNo%22%3A%22M85528%2F2-24A01A%22%2C%22idMultipleQuantityCostBreaks%22%3A%221+-+3%22%2C%22lineSelectFlag%22%3A%22false%22%2C%22idTxtLineItem%22%3A%221%22%2C%22idTxtQty%22%3A%221%22%2C%22idQuote%22%3A%22{QuoteID}%22%2C%22idMatchSource%22%3A%22PQT%22%2C%22idTxtWarrantyDuration%22%3A%220%22%2C%22idMultipleQuantityPriceBreaks%22%3A%221+-+3%22%2C%22idCmbCommodityCode_input%22%3A%22WI+-+"
		"IT%2FII-INTERCONNECT%22%2C%22idChkBoxDEL%22%3A%22false%22%2C%22idSpecialHandlingCode%22%3A%2201909%22%2C%22idOutTxtPartPackageType%22%3A%22BLK%22%2C%22idOutTxtStat%22%3A%22P%22%2C%22idGroupCode%22%3A%22MIL%22%2C%22idOutTxtSalesMsg%22%3A%22%3C+50+USE+RSL+%3E+50+SEE+"
		"P%2FS%22%2C%22idTxtModified%22%3A%22N%22%2C%22shipToAccountNumber%22%3A%22H01009448000%22%2C%22CCIValHidden%22%3A%22false%22%2C%22idChkBoxPR%22%3A%22true%22%2C%22idTxtPricingStrategy%22%3A%22AHDRSL%22%2C%22idChkBoxPT%22%3A%22false%22%2C%22idHidUniqueKey%22%3A%221-{UniqueID}%22%2C%22idRtd%22%3A%22false%22%2C%22idRadioCciCompletedCableConnectorInventory%22%3A%22false%22%2C%22idOutTxtAuthRequest%22%3A%22PR%22%2C%22idTxtLineItemDataPartNum%22%3A%22M85528%2F2-24A01A%22%2C%22isIntgTop%22%3A%22false%22%2C%2"
		"2idCmbAdditionalChargeReason1%22%3A%22N%22%2C%22idSupplierDate%22%3A%2212%2F14%2F2016%22%2C%22idRts%22%3A%22false%22%2C%22idSupplierStockLastFileUpdated%22%3A%2212%2F29%2F2012%22%2C%22idOnAllocation%22%3A%22N%22%2C%22idInventoryType%22%3A%22N%22%2C%22idCentralStockingLocation%22%3A%22H050%22%2C%22idOutTxtBookResale%22%3A%2243.61%22%2C%22idOutTxtComment%22%3A%22N%22%2C%22idOutTxtInventoryMsg%22%3A%221-200+PCS+1+DAY+ARO+201-UP+START+3+WKS+"
		"ARO%22%2C%22idChkBoxRetain%22%3A%22false%22%2C%22idOutTxtAuthRequestPs%22%3A%22PR%22%2C%22idOutTxtAtpDate%22%3A%2208%2F29%2F2014%22%2C%22idStockProfile%22%3A%22N%22%2C%22idPartDescription%22%3A%22ADAPTER%22%2C%22idSupplierLeadTime%22%3A%2210%22%2C%22idWebResaleUSD%22%3A%2243.61%22%2C%22idPartsHazmatAttribute%22%3A%22NNN%22%2C%22idChkBoxSel%22%3A%22false%22%2C%22idSupplierStockQuantity%22%3A%222439%22%2C%22idShipToAccount%22%3A%22H01009448000%22%2C%22idShipToName%22%3A%22NORTHROP+GRUMMAN+"
		"COR%2FNBPA%22%7D%7D&quoteSummary%3AidHiddenLiJsonVal=%5B%7B%22role%22%3A%22PS%22%2C%22quoteId%22%3A{QuoteID}%2C%22quantityNo%22%3A1%2C%22uniqueKey%22%3A%221-{UniqueID}%22%2C%22lineId%22%3A1%7D%5D&quoteSummary%3AidTxtCreatedBy=Traci+Mollica&quoteSummary%3AidTxtassignedTo=Ed+McAdams&quoteSummary%3AidTxtBranch=H010&quoteSummary%3Ahfield=&quoteSummary%3AblockMesssagePanelid=&quoteSummary%3AidHidIsNationalAccount=false&quoteSummary%3AidDisableShipToAccountStr=false&quoteSummary%3AbillToAddress=600+HICKS+"
		"RD%0D%0AROLLING+MEADOWS%0D%0AIllinois%0D%0AUnited+States%0D%0A60008&quoteSummary%3AshipToAddress=600+HICKS+RD%0D%0AROLLING+MEADOWS%0D%0AIllinois%0D%0AUnited+States%0D%0A60008&quoteSummary%3AshipToAddress1Line=600+HICKS+RD&quoteSummary%3AshipToAddress2Line=&quoteSummary%3AshipToAddress3Line=&quoteSummary%3AshipToCity2=ROLLING+MEADOWS&quoteSummary%3AzipCode2=60008&quoteSummary%3Acountry2=US&quoteSummary%3AupdateFollowUp=false&quoteSummary%3AhfgfPartNo=&quoteSummary%3AhTxtShipToLocation=&"
		"quoteSummary%3AidTxtShipToLocation=&quoteSummary%3AidTxtCustomersHazmatPreference=&quoteSummary%3AidTxtCreditCategory=G+-+Monthly+Credit+Limit&quoteSummary%3AidTxtCreditReviewStatus=Not+on+Review&quoteSummary%3AidTxtResaleCertificate=Y&quoteSummary%3AidTxtRegistrationMatching=Auto+Match&quoteSummary%3AidTxtCreditLimit=100000&quoteSummary%3AidTxtPaymentTerms=NET+45&quoteSummary%3AidTxtStatementOfAssurance=Statement+of+Assurance&quoteSummary%3AidTxtSpecialHandlingCode=01909&"
		"quoteSummary%3AidTxtCreditBalance=-3965.88&quoteSummary%3AidTxtChannelCode=Defense-Aerospace&quoteSummary%3AdeniedPartyStatus=N+-+No+Check&quoteSummary%3AidTxtCreditAvailable=103965.88&quoteSummary%3AidTxtTaxIndicator=N&quoteSummary%3AidTxtAreaHeaderComments1=&quoteSummary%3AshipToInformationHidden=2&quoteSummary%3AquoteSummaryInformationPanel_collapsed=true&quoteSummary%3AfileName=&quoteSummary%3Aupload_collapsed=false&quoteSummary%3AquoteSummaryErrorMsgs=&"
		"quoteSummary%3AquoteSummaryLineItemErrorMsgs=&quoteSummary%3AquoteSummaryLineItemWarnMsgs=&quoteSummary%3AidDisplayStatistics1=&quoteSummary%3AquoteStatistics_collapsed=true&quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AidTxtLineItem=1&quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AidHidUniqueKey=1-{UniqueID}&quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AidHidAuthReqForPs=PR&quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AidHidTxtStat=P&quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AidQuoteId={QuoteID}&"
		"quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AeditedRowIndex=0&quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AidHidmultipleTopFl=true&quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AidTxtLineQty={UniqueID}&quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AidSupplierQuote=&quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AmanufacturerCodeSmart_input=Glenair+(GLE)&quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AidHdnCustomerPartNo=&quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AidTxtLineItemDataPartNum=M85528%2F2-24A01A&"
		"quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AidLOI=&quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AidTxtApprovedCost=&quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AidTxtMaterialGpPercentage=100.00&quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AidInputTxtApprovedResale=55&quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AidInputTxtPriceType=1&quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AidRts=on&quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AidNoBidReasonCd=&quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AidInputTxtApprovedPLT=&"
		"quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AidCmbCommodityCode_input=WI-IT%2FII-INTERCONNECT&quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AidCmbCommodityCode_hinput=WI+-+IT%2FII-INTERCONNECT&quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AunitCostInputHdnBOM=&quoteSummary%3AlicPanel%3AidDataTbl%3A0%3AadditionalCostReasonHiddenBOM=%5Bcom.avnet.qrt.model.domain.AdditionalUnitCostReason%402060206%2C+com.avnet.qrt.model.domain.AdditionalUnitCostReason%402230223%2C+"
		"com.avnet.qrt.model.domain.AdditionalUnitCostReason%402400240%2C+com.avnet.qrt.model.domain.AdditionalUnitCostReason%4025d025d%2C+com.avnet.qrt.model.domain.AdditionalUnitCostReason%4027a027a%2C+com.avnet.qrt.model.domain.AdditionalUnitCostReason%402970297%5D&quoteSummary%3AlicPanel%3AidDataTbl%3A0%3ACCIValHidden=false&quoteSummary%3AlicPanel%3AidDataTbl_selection=&quoteSummary%3AlicPanel%3AchangedLineNumbers=1&quoteSummary%3AlicPanel%3AchangedLineIds=&quoteSummary%3AlicPanel%3ApsSelectedLines=&"
		"quoteSummary%3AlicPanel%3AidHiddenCfgExport=&quoteSummary%3AlicPanel%3AlineItemSummaryInformationPanel_collapsed=false&quoteSummary%3AidHidLineItemSize=0&quoteSummary%3AidlargeQuoteProcessingCompletedFlag=true&quoteSummary%3AselectedLineItemRowList=&quoteSummary%3AtotalNumbarOfLines=0&quoteSummary%3ApanelCollapsedText=true&quoteSummary%3AlineItemSizeId=0&quoteSummary%3AidHighlightRowNumbers=&quoteSummary%3AidQuoteType=RFQ&quoteSummary%3AhiddenCfgabcd=&quoteSummary%3ApartSearchPartNo=&"
		"quoteSummary%3ApartSearchMfgCode=&quoteSummary%3AcslHidden=&quoteSummary%3AcurrentUser=false&quoteSummary%3AselectedDebitCustAcct=&quoteSummary%3AselectedDebitMfgCd=&quoteSummary%3AselectedDebitPartNum=&quoteSummary%3AtodayDateId={SysDate_URL}&quoteSummary%3AprocessAndSaveSuccessId=&javax.faces.ViewState={ViewState2_URL}", 
		LAST);

	
	return 0;
}