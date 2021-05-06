#include "gtest/gtest.h"
#include "../../src/ArrTemplates.hpp"

class MyArrayTest: public :: testing::Test {

};

TEST_F(MyArrayTest, ArrayInit) {
  size_t st = 5;
  arr::MyArray<int> data (st);
  cout << endl << data.size() << endl << endl;
}
