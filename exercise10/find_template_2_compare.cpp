#include <iostream>
#include <vector>
#include <cmath>

#define EPSILON 0.0001

int compare(const double & a, const double & b) {
  double v = fabs(a - b);
  if (v < EPSILON) return 0;
  else if (a < b) return -1;
  else return 1;
}


int compare_ints(const int & a, const int & b) {
  double v = abs(a - b);
  if (v < EPSILON) return 0;
  else if (a < b) return -1;
  else return 1;
}



