#include <stdio.h>
#include <stdlib.h>

#include "back.h"
#include "back.c"




void addbyindex(struct node* head, int input, int index){

    struct node *trav = head;
    struct node *temp = malloc(sizeof(struct node));

    // if index is zero, it means we add to the start. see addtostart.c
    if(index == 0){

        temp->next = trav->next;
        trav->next = temp;
        temp->val = trav->val;
        trav->val = input;

    } else {
        //if it is not zero then we add normally
        int i = 0;

        // this for loop will traverse to the node right before the index of the node that we want

        //if we want to add a node to the 5th place, we traverse to the 4th node
        for(i = 0; i != (index - 1) && trav->next != NULL; i++, trav = trav->next);

        if(i != (index -1)){
            printf("invalid index\n\n");
            return;
        }

        /*
            since the we are at the node right before the index we want to insert into.
        */
        temp->val = input;
        // give our new node the new value
        temp->next = trav->next;
        // our new node will now point to the next node
        trav->next = temp;
        // the previous node will now point to temp

        /*
        visualization:

        1 -> 2 -> 3 ->4

        we want to insert a number between 2 and 3 OR index 2

        we traverse using the for loop to index - 1 or 2 - 1 = 1

        index 1 of the list is number 2

        temp needs to point to what number 2 is pointing to, which is 3
        then now 2 needs to point to temp.

        it will look like this now

        1 -> 2 -> temp -> 3 -> 4
        */
    }

    

}

int main(){

    srand(time(NULL));

    int input = 0, index = 0;
    struct node *head = createList();
    while(input != -1)
    {    system("clear");
        printHeader();
        printList(head);
        printf("\nEnter a number: ");
        scanf("%d", &input);
        if(input == -1){
            return 0;
        }
        printf("Enter index: ");
        scanf("%d", &index);
        addbyindex(head, input, index);
}
}