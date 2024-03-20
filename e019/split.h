
#ifndef __SPLIT_H
#define __SPLIT_H

#include <vector>
#include <string>

using namespace std;

vector<int> split(string s, char delim);

string trim(string s, char delim);
string trim_front(string s, char delim);
string trim_end(string s, char delim);

#endif
