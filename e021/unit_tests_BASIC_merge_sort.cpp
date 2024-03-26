#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
//#include "merge_sort.h"
#include "merge_sort_BASIC_TEMPLATES.h"

TEST_CASE("Testing merge_sort") {

  SUBCASE("edge cases") {

  }
 
  SUBCASE("small cases") {
    auto cmp = [](int a, int b) { return a < b; };
    auto reverse_cmp = [](int a, int b) { return a >= b; };  
    
    std::vector<int> x_0 = { };
    CHECK( x_0.begin() == x_0.end() );

    merge_sort(x_0, [](int a, int b) { return a < b; });

    CHECK( x_0.begin() == x_0.end() );
    

    int three = 3;
    std::vector<int> x_1 = { three };
    merge_sort(x_1, cmp);
    CHECK( x_1[0] == three );
    CHECK( x_1.size() == 1 );

    std::vector<double> x_4 = { -5.0, -4.0, -3.0, -2.0 };  
    merge_sort(x_4, reverse_cmp );

    CHECK( -2.0 == x_4[0] );
    CHECK( -3.0 == x_4[1] );
    CHECK( -4.0 == x_4[2] );
    CHECK( -5.0 == x_4[3] );

    int v[] = { 9,8,7,6,5,4,3,2,1 };
    
    std::vector<double> x_5(v, v+ sizeof(v)/sizeof(v[0]));
    merge_sort(x_5, cmp );

    int my_size = x_5.size();
    for(int i = 0; i < x_5.size(); i++) {
      CHECK ( v[i] == x_5[my_size -i -1] );
    }
  }
  
}



