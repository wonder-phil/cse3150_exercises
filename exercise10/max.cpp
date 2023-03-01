#include <iostream>

using namespace std;

template <typename T>
T my_max(const T & x, const T & y) {
  return (x > y) ? x : y;
}

int main() {
  int m = my_max(2,3);
  cout << "m = " << m << endl;

  double d = my_max(2.5,3.5);
  cout << "d = " << d << endl;

  /* 
  auto a = my_max(2,3.99);
  cout << "a = " << a << endl;  
  */
}
