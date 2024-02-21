#include <iostream>

#include <fstream>
#include <queue>

#include "readin_return_int_queue.h"

using namespace std;


queue<int> get_ints_from_file_as_queue(string file_name) {

  ifstream input_file;
  input_file.open("input.txt");

  queue<int> int_queue;

    while (!input_file.eof()) {
      string in_str;
      input_file >> in_str;
      cout << in_str << endl;
      int in_int;
      if (in_str == " " || in_str == "\n") 
        break;
      in_int = stoi(in_str);
      int_queue.push(in_int);
      //cout << in_int << endl;
    }

  input_file.close();   

  return int_queue;
}