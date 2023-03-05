#include <iostream>
#include <vector>
#include <cmath>


template<typename T>
bool find_template_2(const std::vector<T> & x, const T & v, int (*comp)(const int &, const int &)) {
  int low{0}, high = x.size() -1;
  
  while (low <= high) {
    int mid = (low + high)/2;

    int result = comp(x[mid], v);
    if (result == 0) return true;
    else if (result > 0) high = mid -1;
    else low = mid +1;
  }
  return false;
}

