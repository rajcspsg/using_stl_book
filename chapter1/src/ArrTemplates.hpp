#ifndef _TESTTEMP_H_
#define _TESTTEMP_H_

#include <cstddef>
#include <iostream>
using namespace std;
namespace arr {
template <typename T>
class MyArray {
private:
  T* elements;
  size_t count;

public:
  MyArray(size_t size);
//  Array(long l);
  MyArray(const MyArray& other);
  MyArray(MyArray&& other);
  virtual ~MyArray(){}
  T& operator[](size_t index);
  const T& operator[](size_t index) const;
  MyArray& operator=(const MyArray& other);
  MyArray&& operator=(MyArray&& other);
  size_t size() { return count; }
};


template <typename T>
inline MyArray<T>::MyArray(size_t arraySize)
  try: elements { new T[arraySize]}, count {arraySize} {
	cout<< "sucessfully created the array" << endl;
	   }
  catch(const exception& e){
	cerr << " Memory Allocation failure in Array Constructor." << endl;
  }

  template <typename T>
  inline MyArray<T>::MyArray(const MyArray &other) try : elements {
    new T[other.size()]}, count { other.size }

  {
		cout<< "sucessfully created the array" << endl;

  }
catch(const exception& e ) {

 }
}

/*
template<typename T>
inline MyArray<T>::~MyArray() {

}
*/
#endif
