#include <iostream>
#include <string>
#include <vector>

using namespace std;


struct student {
  int id;
  string name;
  int final;
  int midterm;
  vector<int> hw_grades;
};


int main() {

  student s;
  cout << "Enter the stuent's id: ";
  cin >> s.id;
  
  cout << "Enter the stuent's name: ";
  cin >> s.name;

  cout << "Enter the stuent's midterm: ";
  cin >> s.midterm;  

  cout << "Enter the stuent's final: ";
  cin >> s.final;


  cout << "Enter a homework score: ";
  int score;
  while(cin >> score) {
    cout << "Enter a homework score (^D to exit): ";
    s.hw_grades.push_back(score);
  }

  cout << s.name << " earned an " << s.final << " on their final" << endl;


  for (auto h_score : s.hw_grades) {
    cout << h_score <<  " ";
  }
  cout << endl;


  double total_class_score{0.0}, sum{0.0};
  double hw_average{0.0};

  for (auto h_score : s.hw_grades) {
    sum += h_score;
  }
  hw_average = sum/s.hw_grades.size();

  cout << "average: " << hw_average << endl;  
  
  return 0;
}
