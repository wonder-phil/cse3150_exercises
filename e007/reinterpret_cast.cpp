#include <iostream>

using namespace std;

int main() {
    int x = 10;
    char c = 'a';
    
    //int *p = static_cast<int*>(& c); // should fail 
    int *p = reinterpret_cast<int*>(& c); // reinterpret_cast<int*>(& c);

    cout << *p << endl;
    return 0;
}