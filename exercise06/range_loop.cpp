#include <iostream>
#include <string>

int main() {

  using namespace std;

  string vals = {'H','e','l','l','o'};

  for (char v : vals) {
    cout << "v = " << v << endl;
  }
  
  return 0;
}
