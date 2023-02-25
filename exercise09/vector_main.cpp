#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


struct int_vector {
  int id;
  int from;
  int to;
};


int main() {

  ifstream in_file;
  in_file.open("vectors_2D.txt");

  vector<int_vector> vect;

  int id{0};
  string from, to;
  while (in_file >> from >> to) {
    cout << from << " " << to << " " << endl;
    int_vector i_v;
    i_v.from = atoi(from.c_str());
    i_v.to = atoi(to.c_str());
    i_v.id = id++;
    vect.push_back(i_v);
  }
  cout << endl;
  cout << "------------------" << endl;

  for (auto v : vect) {
    cout << v.id << ": "  << v.from << " to " << v.to << endl;
  }

  cout << "------------------" << endl;
  cout << "Sorted:" << endl;
  
  sort(vect.begin(),
       vect.end(),
       [](const int_vector & left, const int_vector & right) {
	 return left.id > right.id;
       });

  for (auto v : vect) {
    cout << v.id << ": "  << v.from << " to " << v.to << endl;
  }  
       
  in_file.close();

  return 0;
}
