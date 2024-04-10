#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {}

void populateList1(struct ListNode* list);

void addNode(struct ListNode* list, int n);

int main(){
    struct ListNode* list1;

    populateList1(list1);
    
}




void addNode(struct ListNode* list, int n){
    struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));

    temp->val = n;
    temp->next = NULL;
    
    struct ListNode* trav = list;

    while(trav->next != NULL){
        trav = trav->next;
    }

    
    trav->next = temp;
}

void populateList1(struct ListNode* list){
    int val = 342;
    //int val2 = 465;

    int temp;
    for(temp = val; temp > 0; temp % 10){
        temp %= 10;
        addNode(list, temp);
    }
    

}