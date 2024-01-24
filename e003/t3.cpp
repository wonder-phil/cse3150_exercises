#include <iostream>

#define MAX(a,b) (a < b) ? b : a

using namespace std;


int main() {

  int a = 5, b = 10;
  int aa = a, bb = b;  
  const int a_save = a, b_save = b;

  cout << "a is "
       << a // 5
       << " and b is "
       << b // 10
       << endl;

  int m = MAX(a++,b++);
  int mm = max(aa++,bb++);
  
  cout << "max of  a = "
       << a // 6
       << " and  b = "
       << b // 12
       << " is "
       << m // 11
       << " ?!?!"
       << endl;

  cout << "aa = "
       << aa // 6
       << " and bb = "
       << bb // 11
       << endl;     

  cout << "max of save_aa = "
       << a_save  // 5
       << " and save_bb = "
       << b_save // 10
       << " is "
       << mm  // 10
       << endl;
  
  return 0;
}


