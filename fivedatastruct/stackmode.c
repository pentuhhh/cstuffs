#include <stdio.h>
#include "back.c"
#include "back.h"



void stackModeMain(struct stackParameters *mainstack){
    stackFunctionMenu();
    int mode = singleInput();

    
}

void stackPush(struct stackParameters *mainstack){
    mainstack->top += 1;
    int temp = singleInput();
    mainstack->data[mainstack->top] = temp;
}