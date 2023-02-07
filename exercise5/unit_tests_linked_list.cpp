#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "linked_list.h"


const int LIST_LENGTH_0 = 0;
struct node * linked_list_0 = build_linked_list(LIST_LENGTH_0);
  
const int LIST_LENGTH_1 = 1;
struct node * linked_list_1 = build_linked_list(LIST_LENGTH_1);

const int LIST_LENGTH_2 = 2;
struct node * linked_list_2 = build_linked_list(LIST_LENGTH_2);

const int LIST_LENGTH_3 = 3;
struct node * linked_list_3 = build_linked_list(LIST_LENGTH_3);

const int LIST_LENGTH_10 = 10;
struct node * linked_list_10 = build_linked_list(LIST_LENGTH_10);

struct node * array_of_elts = array_ptrs_to_each_element_in_linked_list(linked_list_3, LIST_LENGTH_3);
struct node * t_list = linked_list_3;



TEST_CASE("Testing pointer_jumped_linked_list") {
  struct node * end = pointer_jump_linked_list(linked_list_0,LIST_LENGTH_0);
  CHECK( end->next == end ); // the last node points to itself
  // if there are zero nodes, the anchor node points to itself

  end = pointer_jump_linked_list(linked_list_1,LIST_LENGTH_1);
  CHECK( end->next->next == end ); // the last node points to itself

}

TEST_CASE("Testing build linked list") {
  std::cout << "size of struct node: " << sizeof(node) << std::endl;
  print_linked_list(linked_list_0,LIST_LENGTH_0);
  std::cout << "------------" << std::endl;
  print_linked_list(linked_list_1,LIST_LENGTH_1);
  std::cout << "------------" << std::endl;  
  print_linked_list(linked_list_2,LIST_LENGTH_2);
  std::cout << "------------" << std::endl;
  print_linked_list(linked_list_10,LIST_LENGTH_10);
  std::cout << "------------" << std::endl;

  CHECK( sum_values_in_linked_list(linked_list_0, LIST_LENGTH_0) == 0 );
  CHECK( sum_values_in_linked_list(linked_list_1, LIST_LENGTH_1) == 0 );
  CHECK( sum_values_in_linked_list(linked_list_2, LIST_LENGTH_2) == (0+1) );
  CHECK( sum_values_in_linked_list(linked_list_3, LIST_LENGTH_3) == (0+1+2) );            
  CHECK( sum_values_in_linked_list(linked_list_10, LIST_LENGTH_10) == (0+1+2+3+4+5+6+7+8+9) );            
  
  CHECK( delete_linked_list(linked_list_0, LIST_LENGTH_0) == LIST_LENGTH_0 );      
  CHECK( delete_linked_list(linked_list_1, LIST_LENGTH_1) == LIST_LENGTH_1 );      
  CHECK( delete_linked_list(linked_list_2, LIST_LENGTH_2) == LIST_LENGTH_2 );
  CHECK( delete_linked_list(linked_list_10, LIST_LENGTH_10) == LIST_LENGTH_10 );

  CHECK( array_of_elts[0].number == t_list->number );

  for ( int i = 0; i < LIST_LENGTH_3; i++ ) {
    CHECK( array_of_elts[i].number == t_list->number );
    t_list = t_list->next;
  }

}



