#include <iostream>
#include <vector>
#include <cmath>


template<typename T>
bool find_template(const std::vector<T> & x, const T & v) {
  int low{0}, high = x.size() -1;
  
  while (low <= high) {
    int mid = (low + high)/2;

    if (x[mid] == v) return true;
    else if (v < x[mid]) high = mid -1;
    else low = mid +1;
  }
  return false;
}

