#include <iostream>
#include <list>
#include <string>


int main() {

  using namespace std;

  list<int> lst = {0,1,2,3};

  for (int my_int : lst) {
    cout << "v = " << my_int << endl;
  }

  lst.push_back(4);

  for (int my_int : lst) {
    cout << "v = " << my_int << endl;
  }

   lst.pop_front();

  for (int my_int : lst) {
    cout << "v = " << my_int << endl;
  }
  
  return 0;
}
