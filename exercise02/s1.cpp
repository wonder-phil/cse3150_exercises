#include <iostream>

int main() {
  using namespace std;
  cout << "Please enter your name:";

  string name;
  cin >> name;
  cout << "Hello "
       << name
       << " !"
       << endl;

  return 0;
}
