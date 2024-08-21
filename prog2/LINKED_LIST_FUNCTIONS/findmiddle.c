#include <stdio.h>
#include <stdlib.h>

#include "back.h"
#include "back.c"



struct node *middleNode(struct node* head) {
    struct node *fast = head;
    struct node *slow = head;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}

int main(){

    srand(time(NULL));
    
    system("clear");
    struct node *list1 = createRandomListLengthLong();
   

    printHeader();


    bubsortlist(list1);
    printList(list1);
    

    struct node *middle = middleNode(list1);
    printNewLine();
    printf("Middle: %d", middle->val);



}