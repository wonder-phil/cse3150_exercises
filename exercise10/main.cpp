#include <iostream>
#include <vector>
#include <algorithm>

#include "find.h"


int main() {

  std::vector<int> x = {1,5,8,11,25,30,32,47,78,99,101};

  bool found_it = find(x,33);
  std::cout << "Found it? " << (found_it ? "true" : "false") << std::endl;
}
