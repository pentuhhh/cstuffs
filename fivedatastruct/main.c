#include <stdio.h>
#include <stdlib.h>
#include "menu.c"
#include "menu.h"

#include "back.c"
#include "back.h"

struct stackParameters {
    int top;
    int size;
    int *data;
    
};

int main(){
    //define main working stack here
    struct stackParameters mainstack;

    mainstack.top = -1;
    mainstack.size = 100;
    //allocate memory for data array;
    mainstack.data = (int *)calloc(mainstack.size, sizeof(int));

    int mode = 0;

    printMenu();
    
 


}