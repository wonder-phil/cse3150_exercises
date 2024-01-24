#include "prefix_sum.h"



int prefix_sum(int ary[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += ary[i];
    }

    return sum;
} 

/**

bool non_negative_sum(int ary[], int length) {



}

*/