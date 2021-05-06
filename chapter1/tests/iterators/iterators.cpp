#include "gtest/gtest.h"
#include <iostream>
#include <numeric>
#include <iterator>

class IteratorTest: public ::  testing::Test {

};

TEST_F(IteratorTest, TEST_ARRAY_IETRATOR) {
    double  data[] { 1.0, 2.5, 4.5, 6.5, 8.5 };

    std::cout << "The array contains: \n";

    for(auto iter = std::begin(data); iter != std::end(data); ++iter) {
        std::cout << *iter << " ";
    }

    auto total = std::accumulate(std::begin(data), std::end(data), 0.0);
    std::cout << "\n The sum of the array is :"<< total << std::endl;
}
