#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"


#include "prefix_sum.h"


int arry_0[] = {};
int arry_1[] = {-5, 4, -1};
int arry_2_non_neg_pfix[] = {1,-1,1, -1, 1, 1, -1 ,-1};
int arry_4_non_neg_pfix[] = {1,-1,1, -1};
int arry_4_neg_pfix[] = {1,-1,-1, 1};

TEST_CASE("prefix sum") {

    SUBCASE("sum case") {

        CHECK_EQ(sum(arry_1, sizeof(arry_1)/sizeof(arry_1[0])), -2);

    };

    SUBCASE("non-neg sum case") {

        CHECK( non_neg_prefix_sum(arry_0, 0) );

        CHECK( non_neg_prefix_sum(arry_4_non_neg_pfix, sizeof(arry_4_non_neg_pfix)/sizeof(arry_4_non_neg_pfix[0])) );
        CHECK_FALSE( non_neg_prefix_sum(arry_4_neg_pfix, sizeof(arry_4_neg_pfix)/sizeof(arry_4_neg_pfix[0])) );

        CHECK_FALSE( non_neg_prefix_sum(arry_1, sizeof(arry_1)/sizeof(arry_1[0])) );
        CHECK( non_neg_prefix_sum(arry_2_non_neg_pfix, sizeof(arry_2_non_neg_pfix)/sizeof(arry_2_non_neg_pfix[0])));


    }

}