#ifndef __VECTOR_2D_
#define __VECTOR_2D_

#include <vector>
#include <string>

using namespace std;

struct student {
  int id;
  string name;
  int final;
  int midterm;
  vector<int> hw_grades;
};

student get_student();
void print_student(student s);

#endif
