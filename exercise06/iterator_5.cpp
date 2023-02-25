#include <iostream>
#include <vector>
#include <list>

using namespace std;

template<class Container>
void rprint(Container & c) {
  for (auto k = c.rbegin(); k != c.rend() ; k++ ) {
    cout << *k << " ";
  }
  cout << endl;
}


int main() {

  vector<int> vec;

  for (int i=0; i < 10; i++ ) {
    vec.push_back(i);
  }

  cout << "In reverse" << endl;

  rprint(vec);

  list<double> d_list;
  for (int i=0; i < 10; i++ ) {
    d_list.push_back(i + 0.5);
  }

  rprint(d_list);
  
  return 0;
}
