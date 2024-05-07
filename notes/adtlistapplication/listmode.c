#include <stdio.h>
#include "listmode.h"
#include "stackmode.h"

void listModeMain(struct stackParameters *mainstack){
    listFunctionsMenu();
    int mode = 0;

    while(mode != 3){
        system("clear");
        programView(mainstack);
        showStack(mainstack);
        listFunctionsMenu();
        printf("\n/ <c:\\user\\admin>: ");
        mode = singleInput();
        if(mode == 1){
            listPush(mainstack);
        } else if(mode == 2){
            listExtract(mainstack);
        }
    }

    system("clear");
    
}


void listFunctionsMenu(){
    p("\n/\t\t\t List Mode \t\n");
    p("/\t\t[1] Push\n");
    p("/\t\t[2] Extract\n");
    p("/\t\t[3] Exit\n/");
}

void listPush(struct stackParameters *mainstack){
    mainstack->top += 1;
    printf("/ <c:\\user\\admin>: ");
    p("Input: ");
    int temp = singleInput();
    mainstack->data[mainstack->top] = temp;
}

void listExtract(struct stackParameters *mainstack){
    int i, j;
    if(mainstack->top > -1){
        printf("/ <c:\\user\\admin>: ");
        printf("Enter index to remove: ");
        i = getIntInput(mainstack->top);
        for(j = i; j <= mainstack->top; j++){
            swap(mainstack, j);
        }
        mainstack->data[mainstack->top] = 0;
        mainstack->top--;
        
    } else if (mainstack < 0){
        printf("/\n/ <c:\\user\\admin>: ");
        printf("There is no Data!\n");
    }
    
}

void swap2(struct stackParameters *a, int i){
    int temp;
    temp = a->data[i];
    a->data[i] = a->data[i+1];
    a->data[i+1] = temp;

}
