#include <stdio.h>
#include <stdlib.h>

#include "back.h"
#include "back.c"




void deletestart(struct node** head){
    if(*head != NULL){
        struct node *temp = *head;
        *head = (*head)->next;
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
        printf("\nInput anything to delete start: ");
        scanf("%d", &input);
        deletestart(&head);
}
}