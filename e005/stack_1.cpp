#include <iostream>
#include <stack>
#include <string>

#include "stack_1.h"

using namespace std;


string names[]  = {"S. Ulam", "Alan Turing", "C. Babbage", "Grace Hopper", "Ada Lovelace"};

stack<node> get_stack_node(const int n) {
  stack<node> s;

  for (int i=0; i < n; i++) {
    if (i >= sizeof(names)) {
      node my_node;
      my_node.name = "Plato";
      my_node.number = i;
      
      s.push(my_node);
    } else {
      node my_node;
      my_node.name = names[i];
      my_node.number = i;
      
      s.push(my_node);
    }
  }

  return s;
}

stack<int> get_stack(const int n) {

  stack<int> s;

  for (int i=0; i < n; i++) {
    s.push(i);
  }

  return s;
}


