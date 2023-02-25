#include <iostream>

int main() {

  using namespace std;

  cout << "Please enter your name:";
  string name;
  cin >> name;
  string msg = "Hello " + name + " !";
  int len = msg.size();
  string all_stars(len+4,'*');
  string edge = '*' + string(len + 2, ' ') + '*';
  string middle = "* " + msg + " *";
  
  cout << all_stars << endl
       << edge  << endl
       << middle << endl
       << edge << endl
       << all_stars  << endl
       << endl;

  return 0;
}
