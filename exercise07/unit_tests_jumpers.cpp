#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "linked_list.h"

const int LIST_LENGTH_0 = 0;
node * linked_list_0 = build_linked_list(LIST_LENGTH_0);


const int LIST_LENGTH_1 = 1;
node * linked_list_1 = build_linked_list(LIST_LENGTH_1);

//
node * my_copy_1_1 = array_ptrs_to_each_element_in_linked_list(linked_list_1, LIST_LENGTH_1);
int x_1 = print_jumper_pts_to_value(my_copy_1_1, LIST_LENGTH_1);


const int LIST_LENGTH_2 = 2;
node * linked_list_2 = build_linked_list(LIST_LENGTH_2);

//
node * my_copy_2_1 = array_ptrs_to_each_element_in_linked_list(linked_list_2, LIST_LENGTH_2);
int x_2_1 = print_jumper_pts_to_value(my_copy_2_1, LIST_LENGTH_2);
//

const int LIST_LENGTH_3 = 3;
node * linked_list_3 = build_linked_list(LIST_LENGTH_3);

//int e = print_linked_list(linked_list_3,3);
node * ptr_array_3 = array_ptrs_to_each_element_in_linked_list(linked_list_3, LIST_LENGTH_3);
int p_j_3_1 = print_jumper_pts_to_value(ptr_array_3, LIST_LENGTH_3);
int a_j_3_1 = advance_jumpers_double(ptr_array_3, LIST_LENGTH_3);

//

int p_j_3_2 = print_jumper_pts_to_value(ptr_array_3, LIST_LENGTH_3);
int a_j_3_2 = advance_jumpers_double(ptr_array_3, LIST_LENGTH_3);
//


const int LIST_LENGTH_4 = 4;
node * linked_list_4 = build_linked_list(LIST_LENGTH_4);

node * ptr_array_4 = array_ptrs_to_each_element_in_linked_list(linked_list_4, LIST_LENGTH_4);
int p_j_4_0 = print_jumper_pts_to_value(ptr_array_4, LIST_LENGTH_4);

int a_j_4_1 = advance_jumpers_double(ptr_array_4, LIST_LENGTH_4);
int p_j_4_1 = print_jumper_pts_to_value(ptr_array_4, LIST_LENGTH_4);

int a_j_4_2 = advance_jumpers_double(ptr_array_4, LIST_LENGTH_4);
int p_j_4_2 = print_jumper_pts_to_value(ptr_array_4, LIST_LENGTH_4);

int a_j_4_3 = advance_jumpers_double(ptr_array_4, LIST_LENGTH_4);
int p_j_4_3 = print_jumper_pts_to_value(ptr_array_4, LIST_LENGTH_4);


const int LIST_LENGTH_8 = 8;
node * linked_list_8 = build_linked_list(LIST_LENGTH_8);

node * ptr_array_8 = array_ptrs_to_each_element_in_linked_list(linked_list_8, LIST_LENGTH_8);
int p_j_8_0 = print_jumper_pts_to_value(ptr_array_8, LIST_LENGTH_8);

int a_j_8_1 = advance_jumpers_double(ptr_array_8, LIST_LENGTH_8);
int p_j_8_1 = print_jumper_pts_to_value(ptr_array_8, LIST_LENGTH_8);

int a_j_8_2 = advance_jumpers_double(ptr_array_8, LIST_LENGTH_8);
int p_j_8_2 = print_jumper_pts_to_value(ptr_array_8, LIST_LENGTH_8);

int a_j_8_3 = advance_jumpers_double(ptr_array_8, LIST_LENGTH_8);
int p_j_8_3 = print_jumper_pts_to_value(ptr_array_8, LIST_LENGTH_8);




const int LIST_LENGTH_10 = 10;
node * linked_list_10 = build_linked_list(LIST_LENGTH_10);

node * array_of_10_elts = array_ptrs_to_each_element_in_linked_list(linked_list_10, LIST_LENGTH_10);
int p_j_10_0 = print_jumper_pts_to_value(array_of_10_elts, LIST_LENGTH_10);

int a_j_10_1 = advance_jumpers_double(array_of_10_elts, LIST_LENGTH_10);
int p_j_10_1 = print_jumper_pts_to_value(array_of_10_elts, LIST_LENGTH_10);

int a_j_10_2 = advance_jumpers_double(array_of_10_elts, LIST_LENGTH_10);
int p_j_10_2 = print_jumper_pts_to_value(array_of_10_elts, LIST_LENGTH_10);

int a_j_10_3 = advance_jumpers_double(array_of_10_elts, LIST_LENGTH_10);
int p_j_10_3 = print_jumper_pts_to_value(array_of_10_elts, LIST_LENGTH_10);

int a_j_10_4 = advance_jumpers_double(array_of_10_elts, LIST_LENGTH_10);
int p_j_10_4 = print_jumper_pts_to_value(array_of_10_elts, LIST_LENGTH_10);



TEST_CASE("Testing copy_linked_list") {

  node * cpy_3 = copy_linked_list(linked_list_3, LIST_LENGTH_3);

  node * tmp_3 = linked_list_3;
  for (int i = 0 ; i < LIST_LENGTH_3; i++ ){
    CHECK( tmp_3->number == cpy_3->number );
  }
}


TEST_CASE("Testing pointer_jumped_linked_list") {
  int LIST_LENGTH_0 = 0;
  struct node * end = pointer_jump_linked_list(linked_list_0,LIST_LENGTH_0);
  CHECK( end->next == end ); // the last node points to itself
  // if there are zero nodes, the anchor node points to itself

  end = pointer_jump_linked_list(linked_list_1,LIST_LENGTH_1);
  CHECK( end->next->next == end ); // the last node points to itself
  // There are two nodes - the anchor node and the initial node in the linked-list

  end = pointer_jump_linked_list(linked_list_2,LIST_LENGTH_2);
  CHECK( end->next->next->next == end ); // the last node points to itself

}





