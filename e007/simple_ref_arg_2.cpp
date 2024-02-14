#include <iostream>
#include <string>

using namespace std;

void update_string(string my_string) {
   for(int i=0; i < my_string.size(); i++) {
        my_string[i] = 88; // ASCII(88) = 'X'
   }
   cout << "my_string = " << my_string << endl;
}

int main() {

    string s = { 'h', 'e', 'l', 'l', 'o'};

    cout << "s = " << s << endl;
    update_string(s);
    cout << "s = " << s << endl;
   
    return 0;
}