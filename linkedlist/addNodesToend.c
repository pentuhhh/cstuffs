//use python visualizer
//notes: node->link must always be initialized to NULL or whatever

#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *link;
};

void addNodes(int n, struct node * head);
int main() {
    
    struct node *head = (struct node*) malloc(sizeof(struct node));
    head->link = NULL;
    addNodes(5, head);
    
    return 0;
}

void addNodes(int n, struct node *head){
    struct node *trav = head;
    int i;
    for(i = 0; i < n; i++){
        while(trav->link != NULL){
            trav = trav->link;
        }
        struct node *tempnode = (struct node*)malloc(sizeof(struct node));
        tempnode->link = NULL;
        trav->link = tempnode;
    }
}