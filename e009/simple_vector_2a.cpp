#include <iostream>
#include <vector>

using namespace std;

template <class T>
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

  vec[0] = -999;

  try {
    int k = vec.at(10);
  } catch (out_of_range & oor) {
    cerr << "out or range" <<endl;
  }
  
  for (int v : vec) {
    cout << v << " " << endl;
  }

  for (double v_d : vec_d) {
    cout << v_d << " " << endl;
  }


  return 0;
}
