#include <iostream>

using namespace std;

void update(int & my_ref) {
   my_ref = -99;
}

int main() {

    int x = 100;

    cout << "x = " << x << endl;
    update(x);
    cout << "x = " << x << endl;

    return 0;
}