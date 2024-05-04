#include <stdio.h>
#include <stdlib.h>

#include "back.h"
#include "back.c"


void swapval(struct node *a, struct node* b){
    int temp = a->val;
    a->val = b->val;
    b->val = temp;
}

void sortlist(struct node *head){
    int swap;
    struct node *ptr;
    struct node *lptr = NULL;

    if(head == NULL){
        return;
    }

    do {

        swap = 0;

        ptr = head;

        while (ptr->next != lptr){
            if(ptr->val > ptr->next->val){
                swapval(ptr, ptr->next);
                swap = 1;
            }
            ptr = ptr->next;
        }
        lptr = ptr;

    } 
    while (swap);
}

int main(){

    srand(time(NULL));
    
    struct node *head = createList();
    system("clear");
        printHeader();
        printList(head);
        sortlist(head);
        printNewLine();
        printList(head);

}