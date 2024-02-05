#include <iostream>

#include "linked_list.h"

using namespace std;

int main() {

    struct node * linked_list_one_elt = build_linked_list(1);
    print_linked_list(linked_list_one_elt,1);

    cout << endl <<  "---------" << endl;

    struct node * linked_list_two_elts = build_linked_list(2);
    print_linked_list(linked_list_two_elts,2);

    return 0;
}