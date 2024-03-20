#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "split.h"

TEST_CASE("Testing split") {

  string st_0 = "";
  vector<int> v_s_0 = split(st_0,' ');
  CHECK(0 == v_s_0.size());
  
  string st_1 = "1";
  vector<int> v_s_1 = split(st_1,' ');
  CHECK(v_s_1[0] == 1);
  
  string st_2 = "1 2";
  vector<int> v_s_2 = split(st_2,' ');
  CHECK(v_s_2[0] == 1);
  CHECK(v_s_2[1] == 2);

  string st_many = "1 2 -3 4 5 6 7 8 9";
  vector<int> v_s_many = split(st_many,' ');
  CHECK(v_s_many[0] == 1);
  CHECK(v_s_many[1] == 2);  
  CHECK(v_s_many[2] == -3);
  CHECK(v_s_many[3] == 4);
  CHECK(v_s_many[4] == 5);
  CHECK(v_s_many[5] == 6);
  CHECK(v_s_many[6] == 7);
  CHECK(v_s_many[7] == 8);
  CHECK(v_s_many[8] == 9);    

  string t_0 = "";
  string out_0 = trim_front(t_0,' ');
  CHECK(out_0 == "");

  string one_space = " ";
  string t_1_1 = one_space + "foobar";
  string out_1_1 = trim_front(t_1_1,' ');
  CHECK(out_1_1 == "foobar");

  string two_spaces = "  ";
  string t_1_2 = two_spaces + "foobar";
  string out_1_2 = trim_front(t_1_2,' ');
  CHECK(out_1_2 == "foobar");

  string b_1_1 =  "foobar" + one_space;
  string out_b_1 = trim_end(b_1_1,' ');
  CHECK(out_b_1 == "foobar");  
  
  string b_1_2 =  "foobar" + two_spaces;
  string out_b_2 = trim_end(b_1_2,' ');
  CHECK(out_b_2 == "foobar");

  string c_1_1 =  one_space + "foobar" + one_space;
  string out_c_1_1 = trim(c_1_1,' ');
  CHECK(out_c_1_1 == "foobar");  
  
  string c_1_2 =  two_spaces + "foobar" + two_spaces;
  string out_c_2_1 = trim(c_1_2,' ');
  CHECK(out_c_2_1 == "foobar");    



}



