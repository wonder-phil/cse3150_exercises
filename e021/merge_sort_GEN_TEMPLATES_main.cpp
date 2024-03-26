#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

//#include "merge_sort.h"
#include "merge_sort_GEN_TEMPLATES.h"


int main() {
  using namespace std;

  vector<int> uv = {1,20,5,12,34,51,99,2,0,23};

  cout << "Init: " << uv << endl;
  
  merge_sort(uv, [](int a, int b) { return a < b; } );

  
  cout << "sorted: " << uv << endl;

  
  return 0;
}

