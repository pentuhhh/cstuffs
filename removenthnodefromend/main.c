#include <stdio.h>
#include <stdlib.h>


struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {

    struct ListNode* dummy = head;
    struct ListNode* delayPointer = dummy;
    struct ListNode* pointer = dummy;
    

    while(n != 0 && pointer){
        pointer = pointer->next;
        --n;
    }

    if(n != 0) return 0;

    if(!pointer) return head->next;

    while(pointer->next){
        pointer = pointer->next;
        delayPointer = delayPointer->next;
    }

    struct ListNode* temp = delayPointer->next;
    delayPointer->next = delayPointer->next->next;
    free(temp);


    return dummy;

}

void printThis(struct ListNode *input){
    
    for(; input->next != NULL; input = input->next){
        printf("%d ", input->val);
    }
    printf("%d", input->val);

    printf("\n");

}

int main(){
    struct ListNode *head = malloc(1 * sizeof(struct ListNode));

    head->val = 2;
    head->next = malloc(1 * sizeof(struct ListNode));

    head->next->val = 3;
    head->next->next = malloc(1 * sizeof(struct ListNode));

    head->next->next->val = 5;
    head->next->next->next = malloc(1 * sizeof(struct ListNode));

    head->next->next->next->val = 7;
    head->next->next->next->next = NULL;

    printThis(head);
    removeNthFromEnd(head, 3);
    printThis(head);
}
