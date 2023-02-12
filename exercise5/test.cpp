#include <iostream>
#include <stack>

#include "stack_1.h"


using namespace std;


int main() {
  using namespace std;

  stack<int> s2 = get_stack(10);
  
  stack<int> si;
  for( int i = 0; i < 5; i++ ){
    si.push(i);
  }

  while (!si.empty()) {
    cout << "value: " << si.top() << endl;
    si.pop();
  }

  return 0;
}
