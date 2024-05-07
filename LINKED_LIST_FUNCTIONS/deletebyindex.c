#include <stdio.h>
#include <stdlib.h>

#include "back.h"
#include "back.c"


void deleteindex(struct node **head, int index){

    struct node *trav = *head;
    if(*head != NULL){

        if(index == 0){
            struct node *temp = *head;
            *head = (*head)->next;
            free(temp);
        } else {
            int i;
            for(i = 0; i != index - 1 && trav->next; i++, trav = trav->next);
            
            if(i == (index -1) && trav->next->next != NULL){
                trav->next = trav->next->next;
            } else if (i == (index - 1) && trav->next->next == NULL){
                trav->next = NULL;
            }
        }

        
    }

}

int main(){

    srand(time(NULL));

    int index = 0;
    struct node *head = createList();
    while(index != -1)
    {    system("clear");
        printHeader();
        printList(head);
        printf("\nEnter a index: ");
        scanf("%d", &index);
        deleteindex(&head, index);
        
}
}