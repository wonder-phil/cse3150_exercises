#include <iostream>
#include <vector>
#include <math>

#define EPSILON 0.0001

int compare(const double & a, const double & b) {
  double v = fabs(a -b);
  if (v < EPSILON) return 0;
  else if (x < y) return -1;
  else return 1;
  }
}

template<typename T>
bool find_template(const std::vector<T> & x, const T & v, int (*comp)(const & T, const & T) {
  int low{0}, high = x.size() -1;
  
  while (low <= high) {
    int mid = (low + high)/2;

    comp()
    if (x[mid] == v) return true;
    else if (v < x[mid]) high = mid -1;
    else low = mid +1;
  }
  return false;
}

