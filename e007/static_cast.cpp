#include <iostream>

int main() {
    int x = 10;
    char c = 'a';
    int *p = static_cast<int*>(& c); // YIPES!

    return 0;
}