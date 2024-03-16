#include <stdio.h>
#include "listmode.h"
#include "stackmode.h"

void listModeMain(struct stackParameters *mainstack){
    listFunctionsMenu();
    int mode = 0;

    while(mode != 4){
        p("Select Function: ");
        mode = singleInput();
        if(mode == 1){
            listPush(mainstack);
        } else if(mode == 2){
            listExtract(mainstack);
        } else if(mode == 3){
            showStack(mainstack);
        }
        listFunctionsMenu();
    }

    
}


void listFunctionsMenu(){
    p("\t List Mode \t\n");
    p("[1] Push\n");
    p("[2] Extract\n");
    p("[3] Show Data\n");
    p("[4] Exit\n");
}

void listPush(struct stackParameters *mainstack){
    mainstack->top += 1;
    p("Input: ");
    int temp = singleInput();
    mainstack->data[mainstack->top] = temp;
}

void listExtract(struct stackParameters *mainstack){
    int i, j;
    if(mainstack->top > -1){
        printf("Enter index to remove: ");
        i = getIntInput(mainstack->top);
        for(j = i; j <= mainstack->top; j++){
            swap(mainstack, j);
        }
        mainstack->data[mainstack->top] = 0;
        mainstack->top--;
        
    } else if (mainstack < 0){
        printf("There is no Data!\n");
    }
    
}

void swap2(struct stackParameters *a, int i){
    int temp;
    temp = a->data[i];
    a->data[i] = a->data[i+1];
    a->data[i+1] = temp;

}
