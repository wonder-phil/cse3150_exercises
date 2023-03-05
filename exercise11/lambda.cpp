#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

  vector<int> vect = {3,999,1,2,17,13,-4,5,66,7,8};


  cout << "----input------------" << endl;
  for (auto v : vect) {
    cout << v << " " ;
  }
  cout << endl;

  cout << "------------------" << endl;
  
  sort(vect.begin(),
       vect.end(),
       [](const int & left, const int & right) {
	 return left < right;
       });


  for (auto v : vect) {
    cout << v << " " ;
  }  
  cout << endl;

  return 0;
}
