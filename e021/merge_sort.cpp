#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

template<typename T, typename F>
void mergeSort(std::vector<T> & v, cont F& cmp) {
  return mergeSortAux(v,v.begin(), v.end(), cmp);
}


int main() {
    using namespace std;
    vector<int> uv = {1,20,304,4,5,-4, 17, 33, 101, 28};
    cout << "Init: "  << uv << endl;
    mergeSort(u,v, [](int a, int b) { return a < b; });

  return 0;
}