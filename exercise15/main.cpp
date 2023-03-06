
#include <iostream>

template<typename T>
T my_max(const T& a, const T& b) {
  return a > b ? a : b;
}

using namespace std;


int main() {
  int x = 3;
  int y = my_max<int>(x,5);
  cout << "max : " << y << endl;

  double d = my_max<double>(3,-3);
  cout << "max : " << d << endl;
}
