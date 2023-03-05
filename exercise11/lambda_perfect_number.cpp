#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void divides_by_sum(const vector<int> & vect, int & d, int & sum ) {
  for_each(vect.begin(), vect.end(),
	   [&d, &sum](int elt) mutable
	   { cout << d << " " << sum << endl; if (elt % d == 0) { sum += d; }; d++; } );
}

int main() {

  vector<int> vect(5,6);
  vector<int> vect28(27,28);

  cout << "----input------------" << endl;
  for (auto v : vect) {
    cout << v << " " ;
  }
  cout << endl;

  cout << "------------------" << endl;
  
  for (auto v : vect) {
    cout << v << " " ;
  }  
  cout << endl;


  int d = 1;
  int sum = 0;
  divides_by_sum(vect,d,sum);
  cout << "sum = " << sum << endl;

  return 0;
}
