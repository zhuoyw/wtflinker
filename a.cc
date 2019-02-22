#include "header.h"

extern std::unordered_map<std::string, std::string> map;

void a() {
  map["a"] = "hello";
}
//map = { {"a","hello"} };


