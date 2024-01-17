#include <iostream>

#define MAX(a,b) (a < b) ? b : a

using namespace std;


int main() {

  int a = 5, b = 10;
  int aa = a, bb = b;  
  const int a_save = a, b_save = b;

  cout << "a is "
       << a
       << " and b is "
       << b
       << endl;

  int m = MAX(a++,b++);
  int mm = max(aa++,bb++);
  
  cout << "max of  a = "
       << a
       << " and  b = "
       << b
       << " is "
       << m
       << " ?!?!"
       << endl;

  cout << "max of aa = "
       << a_save
       << " and bb = "
       << b_save
       << " is "
       << mm
       << endl;
  
  return 0;
}


