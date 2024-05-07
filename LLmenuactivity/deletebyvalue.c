#include <stdio.h>
#include <stdlib.h>

#include "back.h"
#include "back.c"


void deleteval(struct node **head, int input){

    struct node *trav = *head;
    if(*head != NULL){

        if(trav->val == input){
            struct node *temp = *head;
            
            *head = (*head)->next;

            free(temp);
        } else {

            for(;trav->next != NULL && trav->next->val != input; trav = trav->next);

            struct node *temp = trav->next;
            trav->next = trav->next->next;
            free(temp);
        }

        
    }

}

int main(){

    srand(time(NULL));

    int input = 0;
    struct node *head = createList();
    while(input != -1)
    {    system("clear");
        printHeader();
        printList(head);
        printf("\nEnter a index: ");
        scanf("%d", &input);
        if(input != -1){

            deleteval(&head, input);
        
        }
}
}