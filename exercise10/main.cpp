#include <iostream>
#include <vector>
#include <algorithm>

bool find(std::vector<int> x, int v) {
  int low{0}, high = x.size() -1;
  
  while (low <= high) {
    int mid = (low + high)/2;

    if (x[mid] == v) return true;
    else if (v < x[mid]) high = mid -1;
    else low = mid +1;
  }
  return false;
}


int main() {

  std::vector<int> x = {1,5,8,11,25,30,32,47,78,99,101};

  bool found_it = find(x,33);
  std::cout << "Found it? " << (found_it ? "true" : "false") << std::endl;
}
