#include "header.h"

extern std::unordered_map<std::string, std::string> map;

void b() {
  map["b"] = "hello";
}
//map = { {"b","hello"} };


