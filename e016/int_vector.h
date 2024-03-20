#ifndef _INT_VECTOR_H_
#define _INT_VECTOR_H_

#include <iostream>


using namespace std;

struct int_vector {
    int id;
    int from;
    int to;
    
    int_vector(const int_vector & iv) : id(iv.id), from(iv.from), to(iv.to) {
      
    };
    
    int_vector() : id(-1), from(0), to(0) {};
    int_vector(int id, int from, int to) : id(id), from(from), to(to) {};
};

#endif
