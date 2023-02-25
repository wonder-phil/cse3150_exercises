#include <iostream>

enum {
      NUMBER = 10
};

struct node {
  int number;
  struct node * next;
};

int main() {
  using namespace std;
  
  int k = 0;
  struct node * linked_list = new node;
  struct node * root = linked_list;
  
  for( int i=0; i < NUMBER; i++) {
    linked_list->number = k++;
    linked_list->next = new node;
    linked_list = linked_list->next;
  }

  struct node * my_node = root;
  for (int i =0; i < NUMBER; i++) {
    cout << my_node->number << " " << endl;
    my_node = my_node->next;
  }
  
}
