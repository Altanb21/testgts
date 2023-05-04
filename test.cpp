		using namespace httplib;
		Headers Header;
		Header.insert(std::make_pair("User-Agent", "UbiServices_SDK_2019.Release.27_PC64_unicode_static"));
		Header.insert(std::make_pair("Content-Type", "application/x-www-form-urlencoded"));
		Header.insert(std::make_pair("Host", "www.growtopia1.com"));
		Client cli("https://a104-125-3-135.deploy.static.akamaitechnologies.com");
		cli.set_default_headers(Header);
		cli.enable_server_certificate_verification(false);
		cli.set_connection_timeout(2, 0);
		Params params;
		params.emplace("version", "4.23");
		params.emplace("protocol", "189");
		params.emplace("platform", "0");

		auto res = cli.Post("/growtopia/server_data.php", params);