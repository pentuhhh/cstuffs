#include <stdio.h>
#include <stdlib.h>

/*

excluding main and printing functions

Runtime : 8ms
Memory Used : 7.57 mb

*/ 

struct ListNode {
    int val;
    struct ListNode *next;
};

void addToNode(struct ListNode *head, int data){

    if(head == NULL){
        return;
    }

    struct ListNode *temp = (struct ListNode*)malloc(1 * sizeof(struct ListNode));
    for(; head->next != NULL; head = head->next);
    
    temp->val = data;
    temp->next = NULL;

    head->next = temp;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    

    int sum = 0, a = 0, b = 0, remainder = 0;

    struct ListNode *result = (struct ListNode*)malloc(1 * sizeof(struct ListNode));

    result->val = 0;
    result->next = NULL;

    struct ListNode *top = result;

    for(; (l1 != NULL) || (l2 != NULL) || remainder != 0; sum = 0){
        
        if(l1 != NULL){
            a = l1->val;
            if(l1->next != NULL){
                l1 = l1->next;
            } else {
                l1 =  NULL;
            }
        } else {
            a = 0;
        }

        if(l2 != NULL){
            b = l2->val;
            if(l2->next != NULL){
                l2 = l2->next;
            } else {
                l2 = NULL;
            }
        } else {
            b = 0;
        }


        sum = a + b + remainder;
        remainder = sum / 10;
        sum %= 10;

        top->next = (struct ListNode*)malloc(1 * sizeof(struct ListNode));
        top = top->next;
        top->val = sum;
        top->next = NULL;
        
        
        


    }
    return result->next;
}


void printThis(struct ListNode *input){

    if(input == NULL){
        return;
    }

    printThis(input->next);
    printf("%d ", input->val);

}

int main(){

    struct ListNode* l1 = malloc(1 * sizeof(struct ListNode));
    struct ListNode* l2 = malloc(1 * sizeof(struct ListNode));
    
    
    l1->val = 2;
    l1->next = malloc(1 * sizeof(struct ListNode));
    l1->next->val = 4;
    l1->next->next = malloc(1 * sizeof(struct ListNode));
    l1->next->next->val = 3;
    l1->next->next->next = NULL;
    
    l2->val = 5;
    l2->next = malloc(1 * sizeof(struct ListNode));
    l2->next->val = 6;
    l2->next->next = malloc(1 * sizeof(struct ListNode));
    l2->next->next->val = 4;
    l2->next->next->next = NULL;
    
    struct ListNode* result = addTwoNumbers(l1, l2);
    printThis(l1);

    printf("\n");

    printThis(l2);

    printf("\n");

    printThis(result);
    
}