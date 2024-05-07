#include <stdio.h>
#include <stdlib.h>

#include "back.h"
#include "back.c"

struct node* removeNthFromEnd(struct node* head, int n) {
    
    struct node* dummy = head;
    struct node* delayPointer = dummy;
    struct node* pointer = dummy;
    

    while(n != 0 && pointer){
        pointer = pointer->next;
        --n;
    }

    if(n != 0) return 0;

    if(!pointer) return head->next;

    while(pointer->next){
        pointer = pointer->next;
        delayPointer = delayPointer->next;
    }

    struct node* temp = delayPointer->next;
    delayPointer->next = delayPointer->next->next;
    free(temp);


    return dummy;

}


int main(){

    srand(time(NULL));

    int index = 0;
    struct node *head = createList();
    while(index != -1)
    {    system("clear");
        printHeader();
        printList(head);
        printf("\nEnter number of nodes from the end: ");
        scanf("%d", &index);
        removeNthFromEnd(head, index);
        
}
}