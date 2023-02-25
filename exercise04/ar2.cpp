#include <iostream>

int main()  {
  using namespace std;
  int x = 10;
  int* px = &x;
  *px = 25;
  cout << "x = " << x << endl;
  cout << "*px = " << *px << endl;
  
  return 0;
}
