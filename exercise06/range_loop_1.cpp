#include <iostream>
#include <string>

int main() {

  using namespace std;

  string vals = {'H','e','l','l','o'};

  for (char v : vals) {
    cout << "range loop, closed interval v = " << v << endl;
  }


  for (int i = 0; i < vals.size(); i++) {
    cout << "open interval v = " << vals[i] << endl;
  }
  
  return 0;
}
