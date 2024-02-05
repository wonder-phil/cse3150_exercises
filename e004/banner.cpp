#include <iostream>

using namespace std;


void output_details (const string name) {

    int len = name.size();

    string top_and_bottom = "*" + string(len+2, '*') + "*";

    string name_row = "* " + name + " *";
    string empty_row = "* " + string(len, ' ') + " *";
    
    cout << top_and_bottom << endl 
        << empty_row << endl
        << name_row << endl
        << empty_row << endl
        << top_and_bottom << endl;

}

int main() {

    string name;
    cout << "Please enter your name: ";
    cin >> name;

    output_details(name);

    return 0;
}