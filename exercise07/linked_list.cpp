#include <iostream>

#include "linked_list.h"


using namespace std;


node * build_linked_list(const int elements) {
  node * root = new node;  
  node * linked_list = root;
  linked_list->number = -1; // an anchor

  
  for( int i = 0; i < elements; i++) {
    linked_list->next = new node;
    linked_list->jumper = linked_list->next;
    linked_list         = linked_list->next;
    linked_list->number = i;
  }
  linked_list->jumper = linked_list;
  linked_list->next   = linked_list; // next of last elt points to itself

  return root;
}

node * copy_linked_list(node * list_to_copy, const int elements) {
  node * linked_list = new node;
  linked_list->number = -1; // an anchor
  node * root = linked_list;
  
  for( int i = 0; i < elements; i++) {
    linked_list->next = new node;
    linked_list->number = list_to_copy->number;
    linked_list->jumper = linked_list->next;    
    linked_list = linked_list->next;
    list_to_copy = list_to_copy->next;
  }

  linked_list->jumper = linked_list;
  linked_list->next = linked_list; // next of last elt points to itself

  
  return root;
}


/*
  Returns the last node in the list
 */
node * pointer_jump_linked_list(node * linked_list, const int elements) {
  
  for( int i = 0; i < elements; i++) {
    linked_list = linked_list->next;
  }

  return linked_list;
}



int print_jumper_next_node(node * array_ptrs, const int elements) {

  cout <<  "print_jumper_next_node start" << endl;
  int sum = 0;

  for (int i = 0; i < elements ; i++) {
    node * node_ptr = array_ptrs[i].jumper;
    int number = node_ptr->number;
    sum += number;
    cout << number << " " << endl;
  }

  cout <<  "print_jumper_next_node end" << endl;
    
  return sum;
}


/*
  assumes an array of node structs
 */
int print_jumper_pts_to_value(node * array_ptrs, const int elements) {
  cout <<  "print_jumper_pts_to_value start " << endl;  
  for (int i = 0; i < elements; i++) {
    
    int number = array_ptrs[i].jumper->number;
    cout <<  number << " " << endl;    
  }

  cout <<  "print_jumper_pts_to_value end " << endl;

  return 1;
}

int advance_jumpers_double(struct node * array_ptrs, const int elements) {

  for (int i = 0; i < elements ; i++) {
    array_ptrs[i].jumper = array_ptrs[i].jumper->jumper;
  }

    
  return 0;
}


node * array_ptrs_to_each_element_in_linked_list(node * origional_list, const int elements) {
  int k = 0;
  struct node * array_of_elts_linked_list = new node[elements];
  struct node * root = array_of_elts_linked_list;
  
  for( int i = 0; i < elements; i++) {
    array_of_elts_linked_list[i].number = origional_list->number;
    array_of_elts_linked_list[i].next   = origional_list->next;
    array_of_elts_linked_list[i].jumper = origional_list->jumper;    
    origional_list = origional_list->next;
  }

  return root;
}


int sum_values_in_linked_list(node * list, const int elements) {

  int sum = 0;
  
  struct node * my_node = list;
  for (int i =0; i < elements; i++) {
    sum += my_node->number;
    my_node = my_node->next;
  }

  return sum;
}


int print_array_list(node * list, const int elements){
  cout << "print_array_list start" << endl;
  for (int i =0; i < elements; i++) {
    cout << list[i].number << " " << endl;
    cout << "jumper value: " << list[i].jumper->number << " " << endl;    
  }
  cout << "print_array_list stop" << endl;
  return elements;
}

int print_linked_list(node * list, const int elements) {
  
  node * my_node = list;
  for (int i =0; i < elements; i++) {
    cout << my_node->number << " " << endl;
    my_node = my_node->next;
  }

  return elements;
}

int delete_linked_list(node * list, const int elements) {
  int count = 0;
  
  struct node * my_node = list;
  for (int i =0; i < elements; i++) {
    struct node * prev_node = my_node;
    my_node = my_node->next;

    delete prev_node;
    count++;
  }

  return count;
}
  
