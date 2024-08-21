#include <stdio.h>
#include <stdlib.h>

#include "back.h"
#include "back.c"



struct node* deleteDuplicates(struct node* head) {
    struct node* result = head;

    while(head && head->next){

        if(head->val == head->next->val){
            struct node* temp = head->next;
            head->next = head->next->next;
            free(temp);
        } else {
            if(head && head->next){
                head = head->next;
            } else {
                head = NULL;
            }
        }
        
    }

    return result;
}

int main(){

    srand(time(NULL));
    
    system("clear");
    struct node *list1 = createRandomListLengthLongHighChanceDuplicate();
    
   

    printHeader();


    bubsortlist(list1);
    printList(list1);
    

    struct node *newlist = deleteDuplicates(list1);
    printNewLine();
    printList(newlist);



}