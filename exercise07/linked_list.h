#ifndef __LINKED_LIST_H_
#define __LINKED_LIST_H_


using namespace std;

enum {
      NUMBER = 10
};

struct node {
  int number;
  struct node * next;
  struct node * jumper;  
};


node * build_linked_list(const int elements);
node * copy_linked_list(node * list_to_copy, const int elements);
node * pointer_jump_linked_list(struct node * list, const int elements);
int print_linked_list(node * list, const int elements);
int print_array_list(node * list, const int elements);
int delete_linked_list(node * list, const int elements);

int sum_values_in_linked_list(node * list, const int elements);

node * array_ptrs_to_each_element_in_linked_list(node * origional_list, const int elements);

int print_jumper_next_node(node * array_ptrs, const int elements);

int advance_jumpers_double(node * array_ptrs, const int elements);

int print_jumper_pts_to_value(node * array_ptrs, const int elements);

#endif

