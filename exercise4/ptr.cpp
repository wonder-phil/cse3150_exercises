#include <iostream>

int main()  {
  using namespace std;
  int* px = new int;

  *px =  25;

  cout << "*px = " << *px << endl;
  cout << "px = " << px << endl;
  
  delete px;
  return 0;
}
