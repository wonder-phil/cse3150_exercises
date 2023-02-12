#include <iostream>
#include <vector>

using namespace std;


int main() {

  vector<int> vec;

  for (int i=0; i < 10; i++ ) {
    vec.push_back(i);
  }


  for (vector<int>::iterator k = vec.begin() ;
       k != vec.end() ;
       k++ ) {
    cout << *k << " " ;
  }
  cout << endl;


  return 0;
}
