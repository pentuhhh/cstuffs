#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "studentlist.c"
#include "studentlist.h"

void swap(struct student *a, struct student *b);

int main(){
    struct studentlist *dcism = debugData();
    
    int i, j;

    for(i = 0 ; i < dcism->top; i++){
        printf("%d, %s, %s, %s\n", dcism->roster[i].id, dcism->roster[i].fname.characters, dcism->roster[i].lname.characters, dcism->roster[i].program);
    }

    printf("\n");

    for(i = 0; i < dcism->top; i++){
        for(j = i + 1; j < dcism->top; j++){
            if((strcasecmp(dcism->roster[i].lname.characters, dcism->roster[j].lname.characters)) > 0){
                swap(&(dcism->roster[i]), &(dcism->roster[j]));
            }
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