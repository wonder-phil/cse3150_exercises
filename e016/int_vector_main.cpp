#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>

#include "int_vector.h"

using namespace std;


int main() {

    vector<int_vector> my_int_vector;

    ifstream in_file;
    in_file.open("vectors_2D.txt");

    int id = 0;

    int from, to;
    while (in_file >> from >> to) {
        int_vector one_int_vector = int_vector(id++, from, to);

        my_int_vector.push_back(one_int_vector);
    }

    sort(   my_int_vector.begin(),
            my_int_vector.end(),
            [](const int_vector & left, const int_vector & right) -> bool {
                return left.id > right.id;
            }

    );

    for ( auto vect : my_int_vector) {
        cout << vect.id << " " << vect.from << " " << vect.to << endl;
    }


    in_file.close();

    return 0;
}

