#include <iostream>

using namespace std;

void printGreeting(string name) {
  name[0] = 'W';
  const string msg = "Hello " + name + " !";
  const int len = msg.size();
  const string all_stars(len+4,'*');
  const string edge = '*' + string(len + 2, ' ') + '*';
  const string middle = "* " + msg + " *";
  
  cout << all_stars << endl
       << edge  << endl
       << middle << endl
       << edge << endl
       << all_stars  << endl
       << endl;

}

int main() {
  
  cout << "Please enter your name:";
  string name;
  cin >> name;
  printGreeting(name);

  cout << "Again: "
       << name << endl;
  return 0;
}
