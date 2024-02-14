#include <iostream>

int main() {
    using namespace std;

    const int x = 99;
    int *p = const_cast<int *>(&x);
    *p = -3;

    cout << "p  = " << p << endl;
    cout << "&x = " << &x << endl;
    cout << "x = " << x << endl;
    cout << "*p = " << *p << endl;

    return 0;
}