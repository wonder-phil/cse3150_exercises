#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "myfind.h"


TEST_CASE("Testing find") {

  std::vector<int> x_0 = {};
  auto x_0_found_iterator = myfind(x_0.begin(), x_0.end(), 7);
  CHECK( x_0.end() == x_0_found_iterator );

  std::vector<int> x_1 = {-9};
  auto x_1_found_true_iterator = myfind(x_1.begin(), x_1.end(), -9);
  CHECK( x_1_found_true_iterator == x_1.begin() );

  auto x_1_found_false_iterator = myfind(x_1.begin(), x_1.end(), 5);
  CHECK( x_1_found_false_iterator == x_1.end() );

  std::vector<int> x_5 = {1,2,3,4,5};
  std::vector<int>::iterator it = x_5.begin();
  it = it+1;
  
  auto x_5_found_true_iterator = myfind(x_5.begin(), x_5.end(), 2);
  CHECK( *x_5_found_true_iterator ==  2);
  CHECK( x_5_found_true_iterator ==  it);  

  auto x_5_found_false_iterator = myfind(x_5.begin(), x_5.end(), -99);
  CHECK( x_5_found_false_iterator == x_5.end() );    
  
}



