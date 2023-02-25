#include <iostream>

int main() {

  using namespace std;

  cout << "Please enter your name:";
  string name;
  cin >> name;
  string msg = string("Hello ") + name + " !";
  cout << msg << endl;

  return 0;
}
