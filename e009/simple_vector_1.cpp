#include <iostream>
#include <vector>

using namespace std;

int sum(vector<int> & vec) {
  int ttl{0};
  for (int v : vec)
    ttl += v;

  return ttl;
}

double sum(vector<double> & vec) {
  double ttl{0.0};
  for (double v : vec)
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

  for (double v_d : vec_d) {
    cout << v_d << " " << endl;
  }


  return 0;
}
