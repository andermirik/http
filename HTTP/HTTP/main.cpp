
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "http.h"


int main() {

	system("chcp 1251");
	system("cls");
	setlocale(0, "rus");

	auto str = "https://yobit.net/api/3/ticker/ltc_btc/";
	std::cout << http::get(str).to_string() << std::endl;
	std::cout << http::post(str).to_string() << std::endl;

	http::Request req;
	req.method = "GET";
	req.uri = http::Uri("https://yobit.net/api/3/ticker/ltc_btc");
	req.headers["Hello"] = "World!";
	req.body = "Some data";
	
	std::cout << http::sendRequest(req).to_string()<<std::endl;

	return(0);
}