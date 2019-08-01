#pragma once
#include "uri.h"
#include "request.h"
#include "response.h"

namespace http {

	Response get(std::string const& path, std::string const& data = "");
	Response post(std::string const& path, std::string const& data = "");

	Response sendRequest(Request&request);
	Response sendHTTPS(Request& request);
	Response sendHTTP(Request& request);

}