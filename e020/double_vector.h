#ifndef _DOUBLE_VECTOR_H_
#define _DOUBLE_VECTOR_H_

#include <iostream>
#include <cmath>


using namespace std;

struct double_vector {
    double x;
    double y;
    
    double_vector(const double_vector & dv) : x(dv.x), y(dv.y) {
    };
    
    double_vector() : x(0.0), y(0.0) {};
    double_vector(double x, double y) :  x(x), y(y) {};
};




/**/
double square(const double & d);
double dot_product(const double_vector & one, const double_vector & two) ;
double magnitude(const double_vector & my_vector);
double cosine_distance(const double_vector & one, const double_vector & two);




#endif
