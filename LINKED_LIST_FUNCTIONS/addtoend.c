#include <stdio.h>
#include <stdlib.h>

#include "back.h"
#include "back.c"




void addtoend(struct node* head, int input){

    struct node *trav = head;

    /*
        this for loop will traverse to the end.
        english translation of the code:

        traverse to the end using the statement trav = trav->next but stop when trav->next is NULL
    */
    for(;trav->next; trav = trav->next);
    struct node *temp = malloc(sizeof(struct node));
    temp->val = input;
    temp->next = NULL;

    trav->next = temp;

}

int main(){

    srand(time(NULL));

    int input = 0;
    struct node *head = createList();
    while(input != -1)
    {    system("clear");
        printHeader();
        printList(head);
        printf("\nEnter a number: ");
        scanf("%d", &input);
        addtoend(head, input);
}
}