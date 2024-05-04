#ifndef BACK_H
#define BACK_H

struct node {
    int val;
    struct node *next;
};

struct node *createList();
void printList(struct node *head);

/*

add to list by index,
delete by index, value
update by index value

*/
#endif