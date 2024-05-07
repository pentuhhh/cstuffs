#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "back.h"




int genRand(int max, int min){

    int randomNum = (rand() % max) + min;

    return randomNum;
}

struct node *createList(){
    
    struct node *result = malloc(sizeof(struct node));

    result->next = NULL;

    struct node *trav = result;
    
    int i;
    for(i = 0; i < 10; i++){
        struct node *temp = malloc(sizeof(struct node));
        temp->val = genRand(100, 1);
        temp->next = NULL;

        for(;trav && trav->next; trav = trav->next);
        trav->next = temp;
        

    }


    return result->next;
}

struct node *createRandomListLength(){
    
    struct node *result = malloc(sizeof(struct node));

    result->next = NULL;

    struct node *trav = result;
    

    int randlength = genRand(3, 3);
    int i;
    for(i = 0; i < randlength; i++){

        struct node *temp = malloc(sizeof(struct node));
        temp->val = genRand(100, 1);
        temp->next = NULL;

        for(;trav && trav->next; trav = trav->next);
        trav->next = temp;
        

    }


    return result->next;
}

struct node *createRandomListLengthLong(){
    
    struct node *result = malloc(sizeof(struct node));

    result->next = NULL;

    struct node *trav = result;
    

    int randlength = genRand(10, 5);
    int i;
    for(i = 0; i < randlength; i++){

        struct node *temp = malloc(sizeof(struct node));
        temp->val = genRand(100, 1);
        temp->next = NULL;

        for(;trav && trav->next; trav = trav->next);
        trav->next = temp;
        

    }


    return result->next;
}

struct node *createRandomListLengthLongHighChanceDuplicate(){
    
    struct node *result = malloc(sizeof(struct node));

    result->next = NULL;

    struct node *trav = result;
    

    int randlength = genRand(10, 5);
    int i;
    for(i = 0; i < randlength; i++){

        struct node *temp = malloc(sizeof(struct node));
        temp->val = genRand(5, 1);
        temp->next = NULL;

        for(;trav && trav->next; trav = trav->next);
        trav->next = temp;
        

    }


    return result->next;
}

void printNewLine(){
    printf("\n");
}

void printList(struct node *head){

    struct node *trav = head;

    printf("Data: ");

    while(trav){
        printf("%d, ", trav->val);
        trav = trav->next;
    }

}

void printHeader(){
    printf("Linked List Menu\n\n Enter -1 to end\n\n");

}

void swapval(struct node *a, struct node* b){
    int temp = a->val;
    a->val = b->val;
    b->val = temp;
}

void bubsortlist(struct node *head){
    int swap;
    struct node *ptr;
    struct node *lptr = NULL;

    if(head == NULL){
        return;
    }

    do {

        swap = 0;

        ptr = head;

        while (ptr->next != lptr){
            if(ptr->val > ptr->next->val){
                swapval(ptr, ptr->next);
                swap = 1;
            }
            ptr = ptr->next;
        }
        lptr = ptr;

    } 
    while (swap);
}