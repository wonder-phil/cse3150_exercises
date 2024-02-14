#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = { 'h', 'e', 'l', 'l', 'o'};

    for (int i=0; i < s.size(); i++ ) {
        cout << s[i] << ' ';
    }
    cout << endl;

    for (int i=0; i < s.size(); i++ ) {
        cout << static_cast<int>(s[i]) << ' '; // (int)(s[i]) 
    }
    cout << endl;

    return 0;
}