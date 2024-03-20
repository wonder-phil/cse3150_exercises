#include "split.h"

#include <iostream>


using namespace std;

string trim(string s, char delim) {
  string temp = trim_front(s, delim);
  string r_value = trim_end(temp, delim);

  return r_value;
}

string trim_front(string s, char delim) {
  int place = 0, size = s.size();
  string r_value;

  for (auto c : s) {
    if (c != delim) {
      r_value = s.substr(place,size);
      return r_value;
    }
    place++;
  }
  return r_value; // ""
}


string trim_end(string s, char delim) {
  int place = s.size();
  string r_value;

  for (auto ss = s.rbegin(); ss != s.rend(); ss++) {
    if (*ss != delim) {
      r_value = s.substr(0,place);
      return r_value;
    }
    place--;
  }
  return r_value; // ""
}


vector<int> split(string s_str, char delim) {
  vector<int> v_ints;

  int i = 1;
  string s = trim(s_str, ' ');
  int size = s.size();

  if (0 == size) {
    return v_ints;
  }

  string temp;
  for (auto c : s) {
    if (i == size) {
      temp += c;
      v_ints.push_back(stoi(temp));      
    } else {
      if (c == delim) {
	v_ints.push_back(stoi(temp));
	temp.clear();
      } else {
	temp += c;
      }
    }
    i++;
  }

  return v_ints;
}
