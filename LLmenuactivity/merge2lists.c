#include <stdio.h>
#include <stdlib.h>

#include "back.h"
#include "back.c"



struct node* mergeTwoLists(struct node* list1, struct node* list2) {
    
    if(!list2) return list1;
    if(!list1) return list2;
    

    struct node* result= malloc(1 * sizeof(struct node));
    result->next = NULL;

    struct node* head = result;

    while(list1 && list2){
        if(list1->val < list2-> val){
            result->next = list1;
            list1 = list1->next;
        } else {
            result->next = list2;
            list2 = list2->next;
        }
        result = result->next;
    }
    result->next = list1 ? list1 : list2;

    return head->next;
}

int main(){

    srand(time(NULL));

    system("clear");
    struct node *list1 = createList();
    struct node *list2 = createList();

    printHeader();

    printList(list1);
    bubsortlist(list1);

    printNewLine();

    printList(list2);
    bubsortlist(list2);

    printNewLine();

    printf("Merged List: ");
    struct node *merged = mergeTwoLists(list1, list2);
    printList(merged);



}