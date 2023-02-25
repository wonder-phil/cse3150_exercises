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

  cout << "In reverse" << endl;


  for (vector<int>::reverse_iterator k = vec.rbegin() ;
       k != vec.rend() ;
       k++ ) {
    cout << *k << " " ;
  }
  cout << endl;


  for (auto k = vec.rbegin() ;
       k != vec.rend() ;
       k++ ) {
    cout << *k << " " ;
  }
  cout << endl;  

  vector<int>::iterator on3 = vec.begin() + 2;
  cout << "rank(3) is " << *on3 << endl;
  *on3 = 17;
  cout << "rank(3) is " << *on3 << endl;  
  
  return 0;
}
