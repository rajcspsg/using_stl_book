#include <iostream>
#include <memory>
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "templates.hpp"
#include <cstddef>
using namespace std;

using std::string;

template <typename T> using ptr = shared_ptr<T>;

TEST_CASE("initialize the array", "Array init") {
  // Array<int> data {(size_t)5};

  
  ptr<string> str_ptr = ptr<string>(new string{ "one"});
}


