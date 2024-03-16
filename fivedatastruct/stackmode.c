#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define p printf

#include "stackmode.h"




void stackModeMain(struct stackParameters *mainstack){
    stackFunctionsMenu();
    int mode = 0;

    while(mode != 4){
        p("Select Function: ");
        mode = singleInput();
        if(mode == 1){
            stackPush(mainstack);
        } else if(mode == 2){
            stackPop(mainstack);
        } else if(mode == 3){
            showStack(mainstack);
        }
        stackFunctionsMenu();
    }

    
}

void stackPush(struct stackParameters *mainstack){
    mainstack->top += 1;
    p("Input: ");
    int temp = singleInput();
    mainstack->data[mainstack->top] = temp;
}

void stackPop(struct stackParameters *mainstack){
    if(mainstack->top > -1){
        mainstack->data[mainstack->top] = 0;
        mainstack->top--;
    } else if(mainstack-> top < 0){
        printf("There is no data\n");
    }
    
}

void stackFunctionsMenu(){
    p("\t Stack Mode \t\n");
    p("[1] Push\n");
    p("[2] Pop\n");
    p("[3] Show Data\n");
    p("[4] Exit\n");
}

int getIntInput(int n){
    int temp = 0;
    printf("Input: ");
    temp = singleInput();

    if(temp < 0){
        temp = getIntInput(n) ;
    }

    if(temp > n){
        temp = getIntInput(n);
    }

    return temp;
}

void showStack(struct stackParameters *mainstack){
    int i;
    if(mainstack->top > -1){
        printf("Stack Data: ");
        for(i = 0; i <= mainstack->top; i++){
            printf("%d ", mainstack->data[i]);
        }
        printf("\n");
    } else {
        printf("There is no Data: \n");
    }

}

int singleInput(){
    int temp;
    scanf("%i", &temp);
    return temp;
}

struct stackParameters debugdata(){
    struct stackParameters tempstack;
    srand(time(NULL));
    int randomnumber = rand() % 101;
    tempstack.size = 100;
    tempstack.data = (int *) calloc(tempstack.size, sizeof(int));
    tempstack.top = -1;
    int i = 0;
    for(i = 0; i < 10; i++){
        tempstack.top++;
        tempstack.data[tempstack.top] = randomnumber;
        randomnumber = rand() % 101;
        
    }

    printf("!!! RANDOM DATA INITIALIZED !!!\n\n");
    printf("\tTOP: %d\tSize: %d\n\n", tempstack.top, tempstack.size);
    printf("!!! VERSION 1 READY !!!\n\n");
    

    return tempstack;
}