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

struct node* deleteDuplicates(struct node* head) {
    struct node* result = head;

    while(head && head->next){

        if(head->val == head->next->val){
            struct node* temp = head->next;
            head->next = head->next->next;
            free(temp);
        } else {
            if(head && head->next){
                head = head->next;
            } else {
                head = NULL;
            }
        }
        
    }

    return result;
}

int main(){

    srand(time(NULL));
    
    system("clear");
    struct node *list1 = createRandomListLengthLongHighChanceDuplicate();
    
   

    printHeader();


    sortlist(list1);
    printList(list1);
    

    struct node *newlist = deleteDuplicates(list1);
    printNewLine();
    printList(newlist);



}