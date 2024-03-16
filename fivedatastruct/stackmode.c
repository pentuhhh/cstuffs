#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define p printf

#include "stackmode.h"




void stackModeMain(struct stackParameters *mainstack){
    int mode = 0;

    while(mode != 3){
        system("clear");
        programView(mainstack);
        showStack(mainstack);
        stackFunctionsMenu();
        printf("/\n/ <c:\\user\\admin>: ");
        mode = singleInput();
        if(mode == 1){
            stackPush(mainstack);
        } else if(mode == 2){
            stackPop(mainstack);
        }

    }
    if(mode == 3){
        system("clear");
    }

    
}

void stackPush(struct stackParameters *mainstack){
    mainstack->top += 1;
    printf("/ <c:\\user\\admin>: ");
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
    p("\n/\t\t\t Stack Mode \t\n");
    p("/\t\t[1] Push\n");
    p("/\t\t[2] Pop\n");
    p("/\t\t[3] Exit\n");
}

int getIntInput(int n){
    int temp = 0;
    printf("\n/ <c:\\user\\admin>: ");
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
    system("clear");
    int i;
    programView(mainstack);
    printf("\tStack Data: ");
    if(mainstack->top > -1){
        for(i = 0; i <= mainstack->top; i++){
            printf("%d ", mainstack->data[i]);
        }
        printf("");
    } else {
        printf("/\tThere is no Data!");
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


    return tempstack;
}

