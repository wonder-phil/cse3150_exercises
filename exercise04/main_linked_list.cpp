#include <iostream>


#include "linked_list.h"


int main() {
  using namespace std;
  
  int k = 0;
  struct node * linked_list = build_linked_list(NUMBER);


  print_linked_list(linked_list, NUMBER);
}
