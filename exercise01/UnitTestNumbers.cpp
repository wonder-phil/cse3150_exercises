#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
/*
  https://hackingcpp.com/cpp/tools/testing_frameworks.html
 */

#include "doctest.h"
#include "remove_in_place.h"

int nums_0[] = {2,3,3,2};
int nums_1[] = {97,95,98,99,95,2};
int nums_2[] = {2,97,95,98,99,95};
int nums_3[] = {2,3,3,3};
int nums_4[] = {2};
int nums_5[] = {2,2};
int nums_6[] = {2,2,2};
int nums_7[] = {};


int d_nums_0[] = {3,3,2};

TEST_CASE("Test week1/2 functions") {
  SUBCASE("swap_val_2_end"){
    CHECK( swap_val_2_end(nums_0,sizeof(nums_0)/sizeof(nums_0[0]), 2) == 2 );
    CHECK( swap_val_2_end(nums_1,sizeof(nums_1)/sizeof(nums_1[0]), 2) == 1 ); /* should return 1 indicating 1 value to replace */
    CHECK( swap_val_2_end(nums_2,sizeof(nums_2)/sizeof(nums_2[0]), 2) == 1 );
    CHECK( swap_val_2_end(nums_3,sizeof(nums_3)/sizeof(nums_3[0]), 2) == 1 );
    CHECK( swap_val_2_end(nums_4,sizeof(nums_4)/sizeof(nums_4[0]), 2) == 1 ); /* should return 1 indicating 1 value to replace */
    CHECK( swap_val_2_end(nums_5,sizeof(nums_5)/sizeof(nums_5[0]), 2) == 2 ); /* should return 2 indicating 2 values to replace */
    CHECK( swap_val_2_end(nums_6,sizeof(nums_6)/sizeof(nums_6[0]), 2) == 3 );
    CHECK( swap_val_2_end(nums_7,sizeof(nums_7)/sizeof(nums_7[0]), 2) == 0 );
  };
  SUBCASE("delete_end_elements"){
    delete_end_elements(d_nums_0,sizeof(d_nums_0)/sizeof(d_nums_0[0]), 2);
    CHECK( d_nums_0[2] == 0 );
  };
}


