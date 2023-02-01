#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "linked_list.h"

struct node * linked_list_1 = build_linked_list(0);

const int TEST_DELETE = 10;
struct node * linked_list_2 = build_linked_list(TEST_DELETE);


const int TEST_SMALL = 3;
struct node * linked_list_3 = build_linked_list(TEST_SMALL);

struct node * array_of_elts = array_ptrs_to_each_element_in_linked_list(linked_list_3, TEST_SMALL);
struct node * t_list = linked_list_3;

TEST_CASE("Testing build linked list") {
  CHECK( linked_list_1 == NULL);
  CHECK( delete_linked_list(linked_list_2, TEST_DELETE) == TEST_DELETE );


  CHECK( array_of_elts[0].number == t_list->number );

  /* */
  for ( int i = 0; i < TEST_SMALL; i++ ) {
    CHECK( array_of_elts[i].number == t_list->number );
    t_list = t_list->next;
  }
  /* */
}

TEST_CASE("Testing ...") {

  CHECK( 0 == 0);

}


