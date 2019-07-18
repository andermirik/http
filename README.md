# http
```
auto str = "https://yobit.net/api/3/ticker/ltc_btc";
std::cout << http::get(str, "some data").to_string() << std::endl;
std::cout << http::post(str, "some data").to_string() << std::endl;
  ```
  
  ```
http::Request req;
req.method = "GET";
req.uri = http::Uri("https://yobit.net/api/3/ticker/ltc_btc");
req.headers["Hello"] = "World!";
req.body = "Some data";
  ```