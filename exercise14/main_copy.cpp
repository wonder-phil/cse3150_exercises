#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

#include "mycopy.h"


int main() {
  using namespace std;

  vector<int> a = {1,20,5,12,34,51,99,2,0,23};
  vector<int> b;

  mycopy(a.begin(),a.end(), back_inserter(b));
  

  for (int v : b) {
    cout << v << " ";
  }
  cout << endl;
  
  return 0;
}

