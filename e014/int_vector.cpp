#include <iostream>

#include "int_vector.h"

using namespace std;



std::ostream &operator<<(std::ostream &os, const int_vector & my_vector)
{
    for (int i=0; i < my_vector.my_size; i++) {
        os << my_vector.values[i] << " ";
    }
    os << "\n";
    os << my_vector.id << " " << my_vector.x << " " << my_vector.y;

    return os;
};

int main() {


    int_vector i_vec_1(9,1,2,10);
    int_vector i_vec_2 = i_vec_1;

    i_vec_1.values[3] = -99;

    cout << i_vec_1 << endl;
    cout << i_vec_2 << endl;




    return 0;
}