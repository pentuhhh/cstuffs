#include <stdio.h>
#include <stdlib.h>

#include "back.h"
#include "back.c"




void deleteend(struct node** head){
    //traverse to the second to the last node
    struct node *trav = *head;
    if(trav->next == NULL){
        free(trav);
        *head = NULL;

        
    } else {
        for(;trav->next != NULL && trav->next->next != NULL; trav = trav->next);
        struct node *temp = trav->next;

        trav->next = NULL;
        free(temp);
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
        printf("\nInput anything to delete end: ");
        scanf("%d", &input);
        deleteend(&head);
}
}