Action()
{

	int MAX;
	int i;
	char * str;
	char * flightID_tmp;
	
	lr_start_transaction("UC4_DeleteTickets");
	
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
			
			web_reg_find("Text=Web Tours",
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
		
			//lr_think_time(33);
		
			web_custom_request("mer_login.gif", 
				"URL=http://localhost:1080/WebTours/images/mer_login.gif", 
				"Method=GET", 
				"Resource=1", 
				"RecContentType=image/gif", 
				"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
				"Snapshot=t8.inf", 
				LAST);
			
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
		
			web_reg_find("Text=301 Moved Permanently",
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
		
			web_set_sockets_option("SSL_VERSION", "AUTO");
		
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
				"Snapshot=t3.inf", 
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
				"Snapshot=t4.inf", 
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
			
			web_reg_find("Text=Welcome to the Web Tours site",
				LAST);
		
			web_custom_request("home.html", 
				"URL=http://localhost:1080/WebTours/home.html", 
				"Method=GET", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
				"Snapshot=t6.inf", 
				"Mode=HTTP", 
				LAST);
		
			web_add_header("Sec-Fetch-Site", 
				"same-origin");
		
			web_add_header("Sec-Fetch-Dest", 
				"frame");
		
		/*Correlation comment - Do not change!  Original value='138973.900526529HVtitHApAAiDDDDDtciQApicAAf' Name ='userSession' Type ='RecordReplay'*/
			web_reg_save_param_attrib(
				"ParamName=userSession",
				"TagName=input",
				"Extract=value",
				"Name=userSession",
				"Type=hidden",
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
	
	lr_think_time(46);

		lr_end_transaction("home_page", LR_AUTO);

	lr_think_time(33);

		lr_start_transaction("login");

			web_add_auto_header("Sec-Fetch-Site", 
				"same-origin");
		
			web_add_auto_header("Sec-Fetch-Dest", 
				"frame");
		
			web_add_header("Origin", 
				"http://localhost:1080");
		
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
				"Body=userSession={userSession}&username={login}&password={password}&login.x=29&login.y=6&JSFormSubmit=off",
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
		
			
//			web_reg_find("Text=Welcome to Web Tours",
//				LAST);
		
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
			
			lr_think_time(30);
		
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

	lr_think_time(65);

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
		
			
			web_reg_find("Text=User wants the intineraries",
				LAST);
		
			web_custom_request("welcome.pl_2", 
				"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
				"Method=GET", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
				"Snapshot=t65.inf", 
				"Mode=HTTP", 
				LAST);
		
			// web_concurrent_start(NULL);
			
			web_reg_find("Text=Web Tours Navigation Bar",
		LAST);
			
			web_custom_request("nav.pl_3", 
				"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
				"Method=GET", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
				"Snapshot=t66.inf", 
				"Mode=HTTP", 
				LAST);
			
		
			// web_concurrent_end(NULL);
			
			// name="flightID" value="0-4-M"
			
			web_reg_save_param("flightID",
				"LB=flightID\" value=\"",
				"RB=\"",
				"Ord=ALL",
				LAST);
			
			//name=".cgifields" value="6"
			
			web_reg_save_param("cgifields",
				"LB=name=\".cgifields\" value=\"",
				"RB=\"",
				"Ord=ALL",
				LAST);
		
			
		// 		lr_eval_string("(FlightID_count)");
			
			web_reg_find("Text=Flights List",
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
			
			lr_output_message(lr_eval_string("{FlightID_count}"));
			lr_output_message(lr_eval_string("{cgifields_count}"));
			
			MAX = atoi(lr_eval_string("{flightID_count}"));
			
			lr_save_string("" , "flightId_buffer");
			
			lr_param_sprintf("flightId_buffer", "%s=on&", "1");
			
			lr_save_string("" , "cgifields_buffer");
			
			for (i = 1; i <= MAX; i++){
				
				lr_param_sprintf("flightId_buffer", "%sflightID=%s&", lr_eval_string("{flightId_buffer}"), lr_paramarr_idx("flightID", i));
				
				lr_param_sprintf("cgifields_buffer", "%s&cgifields=%s", lr_eval_string("{cgifields_buffer}"), lr_paramarr_idx("cgifields", i));
				};
			           
			lr_output_message(lr_eval_string("{flightId_buffer}"));
			lr_output_message(lr_eval_string("{cgifields_buffer}"));
			
			lr_save_string(lr_eval_string("{flightId_buffer}removeFlights.x=36&removeFlights.y=4{cgifields_buffer}"), "result_string");
			lr_output_message(lr_eval_string("{result_string}"));
			
		  //    flightID_tmp = lr_paramarr_idx("FlightID", i);
			           	
		//		sprintf(str, "FlightID=%s", flightID_tmp);
		//		puts(str);
			    
			lr_output_message(str);		
			           	

		lr_end_transaction("itinerary",LR_AUTO);
	
	lr_think_time(47);

		lr_start_transaction("delete_Ticket");

			web_add_header("Origin", 
				"http://localhost:1080");
		
			lr_think_time(59);
		
		//	web_reg_find("Fail=Found",
		//		"Text={flightID_1}",
		//		LAST);
		
			 web_reg_find("Text=Flights List",
				LAST);
		
			web_custom_request("itinerary.pl_2", 
				"URL=http://localhost:1080/cgi-bin/itinerary.pl", 
				"Method=POST", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
				"Snapshot=t72.inf", 
				"Mode=HTTP", 
				"Body={result_string}", 
				LAST);
		
			lr_output_message(lr_eval_string("{FlightID_count}"));
	
		lr_end_transaction("delete_Ticket",LR_AUTO);

	lr_think_time(29);

		lr_start_transaction("sign_off");

			web_custom_request("SignOff Button", 
				"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
				"Method=GET", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
				"Snapshot=t24.inf", 
				"Mode=HTTP", 
				LAST);
		
			web_concurrent_start(NULL);
		
			web_custom_request("home.html_2", 
				"URL=http://localhost:1080/WebTours/home.html", 
				"Method=GET", 
				"Resource=0", 
				"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
				"Snapshot=t25.inf", 
				"Mode=HTTP", 
				LAST);
		
			web_reg_find("Text=Web Tours Navigation Bar",
		LAST);

			web_custom_request("nav.pl_4", 
				"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
				"Method=GET", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
				"Snapshot=t26.inf", 
				"Mode=HTTP", 
				LAST);
		
			web_concurrent_end(NULL);

		lr_end_transaction("sign_off",LR_AUTO);
	
	lr_end_transaction("UC4_DeleteTickets", LR_AUTO);


	return 0;
}