Action1()
{

	lr_start_transaction("itinerary");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"124\", \"Google Chrome\";v=\"124\", \"Not-A.Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	lr_think_time(47);

	web_custom_request("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t65.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_custom_request("nav.pl_3", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t66.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("itinerary.pl", 
		"URL=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t67.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_custom_request("home.gif", 
		"URL=http://localhost:1080/WebTours/images/home.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t68.inf", 
		LAST);

	web_custom_request("in_itinerary.gif", 
		"URL=http://localhost:1080/WebTours/images/in_itinerary.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t69.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_custom_request("cancelreservation.gif", 
		"URL=http://localhost:1080/WebTours/images/cancelreservation.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t70.inf", 
		LAST);

	web_custom_request("cancelallreservations.gif", 
		"URL=http://localhost:1080/WebTours/images/cancelallreservations.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t71.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("itinerary",LR_AUTO);

	lr_start_transaction("delete Ticket");

	web_add_header("Origin", 
		"http://localhost:1080");

	lr_think_time(59);

	web_custom_request("itinerary.pl_2", 
		"URL=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t72.inf", 
		"Mode=HTTP", 
		"Body=1=on&flightID=251445197-795-JB&flightID=251445197-1564-JB&flightID=251445197-2333-JB&flightID=251445197-3102-JB&flightID=251445197-3872-JB&flightID=251445203-4653-JB&flightID=251445197-5410-JB&flightID=251-6-JB&flightID=25144-70-1&flightID=0-7-J&flightID=0-8-h&flightID=0-9-&flightID=0-10-&flightID=25144-108-1&flightID=0-11-J&flightID=0-12-&flightID=0-13-&flightID=0-1-J&flightID=0-14-&flightID=0-1-M&flightID=4555-166760-1&flightID=0-1-1F&flightID=16-17-&flightID=0-18983781-1&flightID=0-193-1&"
		"flightID=0-20-J&removeFlights.x=72&removeFlights.y=9&.cgifields=11&.cgifields=21&.cgifields=7&.cgifields=26&.cgifields=17&.cgifields=2&.cgifields=22&.cgifields=1&.cgifields=18&.cgifields=23&.cgifields=16&.cgifields=13&.cgifields=25&.cgifields=6&.cgifields=3&.cgifields=9&.cgifields=12&.cgifields=20&.cgifields=14&.cgifields=15&.cgifields=8&.cgifields=4&.cgifields=24&.cgifields=19&.cgifields=10&.cgifields=5", 
		LAST);

	lr_end_transaction("delete Ticket",LR_AUTO);

	return 0;
}