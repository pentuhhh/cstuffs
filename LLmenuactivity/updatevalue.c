#include <stdio.h>
#include <stdlib.h>

#include "back.h"
#include "back.c"

void updatevalue(struct node *head, int input, int valuetoupdate){

    struct node *trav = head;

    for(;trav->val != valuetoupdate && trav->next; trav = trav->next);

    if(trav->val == valuetoupdate){
        trav->val = input;
    }
}


int main(){

    srand(time(NULL));

    int input, valuetoupdate;
    struct node *head = createList();

    while(input != -1)
    {
    system("clear");
        printHeader();
        printList(head);
        printf("\nEnter value to update: ");
        scanf("%d", &valuetoupdate);
        if(valuetoupdate < 0){
            return 0;
        }
        printf("\nEnter new non-negative value: ");
        scanf("%d", &input);
        if(input > 0){
            updatevalue(head, input, valuetoupdate);
        }
}
}