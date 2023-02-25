#ifndef __STUDENT_FUNCTIONS_
#define __STUDENT_FUNCTIONS_

#include <string>
#include <vector>

using namespace std;


struct student {
  int id;
  string name;
  int final;
  int midterm;
  vector<int> hw_grades;
};

student get_student_struct_data();
void output_student_struct_data(const student & s, const double & final_total_score);
double compute_class_score(const student & s);

#endif
