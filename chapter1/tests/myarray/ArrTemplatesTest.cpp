#include <iostream>
#include <memory>
#define CATCH_CONFIG_MAIN
#include "../../catch.hpp"
#include "../../src/ArrTemplates.hpp"
#include <cstddef>
using namespace std;

using std::string;

template <typename T> using ptr = shared_ptr<T>;

TEST_CASE("initialize the array", "Array init") {

  size_t st = 5;
  arr::MyArray<int> data (st);
    cout << data.size() << endl;

  ptr<string> str_ptr = ptr<string>(new string{ "one"});
}
