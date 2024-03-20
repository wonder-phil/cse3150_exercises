#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

template<typename FrontIterator, typename BackIterator>
void insert_into(FrontIterator & front, BackIterator init, BackIterator  one_past_last) {

    while (*init != *one_past_last) {
        front.push_back(*init);
        ++init;
    }
}

int main() {
    using namespace std;

    vector<int> v = {1,2,3,4,5};
    vector<int> w = {6,7,8,9,10} ;

    insert_into(v,w.begin(), w.end());

    for (auto a : v) {
        cout << a << " ";    
    }
    cout << endl;

    return 0;
}