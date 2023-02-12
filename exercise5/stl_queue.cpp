#include <iostream>
#include <queue>

int main() {
  using namespace std;
  queue<int> q;
  for( int i = 0; i < 5; i++ ){
    q.push(i);
  }

  while (!q.empty()) {
    cout << "value: " << q.front() << endl;
    q.pop();
  }

  return 0;
}
