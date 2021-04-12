#include <cstddef>
#include <iostream>
using namespace std;

template <typename T>
class Array {
private:
  T* elements;
  size_t count;

public:
  Array(size_t size);
  Array(const Array& other);
  Array(Array&& other);
  virtual ~Array();
  T& operator[](size_t index);
  const T& operator[](size_t index) const;
  Array& operator=(const Array& other);
  Array&& operator=(Array&& other);
  size_t size() { return count; }
};
