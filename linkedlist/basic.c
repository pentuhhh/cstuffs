#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


typedef struct node {
    int elem;
    struct node *link;
} *list;

void addList(list *L, int n){
    srand(time(NULL));
    int randomno;
    list temp = (struct node *) malloc(sizeof(struct node));
    (*L)->link = temp;

    randomno = rand() % 101;

    (*L)->elem = randomno;

    n--;
    if(n != 0){
        addList(&(*L)->link, n);
    }

}

void printThis(list trav){
    while(trav->link != NULL){
        printf("%d ", trav->elem);
        trav = trav->link;
    }
}

void addLast(list trav, int n){
    while(trav != NULL){
        if(trav->link == NULL){
            trav->link = (struct node *) malloc(sizeof(struct node));
            trav->elem = n;
            break;
        }
        trav = trav->link;
    }
}

void addFirst(list *head, int n){
    if((*head)->link != NULL){
        list temp = (struct node*) malloc(sizeof(struct node));
        temp->link = (*head)->link;
        temp->elem = n;

        *head = temp;
    }
}

void addSomewhere(list *head, int n, int x){
    // if this was an array, n would be the index and x will be the value added
    int i;
    list temp = 
    for(i = n; i > 0 && (*head)->link != NULL; i--){
        (*head) = (*head)->link; 
    }

    list temp = (struct node*) malloc(sizeof(struct node));
    temp->link = (*head)->link;
    temp->elem = x;
    
    
}

int main(){
    list mylist = (struct node *) malloc(sizeof(struct node));
    addList(&mylist, 5);
    addLast(mylist, 10);
    addFirst(&mylist, 69);
    addSomewhere(&mylist, 3, 12);
    printThis(mylist);
}