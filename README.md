# http
```
auto str = "https://yobit.net/api/3/ticker/ltc_btc";
std::cout << http::get(str, "some data").to_string() << std::endl;
std::cout << http::post(str, "some data").to_string() << std::endl;
  ```
  
 ```
 auto resp = http::post("https://api.vk.com/method/docs.getMessagesUploadServer",
			"peer_id="+std::to_string(peer_id)+"&type=doc&access_token=" + token + "&v=5.101"
		);
auto j = json::parse(resp.body)["response"];
std::string upload_url = j["upload_url"].get<std::string>();
		
resp = http::upload_files(upload_url, { http::File::from_uri("file", "file.gif", url) });
 ```
  
  ```
http::Request req;
req.method = "GET";
req.uri = http::Uri("https://yobit.net/api/3/ticker/ltc_btc");
req.headers["Hello"] = "World!";
req.body = "Some data";

std::cout << http::sendRequest(req).to_string();
  ```
