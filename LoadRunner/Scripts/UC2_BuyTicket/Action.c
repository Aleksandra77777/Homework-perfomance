Action()
{

	lr_start_transaction("UC2_BuyTicket");

	
		lr_start_transaction("home_page");


			web_set_sockets_option("SSL_VERSION", "AUTO");
		
			web_add_auto_header("sec-ch-ua", 
				"\"Chromium\";v=\"124\", \"Google Chrome\";v=\"124\", \"Not-A.Brand\";v=\"99\"");
		
			web_add_auto_header("sec-ch-ua-mobile", 
				"?0");
		
			web_add_auto_header("sec-ch-ua-platform", 
				"\"Windows\"");
		
			web_add_auto_header("Upgrade-Insecure-Requests", 
				"1");
		
			web_add_header("Sec-Fetch-Site", 
				"none");
		
			web_add_auto_header("Sec-Fetch-Mode", 
				"navigate");
		
			web_add_header("Sec-Fetch-Dest", 
				"document");
		
			web_add_auto_header("Sec-Fetch-User", 
				"?1");
			
			web_reg_find("Text=Moved Permanently",
				LAST);
		
			web_custom_request("WebTours", 
				"URL=http://localhost:1080/WebTours", 
				"Method=GET", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=", 
				"Snapshot=t1.inf", 
				"Mode=HTTP", 
				LAST);
		
			web_add_header("Sec-Fetch-Site", 
				"same-origin");
		
			web_add_header("Sec-Fetch-Dest", 
				"frame");
		
			web_concurrent_start(NULL);
		
			web_custom_request("header.html", 
				"URL=http://localhost:1080/WebTours/header.html", 
				"Method=GET", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=http://localhost:1080/WebTours/", 
				"Snapshot=t2.inf", 
				"Mode=HTTP", 
				LAST);
		
			web_add_header("Sec-Fetch-Site", 
				"same-origin");
		
			web_add_header("Sec-Fetch-Dest", 
				"frame");
			
			web_reg_find("Text=A Session ID has been created and loaded into a cookie called MSO",
		LAST);

		
			web_custom_request("welcome.pl", 
				"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
				"Method=GET", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=http://localhost:1080/WebTours/", 
				"Snapshot=t4.inf", 
				"Mode=HTTP", 
				LAST);
		
			web_concurrent_end(NULL);
		
			web_add_header("Sec-Fetch-Site", 
				"same-origin");
		
			web_add_header("Sec-Fetch-Dest", 
				"image");
		
			web_concurrent_start(NULL);
		
			web_custom_request("hp_logo.png", 
				"URL=http://localhost:1080/WebTours/images/hp_logo.png", 
				"Method=GET", 
				"Resource=1", 
				"RecContentType=image/png", 
				"Referer=http://localhost:1080/WebTours/header.html", 
				"Snapshot=t3.inf", 
				LAST);
		
			web_add_header("Sec-Fetch-Site", 
				"same-origin");
		
			web_add_header("Sec-Fetch-Dest", 
				"image");
		
			web_custom_request("webtours.png", 
				"URL=http://localhost:1080/WebTours/images/webtours.png", 
				"Method=GET", 
				"Resource=1", 
				"RecContentType=image/png", 
				"Referer=http://localhost:1080/WebTours/header.html", 
				"Snapshot=t5.inf", 
				LAST);
		
			web_concurrent_end(NULL);
		
			web_add_header("Sec-Fetch-Site", 
				"same-origin");
		
			web_add_header("Sec-Fetch-Dest", 
				"frame");
		
			web_concurrent_start(NULL);
		
			web_custom_request("home.html", 
				"URL=http://localhost:1080/WebTours/home.html", 
				"Method=GET", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
				"Snapshot=t6.inf", 
				"Mode=HTTP", 
				LAST);
		
			web_reg_save_param("userSession",
				"LB=userSession\" value=\"",
				"RB=\"/>",
				LAST);
			
			web_reg_find("Text=Web Tours Navigation Bar",
				LAST);
		
			web_custom_request("nav.pl", 
				"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
				"Method=GET", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
				"Snapshot=t7.inf", 
				"Mode=HTTP", 
				LAST);
		
			web_concurrent_end(NULL);
		
			web_add_header("Sec-Fetch-Site", 
				"same-origin");
		
			web_add_header("Sec-Fetch-Dest", 
				"image");
		
		
			web_custom_request("mer_login.gif", 
				"URL=http://localhost:1080/WebTours/images/mer_login.gif", 
				"Method=GET", 
				"Resource=1", 
				"RecContentType=image/gif", 
				"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
				"Snapshot=t8.inf", 
				LAST);

		lr_end_transaction("home_page", LR_AUTO);
	
	lr_think_time(33);

		lr_start_transaction("login");

			web_add_auto_header("Sec-Fetch-Site", 
				"same-origin");
		
			web_add_auto_header("Sec-Fetch-Dest", 
				"frame");
		
			web_add_header("Origin", 
				"http://localhost:1080");
		
			lr_think_time(114);
			
			web_reg_find("Text=User password was correct",
				LAST);
		
			web_custom_request("login.pl", 
				"URL=http://localhost:1080/cgi-bin/login.pl", 
				"Method=POST", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
				"Snapshot=t9.inf", 
				"Mode=HTTP", 
				"Body=userSession={userSession}&username={login}&password={password}&login.x=56&login.y=11&JSFormSubmit=off", 
				LAST);
		
			web_concurrent_start(NULL);
			
			web_reg_find("Text=Web Tours Navigation Bar",
		LAST);

			web_custom_request("nav.pl_2", 
				"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
				"Method=GET", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=http://localhost:1080/cgi-bin/login.pl", 
				"Snapshot=t10.inf", 
				"Mode=HTTP", 
				LAST);
			
			web_reg_find("Text=Welcome to Web Tours",
				LAST);
		
			web_custom_request("login.pl_2", 
				"URL=http://localhost:1080/cgi-bin/login.pl?intro=true", 
				"Method=GET", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=http://localhost:1080/cgi-bin/login.pl", 
				"Snapshot=t11.inf", 
				"Mode=HTTP", 
				LAST);
		
			web_concurrent_end(NULL);
		
			web_concurrent_start(NULL);
		
			web_custom_request("flights.gif", 
				"URL=http://localhost:1080/WebTours/images/flights.gif", 
				"Method=GET", 
				"Resource=1", 
				"RecContentType=image/gif", 
				"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
				"Snapshot=t12.inf", 
				LAST);
		
			web_custom_request("itinerary.gif", 
				"URL=http://localhost:1080/WebTours/images/itinerary.gif", 
				"Method=GET", 
				"Resource=1", 
				"RecContentType=image/gif", 
				"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
				"Snapshot=t13.inf", 
				LAST);
		
			web_custom_request("in_home.gif", 
				"URL=http://localhost:1080/WebTours/images/in_home.gif", 
				"Method=GET", 
				"Resource=1", 
				"RecContentType=image/gif", 
				"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
				"Snapshot=t14.inf", 
				LAST);
		
			web_custom_request("signoff.gif", 
				"URL=http://localhost:1080/WebTours/images/signoff.gif", 
				"Method=GET", 
				"Resource=1", 
				"RecContentType=image/gif", 
				"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
				"Snapshot=t15.inf", 
				LAST);
		
			web_concurrent_end(NULL);

		lr_end_transaction("login",LR_AUTO);

	lr_think_time(67);

		lr_start_transaction("click_flight");
		
			web_reg_find("Text=User has returned to the search page",
				LAST);
		
			web_custom_request("Search Flights Button", 
				"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
				"Method=GET", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
				"Snapshot=t16.inf", 
				"Mode=HTTP", 
				LAST);
		
			web_concurrent_start(NULL);
			
			web_reg_find("Text=Web Tours Navigation Bar",
		LAST);

		
			web_custom_request("nav.pl_3", 
				"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
				"Method=GET", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
				"Snapshot=t17.inf", 
				"Mode=HTTP", 
				LAST);
			
			web_reg_find("Text=Flight Selections",
		LAST);

		
			web_custom_request("reservations.pl", 
				"URL=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
				"Method=GET", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
				"Snapshot=t19.inf", 
				"Mode=HTTP", 
				LAST);
		
			web_concurrent_end(NULL);
		
			web_concurrent_start(NULL);
		
			web_custom_request("in_flights.gif", 
				"URL=http://localhost:1080/WebTours/images/in_flights.gif", 
				"Method=GET", 
				"Resource=1", 
				"RecContentType=image/gif", 
				"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
				"Snapshot=t18.inf", 
				LAST);
		
			web_custom_request("home.gif", 
				"URL=http://localhost:1080/WebTours/images/home.gif", 
				"Method=GET", 
				"Resource=1", 
				"RecContentType=image/gif", 
				"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
				"Snapshot=t20.inf", 
				LAST);
			web_custom_request("button_next.gif", 
			"URL=http://localhost:1080/WebTours/images/button_next.gif", 
			"Method=GET", 
			"Resource=1", 
			"RecContentType=image/gif", 
			"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
			"Snapshot=t21.inf", 
			LAST);
			
			web_concurrent_end(NULL);

		lr_end_transaction("click_flight",LR_AUTO);

	lr_think_time(13);

		lr_start_transaction("find_flight");

			web_add_auto_header("Origin", 
				"http://localhost:1080");
		
			web_reg_find("Text/IC=from <B>{depart}</B> to <B>{arrive}</B>",
				LAST);
			
		/*Correlation comment - Do not change!  Original value='020;338;04/26/2024' Name ='outboundFlight' Type ='RecordReplay'*/
			web_reg_save_param_attrib(
				"ParamName=outboundFlight",
				"TagName=input",
				"Extract=value",
				"Name=outboundFlight",
				"Type=radio",
				LAST);
				
		//		web_reg_save_param("outboundFlight",
		//		"LB=outboundFlight\" value=\"",
		//		"RB=\"",
		//		LAST);
				
		
				
			web_custom_request("reservations.pl_2", 
				"URL=http://localhost:1080/cgi-bin/reservations.pl", 
				"Method=POST", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
				"Snapshot=t22.inf", 
				"Mode=HTTP", 
				"Body=advanceDiscount=0&depart={depart}&departDate={departDate}&arrive={arrive}&returnDate={returnDate}&numPassengers=1&seatPref={seatPref}&seatType={seatType}&findFlights.x=67&findFlights.y=13&.cgifields=roundtrip&.cgifields=seatType&.cgifields=seatPref", 
				LAST);
		
			web_convert_param("CorrelationParameter_URL2",
				"SourceString={outboundFlight}",
				"SourceEncoding=HTML",
				"TargetEncoding=URL",
				LAST);

		lr_end_transaction("find_flight",LR_AUTO);

	lr_think_time(25);

		lr_start_transaction("choose_flight");
		
		web_reg_find("Text=Flight Reservation",
		LAST);

			web_custom_request("reservations.pl_3",
				"URL=http://localhost:1080/cgi-bin/reservations.pl",
				"Method=POST",
				"Resource=0",
				"RecContentType=text/html",
				"Referer=http://localhost:1080/cgi-bin/reservations.pl",
				"Snapshot=t23.inf",
				"Mode=HTTP",
				"Body=outboundFlight={CorrelationParameter_URL2}&numPassengers=1&advanceDiscount=0&seatType={seatType}&seatPref={seatPref}&reserveFlights.x=49&reserveFlights.y=7",
				LAST);

		lr_end_transaction("choose_flight",LR_AUTO);

	lr_think_time(86);

		lr_start_transaction("payment_details");
	
			web_reg_find("Text/IC=from {depart} to {arrive}",
				LAST);
		
			web_custom_request("reservations.pl_4",
				"URL=http://localhost:1080/cgi-bin/reservations.pl",
				"Method=POST",
				"Resource=0",
				"RecContentType=text/html",
				"Referer=http://localhost:1080/cgi-bin/reservations.pl",
				"Snapshot=t24.inf",
				"Mode=HTTP",
				"Body=firstName={firstName}&lastName={lastName}&address1={address1}&address2={address2}&pass1={firstName}+{lastName}&creditCard={creditCard}&expDate={expDate}&saveCC=on&oldCCOption=on&numPassengers=1&seatType={seatType}&seatPref={seatPref}&outboundFlight={CorrelationParameter_URL2}&advanceDiscount=0&returnFlight=&JSFormSubmit=off&buyFlights.x=43&buyFlights.y=6&.cgifields=saveCC",
				LAST);
		
			web_custom_request("bookanother.gif", 
				"URL=http://localhost:1080/WebTours/images/bookanother.gif", 
				"Method=GET", 
				"Resource=1", 
				"RecContentType=image/gif", 
				"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
				"Snapshot=t25.inf", 
				LAST);

		lr_end_transaction("payment_details",LR_AUTO);

	
	lr_end_transaction("UC2_BuyTicket", LR_AUTO);


	return 0;
}