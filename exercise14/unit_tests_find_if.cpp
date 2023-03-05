#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN


#include "doctest.h"
#include "myfind_if.h"


TEST_CASE("Testing find") {

  std::vector<int> x_0 = {};
  auto x_0_found_iterator = myfind_if(x_0.begin(), x_0.end(),
				      [](int v) -> bool { return 51 == v; } );
  CHECK( x_0.end() == x_0_found_iterator );

  std::vector<int> x_1 = {-9};
  auto x_1_found_true_iterator = myfind_if(x_1.begin(), x_1.end(),
					   [](int v) -> bool { return -9 == v; } );
  CHECK( x_1_found_true_iterator == x_1.begin() );

  auto x_1_found_false_iterator = myfind_if(x_1.begin(), x_1.end(),
					   [](int v) -> bool { return 555 == v; } );
  CHECK( x_1_found_false_iterator == x_1.end() );

  std::vector<int> x_5 = {1,2,3,4,5};
  std::vector<int>::iterator it = x_5.begin();
  it = it+1;
  
  auto x_5_found_true_iterator = myfind_if(x_5.begin(), x_5.end(),
					[](int v) -> bool { return 2 == v; } );
  CHECK( *x_5_found_true_iterator ==  2);
  CHECK( x_5_found_true_iterator ==  it);  

  auto x_5_found_false_iterator = myfind_if(x_5.begin(), x_5.end(),
					 [](int v) -> bool { return -555 == v; } );
  CHECK( x_5_found_false_iterator == x_5.end() );

  std::list<int> list_5 = {1,2,3,4,5};
  auto list_5_found_false_iterator = myfind_if(list_5.begin(), list_5.end(),  
  					[](int v) -> bool { return 2 == v; } );
  CHECK( 2 == *list_5_found_false_iterator );  
  
}



