#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN


#include "doctest.h"
#include "find.h"




TEST_CASE("Testing find") {

  std::vector<int> x_0 = {};
  bool x_0_found = find(x_0,7);
  CHECK( x_0_found == false );

  std::vector<int> x_1 = {-9};
  bool x_1_found_true = find(x_1, -9);
  CHECK( x_1_found_true == true );

  bool x_1_found_false = find(x_1, 5);
  CHECK( x_1_found_false == false );

  std::vector<int> x_5 = {1,2,3,4,5};
  bool x_5_found_true = find(x_5, 2);
  CHECK( x_5_found_true == true );

  bool x_5_found_false = find(x_5, -99);
  CHECK( x_5_found_false == false );    
  
}



