#include <iostream>
#include <string>

using namespace std;

int fact(int n) {
    if (0 == n)
        return 1;
    else if (4 == n)
        throw string("help a 4!");
    else 
       return n*fact(n-1);
}

void other_function() {
    cout << "in other_function" << endl;
     try{ 
        fact(10);
    } catch (string & s) {
        cout << s << endl;
    }
    cout << "out other_function" << endl;
}


int main() {

    cout << "before other_function" << endl;
    //fact(10);
    other_function();
    cout << "after other_function" << endl;

    return 0;
}