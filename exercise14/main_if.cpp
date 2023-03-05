#include <iostream>
#include <vector>

#include "myfind_if.h"


int main() {
  using namespace std;

  vector<int> x = {1,20,5,12,34,51,99,2,0,23};
  auto at = myfind_if(x.begin(), x.end(),
		      [](int v) -> bool { return v == 51; } );

  cout << "found? " << (at != x.end()) << endl;
  if (at  != x.end()) {
    cout << "value = " << *at << endl;
  }
  
  return 0;
}

