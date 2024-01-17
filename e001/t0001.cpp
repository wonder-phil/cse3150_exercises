#include <iostream>


int fact(int n){

    if (0 == n) {
        return 1;
    } else {
        return n* fact(n-1);
    }

}

int main() {

    using namespace std;

    cout << "Hello world!" << endl;

    cout << "fact(1): " << fact(1) << endl;
    cout << "fact(2): " << fact(2) << endl;
    cout << "fact(3): " << fact(3) << endl;
    cout << "fact(4): " << fact(4) << endl;

    return 0;
}