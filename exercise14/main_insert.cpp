#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

#include "insert_into.h"


int main() {
  using namespace std;

  vector<int> a = {1,2,3};
  vector<int> b = {-9,-8,-7};

  insert_into(b, a.begin(), a.end());
  

  for (int v : b) {
    cout << v << " ";
  }
  cout << endl;
  
  return 0;
}

