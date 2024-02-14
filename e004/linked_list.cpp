#include <iostream>

#include "linked_list.h"


using namespace std;

/*
build_linked_list:
	returns a pointer to the first node in the linked list
    If 0 == total_new_elements, then return null
*/
struct node * build_linked_list(int total_new_elements) {
    struct node * linked_list = new node;
    struct node * root = linked_list;
        root->data = -1;
        

        for (int i = 0 ; i < total_new_elements; i++) {
            linked_list->next = new node;
            linked_list->data = i+1;
            linked_list = linked_list->next;
        }

        return root;
}


void print_linked_list(struct node * start, int total_elements) {
    struct node * linked_list =  start;

    for (int i = 0; i < total_elements; i++) {
        cout << linked_list->data << endl;
        linked_list = linked_list->next;
    }
}

int delete_linked_list(struct node * first, int number_of_nodes) {
    struct node * linked_list = first;
    struct node * lag_node = first;

    int deleted_number = 0;

    for (int i = 0; i < number_of_nodes; i++) {
        linked_list =  linked_list->next;
        delete lag_node;  deleted_number++;
        lag_node = linked_list;
    }

    return deleted_number;
}