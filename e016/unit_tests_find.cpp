#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"


#include <vector>
#include "myfind.h"



TEST_CASE("myfind") {
  
  SUBCASE("Edge cases") {
   

  };

  
  SUBCASE("Small cases") {
    std::vector<int> x = {1,5,8,11,25,30,32,47,78,99,101};
    bool foundIt_not = myfind<int,greaterThan>(x,33);
    CHECK(false == foundIt_not);

    bool foundIt_did = myfind<int,greaterThan>(x,x[4]);
    CHECK(true == foundIt_did);

  };
}


