#include <iostream>
#include <vector>
#include <string>

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
  
  for (int v : vec) {
    cout << v << " " << endl;
  }

  cout << "--------------------" << endl;

  for (double v_d : vec_d) {
    cout << v_d << " " << endl;
  }

  cout << "Sum: " << sum(vec) << endl;

  cout << "Sum double: " << sum(vec_d) << endl;

  vector<string> vs;
  vs.push_back("Hello ");
  vs.push_back("great ");
  vs.push_back("world! ");

  string vs_sum = sum(vs);

  cout << "--------------------" << endl;

  cout << "Sentence " << vs_sum << endl;

  return 0;
}
