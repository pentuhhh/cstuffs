#include <stdio.h>
#include <stdlib.h>

#include "back.h"
#include "back.c"

struct node *returnunique(struct node *head){

    //if list is empty or singular
    if (head == NULL || head->next == NULL) return head;


    struct node *dummy = malloc(sizeof(struct node));
    dummy->next = head;

    struct node *prev = dummy, *cur = head;


    while (cur != NULL) {

        //if the current val and the next value are equal, traverse to the last duplicate node
        while (cur->next != NULL && cur->val == cur->next->val) {
            cur = cur->next;
        }
        /*
        dummypos 1 1 1 2 3
        prev is dummy pos and prev->next will point to the first duplicate one

        the first while loop will traverse to the last duplicate value if there are

        if prev is directly behind current or prev->next == current, it means that there
        is no duplicate value

        if prev is not directly behind and there is a gap between current, it means that the while loop
        that looks for duplicate values has been activated. since it traverses to the last duplicate value
        there will be a gap. since prev and current is not directly sequential and current is pointing to the
        last duplicate value, the next node to prev will be the next node to current

        */
        if (prev->next == cur) {
            prev = prev->next;
        } else {
            prev->next = cur->next;
        }
        cur = cur->next;
    }
    head = dummy->next;
    free(dummy);
    return head;
}

int main(){

    srand(time(NULL));

    system("clear");
    struct node *list1 = createRandomListLengthLongHighChanceDuplicate();
    
   

    printHeader();


    bubsortlist(list1);
    printList(list1);

    struct node *newlist = returnunique(list1);
    printNewLine();
    printList(newlist);
}