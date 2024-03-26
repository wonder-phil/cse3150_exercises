
#include <iostream>
#include <cmath>

#include "double_vector.h"


using namespace std;


double square(const double & d){
    return d*d;
}

double dot_product(const double_vector & one, const double_vector & two) {
    return one.x* two.x + one.y* two.y;
}

double magnitude(const double_vector & my_vector) {
    return sqrt(square(my_vector.x) + square(my_vector.y));
};


double cosine_distance(const double_vector & one, const double_vector & two) {
    double dot_prod = dot_product(one,two);
    double one_magnitude = magnitude(one);
    double two_magnitude = magnitude(two);

    double d = dot_prod/(one_magnitude*two_magnitude) ;
    if (d > 1.0) 
        d = 1.0;
    if (d < -1.0)
        d = -1.0;

    return acos(d);
}



