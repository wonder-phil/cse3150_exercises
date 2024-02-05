#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

struct node {
    int data;
    struct node * next;
};

struct node * build_linked_list(int number_of_nodes);
void print_linked_list(struct node * first, int number_of_nodes);
int delete_linked_list(struct node * first, int number_of_nodes);


#endif
