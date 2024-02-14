#include <iostream>
#include <vector>

using namespace std;

template <typename T>
T sum(vector<T> & vec) {
  T ttl{0};
  for (T v : vec)
    ttl += v;

  return ttl;
}


int main() {
  vector<int> vec;
  vector<double> vec_d;  

  for (int i=0;  i < 10; i++) {
    vec.push_back(i);
    vec_d.push_back(((double) i) / (i+1));
  }

  int s = sum(vec);
  cout << "The sum of vec<int> is: " << s << endl;

  double d = sum(vec_d);
  cout << "The sum of vec_d<double> is: " << d << endl;

  vec[0] = -999;
  
  for (int v : vec) {
    cout << v << " " << endl;
  }

  for (double v_d : vec_d) {
    cout << v_d << " " << endl;
  }


  return 0;
}
