#include <istream>
#include <vector>

#include "ints_read.h"

using namespace std;


vector<int> ints_read(istream & in_stream) {
    vector<int> res;
    for(int i; in_stream >> i; ) {
        res.push_back(i);
    }

    return res;
}


vector<int> ints_read(istream & in_stream, const string & terminal) {
    vector<int> res;
    for(int i; in_stream >> i; ) {
        res.push_back(i);
    }

    if (in_stream.eof())
        return res;
    
    if (in_stream.fail()) {
        in_stream.clear();
        string s;
        if (in_stream >> s && s == terminal) {
            return res;
        }
        in_stream.setstate(ios_base::failbit);
    }
  
    return res;

};



