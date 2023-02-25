#include <iostream>
#include <cmath>

using namespace std;

int main() {

  double start = -1.0, finish = 1.0;
  double pi = 2 * asin(1.0);
  double x = -pi;

  cout << "pi: " << pi << endl;

  for (int i = 0; i <= 200; i++, x += (2*pi)/200) {
    cout <<  x << ", " << cos(x) << " " << endl;
  }

}
