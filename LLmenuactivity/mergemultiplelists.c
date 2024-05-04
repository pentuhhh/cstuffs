#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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

struct node* mergeLists(struct node** lists, int listsSize) {
    int min, mindex, k, allListEmpty = 0;

    struct node *result;

    struct node *head = malloc(sizeof(struct node));
    result = head;

    struct node *current;
    head->next = NULL;

    while(allListEmpty != listsSize){
        min = 10000, mindex = 0, allListEmpty = 0;
        
        for(k = 0; k < listsSize; k++){
            current = lists[k];
            if(current){
                if(current->val < min){
                    min = current->val;
                    mindex = k;
                }
            } else {
                allListEmpty++;
            }
        }
        current = lists[mindex];
        head->next = current;
        if(current){
            lists[mindex] = current->next;
        }
        head = head->next;
    }

    

    return result->next;
}



int main(){
    system("clear");
    
    srand(time(NULL));

    int length = genRand(3, 3);
    struct node **lists = calloc(length, sizeof(struct node*));
    for(int i = 0; i < length; i++){
        lists[i] = createRandomListLength();
        sortlist(lists[i]);
    }

    printHeader();

    for(int i = 0; i < length; i++){
        printList(lists[i]);
        printNewLine();
    }

    struct node *result = mergeLists(lists, length);

    printNewLine();
    printf("Merged List: \n");
    printList(result);



}