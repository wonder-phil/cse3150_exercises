#include <iostream>
#include <queue>

#include "readin_return_int_queue.h"
#include "prefix_sum.h"

using namespace std;

int main(){ 

   queue<int> q = get_ints_from_file_as_queue("input.txt");

    int array_len = q.size();
    int array_for_prefix_sum[array_len];

    int position = 0;
    while(! q.empty()) {
        array_for_prefix_sum[position++]  = q.front();
        cout << q.front() << endl;
        q.pop();
    }

    if (non_neg_prefix_sum(array_for_prefix_sum,array_len)) {
        cout << "non-neg" << endl;
    } else {
        cout << "neg" << endl;
    }

    return 0;
}
