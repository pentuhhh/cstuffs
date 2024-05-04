#include <stdio.h>
#include <stdlib.h>

#include "back.h"
#include "back.c"




void addtostart(struct node* head, int input){
    struct node *temp = malloc(sizeof(struct node));
    /*
    this code will create a node, insert it between the 1st and second node. the list will now look like this

    1st node (the head) -> temp -> 2nd node
    
    it will copy the value of the 1st node to temp. then the value of the first node will now be changed to the inputted value
    */
    temp->val = head->val;
    temp->next = head->next;
    head->next = temp;
    head->val = input;


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
        addtostart(head, input);
}
}