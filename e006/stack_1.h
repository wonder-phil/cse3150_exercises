#ifndef __STACK_1_H
#define __STACK_1_H

#include <stack>

using namespace std;

struct node {
  string name;
  int number;
};


stack<int> get_stack(const int n);

stack<node> get_stack_node(const int n);

#endif
