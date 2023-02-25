#include <iostream>
#include <stack>

int main() {
  using namespace std;
  stack<int> si;
  for( int i = 0; i < 5; i++ ){
    si.push(i);
  }

  while (!si.empty()) {
    cout << "value: " << si.top() << endl;
    si.pop();
  }

  return 0;
}
