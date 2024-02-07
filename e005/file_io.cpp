
#include <iostream>
#include <fstream>

using namespace std;

int main() {

  ifstream input_file;
  input_file.open("input.txt");

    while (!input_file.eof()) {
      string in_str;
      input_file >> in_str;
      int x;
      x = stoi(in_str);
      cout << x << endl;
    }

  input_file.close();   
}
