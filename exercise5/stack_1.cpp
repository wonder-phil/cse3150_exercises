#include <iostream>
#include <stack>

#include "stack_1.h"

using namespace std;

stack<int> get_stack(const int n) {

  stack<int> s;

  for (int i=0; i < n; i++) {
    s.push(i);
  }

  return s;
}


