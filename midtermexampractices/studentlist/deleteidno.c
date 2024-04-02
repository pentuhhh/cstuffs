#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "studentlist.c"
#include "studentlist.h"

void swap(struct student *a, struct student *b);
int main(){
    struct studentlist *dcism = debugData();
    
    int i;

    for(i = 0 ; i < dcism->top; i++){
        printf("%d, %s, %s, %s\n", dcism->roster[i].id, dcism->roster[i].fname.characters, dcism->roster[i].lname.characters, dcism->roster[i].program);
    }

    int x;

    printf("Enter ID.no to delete: ");
    scanf("%d", &x);

    for(i = 0; i < dcism->top; i++){
        if(dcism->roster[i].id == x){
            int j;
            for(j = i; j < dcism->top; j++){
                swap(&(dcism->roster[j]), &(dcism->roster[j + 1]));
            }
            dcism->top--;
        }
    }

    for(i = 0 ; i < dcism->top; i++){
        printf("%d, %s, %s, %s\n", dcism->roster[i].id, dcism->roster[i].fname.characters, dcism->roster[i].lname.characters, dcism->roster[i].program);
    }

}

void swap(struct student *a, struct student *b){
    struct student temp;
    temp = *a;
    *a = *b;
    *b = temp;
}