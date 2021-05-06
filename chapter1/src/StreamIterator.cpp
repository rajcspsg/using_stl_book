#include <iostream>
#include <numeric>
#include <iterator>

int main() {
    std::cout << "Enter numeric values separated by Spaces & Ctrl-z to end" << std::endl;

    std::cout << "\nThe sum of the values you entered is "
    << std::accumulate(std::istream_iterator<double>(std::cin),
    std::istream_iterator<double>(), 0.0)
    << std::endl;
}
