#include <iostream>
#include <string>
#include <vector>

#include "student_functions.h"

using namespace std;



int main() {
  
  student s;
  s = get_student_struct_data();

  
  double final_total_score{0.0};
  final_total_score = compute_class_score(s);

  output_student_struct_data(s,final_total_score);
  
  return 0;
}
