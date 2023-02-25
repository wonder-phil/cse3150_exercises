#include <iostream>
#include <string>
#include <ostream>

using namespace std;
 
int main()
{
    ifstream file("file.txt");
 
    vector<string> v;
    string str;
 
    while (file >> str) {
        v.push_back(str);
    }
 
    copy(v.begin(), v.end(),
         ostream<string>(cout, "\n"));
 
    return 0;
}
