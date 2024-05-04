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

struct node *middleNode(struct node* head) {
    struct node *fast = head;
    struct node *slow = head;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}

int main(){

    srand(time(NULL));
    
    system("clear");
    struct node *list1 = createRandomListLengthLong();
   

    printHeader();


    sortlist(list1);
    printList(list1);
    

    struct node *middle = middleNode(list1);
    printNewLine();
    printf("Middle: %d", middle->val);



}