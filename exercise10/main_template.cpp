#include <iostream>
#include <vector>

#include "find_template.h"


#define EPSILON 0.0001

int compare(double a, double b) {
  double v = fabs(a -b);
  if (v < EPSILON) return 0;
  else if (a < b) return -1;
  else return 1;
}


int main() {

  std::vector<int> x = { 1,5,8,11,25,30,32,47,78,99,101 };

  bool found_it = find_template(x,33);

  std::cout << "Found it? " << (found_it ? "true" : "false") << std::endl;
}
