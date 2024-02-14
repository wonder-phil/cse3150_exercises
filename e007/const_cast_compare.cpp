#include <iostream>

int main() {
    using namespace std;

    const int j = 5;
    int * ptr = (int *)(&j);
    cout << "j = "  << j << endl;
    cout << "*ptr = " << *ptr << endl;
    cout << "&j = " << &j << endl;

    *ptr = 2;
    cout << "j = " << j << endl;
    cout << "*ptr = " << *ptr << endl;
    cout << "&j = " << &j << endl;

    cout << "-------------" << endl;

    const int x = 99;
    int *p = const_cast<int *>(&x);
    *p = -3;

    cout << "p  = " << p << endl;
    cout << "&x = " << &x << endl;
    cout << "x = " << x << endl;
    cout << "*p = " << *p << endl;

    return 0;
}