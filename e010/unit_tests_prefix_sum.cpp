#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
/*
  https://hackingcpp.com/cpp/tools/testing_frameworks.html
 */

#include "doctest.h"
#include "prefix_sum.h"

int nums_0[] = {};
int nums_1[] = {2,-3,3,2};
int nums_2[] = {1,1,-1,-1};
int nums_3[] = {-1,-1,1,1};

TEST_CASE("Edge cases") {
  CHECK(prefix_sum(nums_0,sizeof(nums_0)/sizeof(nums_0[0])) == 0);  
  CHECK(non_negative_sum(nums_0,sizeof(nums_0)/sizeof(nums_0[0])) );  
  CHECK(non_positive_sum(nums_0,sizeof(nums_0)/sizeof(nums_0[0])) );  
}

TEST_CASE("Testing prefix_sum function") {
  
  CHECK(prefix_sum(nums_1,sizeof(nums_1)/sizeof(nums_1[0])) == 4);
  CHECK(prefix_sum(nums_1,sizeof(nums_1)/sizeof(nums_1[0]) -2) == -1);  
  CHECK(prefix_sum(nums_2,sizeof(nums_2)/sizeof(nums_2[0])) == 0);
  CHECK(prefix_sum(nums_2,sizeof(nums_2)/sizeof(nums_2[0]) -1) == 1);
  CHECK(prefix_sum(nums_3,sizeof(nums_3)/sizeof(nums_2[0]) -1) == -1);
  CHECK(prefix_sum(nums_3,sizeof(nums_3)/sizeof(nums_3[0])) == 0);

  SUBCASE("non-negative sum") {
    CHECK_FALSE( non_negative_sum(nums_3,sizeof(nums_3)/sizeof(nums_3[0]))  );
    CHECK( non_negative_sum(nums_2,sizeof(nums_2)/sizeof(nums_2[0]))  );
  }

  SUBCASE("non-positive sum") {
    CHECK( non_positive_sum(nums_3,sizeof(nums_3)/sizeof(nums_3[0]))  );
    CHECK_FALSE( non_positive_sum(nums_2,sizeof(nums_2)/sizeof(nums_2[0]))  );
  }  
}


