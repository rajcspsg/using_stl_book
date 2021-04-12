#include "templates.hpp"
#include <iostream>
#include <cstddef>
using namespace std;


template <typename T>
Array<T>::Array(size_t arraySize)
  try: elements { new T[arraySize]}, count {arraySize} {
	cout<< "sucessfully created the array" << endl;
	   }
  catch(const exception& e){
	cerr << " Memory Allocation failure in Array Constructor." << endl;
  }

  template <typename T>
  inline Array<T>::Array(const Array &other) try : elements {
    new T[other.size()]}, count { other.size }
  
  {
		cout<< "sucessfully created the array" << endl;

  }
catch(const exception& e ) {
  
 }
