#include <iostream>
#include <stack>

#include "stack_1.h"


stack<int> get_stack(const int n) {

  stack<int> s;

  for (int i=0; i < n; i++) {
    s.push(i);
  }

  return s;
}

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
