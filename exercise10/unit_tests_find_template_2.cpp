#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN


#include "doctest.h"

#include "comparison.h"
#include "find_template_2_header.h"
#include "find_template_2.h"





TEST_CASE("Testing find_template_2 int") {

  std::vector<int> x_5_int = {1,2,3,4,5};
  bool x_5_int_found_true = find_template_2(x_5_int, 2, compare_ints);
  CHECK( x_5_int_found_true == true );

  x_5_int_found_true = find_template_2(x_5_int, 3, compare_ints);
  CHECK( x_5_int_found_true == true );

  x_5_int_found_true = find_template_2(x_5_int, 1, compare_ints);
  CHECK( x_5_int_found_true == true );

  x_5_int_found_true = find_template_2(x_5_int, -1, compare_ints);
  CHECK( x_5_int_found_true == false );      

  std::vector<int> x_0_int = {};
  bool x_0_int_found_false = find_template_2<int>(x_0_int,7, compare_ints);
  CHECK( x_0_int_found_false == false );

  std::vector<int> x_1_int = {-9};
  bool x_1_int_found_true = find_template_2(x_1_int, -9, compare_ints);
  CHECK( x_1_int_found_true == true );

  bool x_1_int_found_false = find_template_2(x_1_int, 5, compare_ints);
  CHECK( x_1_int_found_false == false );

  bool x_5_int_found_false = find_template_2(x_5_int, -99, compare_ints);
  CHECK( x_5_int_found_false == false );    
  
}


TEST_CASE("Testing find_template_2 double") {

  std::vector<double> x_0_double = {};
  bool x_0_double_found_false = find_template_2<double>(x_0_double,7.0, compare);
  CHECK( x_0_double_found_false == false );

  std::vector<double> x_1_double = {-9.0};
  bool x_1_double_found_true = find_template_2(x_1_double, -9.0, compare);
  CHECK( x_1_double_found_true == true );

  bool x_1_double_found_false = find_template_2(x_1_double, 5.0, compare);
  CHECK( x_1_double_found_false == false );

  std::vector<double> x_5 = {1.0, 2.0 ,3.0 ,4.0 ,5.0};
  bool x_5_double_found_true = find_template_2(x_5, 2.0, compare);
  CHECK( x_5_double_found_true == true );

  std::vector<double> x_5_double = { 1.5 ,2.5 ,3.5 , 4.5 ,5.5 };
  x_5_double_found_true = find_template_2(x_5_double, 2.5, compare);
  CHECK( x_5_double_found_true == true );  

  bool x_5_double_found_false = find_template_2(x_5, -99.0, compare);
  CHECK( x_5_double_found_false == false );    
  
}




