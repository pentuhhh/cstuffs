#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "studentlist.c"
#include "studentlist.h"

int main(){
    struct studentlist *dcism = debugData();
    
    int i;

    for(i = 0 ; i < dcism->top; i++){
        printf("%d, %s, %s, %s\n", dcism->roster[i].id, dcism->roster[i].fname.characters, dcism->roster[i].lname.characters, dcism->roster[i].program);
    }
}