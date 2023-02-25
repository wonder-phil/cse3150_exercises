#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN


#include "doctest.h"
#include "student_functions.h"




TEST_CASE("Testing compute_class_score") {

  student s;
  s.final = 100;
  s.midterm = 100;
  s.hw_grades.push_back(100);
  s.hw_grades.push_back(100);

  double class_score = compute_class_score(s);
  CHECK( class_score >= 99.9  );
  CHECK( class_score <= 100.1 );  


}



