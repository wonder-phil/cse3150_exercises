#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "linked_list.h"


const int LIST_LENGTH_0 = 0;
node * linked_list_0 = build_linked_list(LIST_LENGTH_0);

const int LIST_LENGTH_1 = 1;
node * linked_list_1 = build_linked_list(LIST_LENGTH_1);

const int LIST_LENGTH_2 = 2;
node * linked_list_2 = build_linked_list(LIST_LENGTH_2);

const int LIST_LENGTH_10 = 10;
node * linked_list_10 = build_linked_list(LIST_LENGTH_10);

const int LIST_LENGTH_3 = 3;
node * linked_list_3 = build_linked_list(LIST_LENGTH_3);

node * array_of_elts = array_ptrs_to_each_element_in_linked_list(linked_list_3, LIST_LENGTH_3);

node * t_list = linked_list_3;

node * my_copy_3 = array_ptrs_to_each_element_in_linked_list(linked_list_3, 3);



int e = print_linked_list(linked_list_3,3);
int e0 = print_array_list(my_copy_3,3);

int sum_0 = advance_jumpers_double(my_copy_3,3);

int x = print_jumper_pts_to_value(my_copy_3, 3);

int sum = print_jumper_next_node(my_copy_3, 3);


TEST_CASE("Testing copy_linked_list") {

  node * cpy = copy_linked_list(linked_list_0, LIST_LENGTH_0);
  CHECK( cpy->number == linked_list_0->number );
  
  node * cpy_1 = copy_linked_list(linked_list_1, LIST_LENGTH_1);

  node * tmp_1 = linked_list_1;
  for (int i = 0 ; i < LIST_LENGTH_1; i++ ){
    CHECK( tmp_1->number == cpy_1->number );
  }


   node * cpy_3 = copy_linked_list(linked_list_3, LIST_LENGTH_3);

  node * tmp_3 = linked_list_3;
  for (int i = 0 ; i < LIST_LENGTH_3; i++ ){
    CHECK( tmp_3->number == cpy_3->number );
  }

  //node * cpy_2 = copy_linked_list(linked_list_2, LIST_LENGTH_2);


}


TEST_CASE("Testing pointer_jumped_linked_list") {
  struct node * end = pointer_jump_linked_list(linked_list_0,LIST_LENGTH_0);
  CHECK( end->next == end ); // the last node points to itself
  // if there are zero nodes, the anchor node points to itself

  end = pointer_jump_linked_list(linked_list_1,LIST_LENGTH_1);
  CHECK( end->next->next == end ); // the last node points to itself
  // There are two nodes - the anchor node and the initial node in the linked-list

  end = pointer_jump_linked_list(linked_list_2,LIST_LENGTH_2);
  CHECK( end->next->next->next == end ); // the last node points to itself

}

TEST_CASE("Testing array_ptrs_to_each_element_in_linked_list") {
  // Should test the 0 length case...
  //struct node * array = array_ptrs_to_each_element_in_linked_list(linked_list_0,LIST_LENGTH_0);
  //CHECK( array == nullptr );
  //

  node * array = array_ptrs_to_each_element_in_linked_list(linked_list_1,LIST_LENGTH_1);
  CHECK( array[0].number == linked_list_1->next->number );

  CHECK( array_of_elts[0].number == t_list->number );

  for ( int i = 0; i < LIST_LENGTH_3; i++ ) {
    CHECK( array_of_elts[i].number == t_list->number );
    t_list = t_list->next;
  }


}

TEST_CASE("Testing build linked list") {
  std::cout << "size of struct node: " << sizeof(node) << std::endl;
  print_linked_list( linked_list_0,LIST_LENGTH_0   );
  print_linked_list( linked_list_1,LIST_LENGTH_1   );
  print_linked_list( linked_list_2,LIST_LENGTH_2   );
  print_linked_list( linked_list_10,LIST_LENGTH_10 );  

}

TEST_CASE("Testing delete_linked_list") {

  CHECK( delete_linked_list(linked_list_0, LIST_LENGTH_0  ) == LIST_LENGTH_0  );      
  CHECK( delete_linked_list(linked_list_1, LIST_LENGTH_1  ) == LIST_LENGTH_1  );      
  CHECK( delete_linked_list(linked_list_2, LIST_LENGTH_2  ) == LIST_LENGTH_2  );
  CHECK( delete_linked_list(linked_list_10, LIST_LENGTH_10) == LIST_LENGTH_10 );

}



