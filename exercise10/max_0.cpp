#include <iostream>

using namespace std;


int my_max(const int & x, const int & y) {
  cout << "int" << endl;
  return (x > y) ? x : y;
}

double my_max(const double & x, const double & y) {
  cout << "double" << endl;
  return (x > y) ? x : y;
}

int main() {
  int m = my_max(2,3);
  cout << "m = " << m << endl;

  double d = my_max(2.5,3.5);
  cout << "d = " << d << endl;

}
