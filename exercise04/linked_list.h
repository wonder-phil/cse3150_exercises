#ifndef __LINKED_LIST_H_
#define __LINKED_LIST_H_


enum {
      NUMBER = 10
};

struct node {
  int number;
  struct node * next;
  struct node * jumper;  
};


struct node * build_linked_list(const int elements);
struct node * pointer_jump_linked_list(struct node * list, const int elements);
void print_linked_list(struct node * list, const int elements);
int delete_linked_list(struct node * list, const int elements);

int sum_values_in_linked_list(struct node * list, const int elements);
struct node * array_ptrs_to_each_element_in_linked_list(struct node * origional_list, const int elements);

#endif

