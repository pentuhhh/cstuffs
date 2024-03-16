#include <stdio.h>
#include "queuemode.h"
#include "stackmode.h"

void queueModeMain(struct stackParameters *mainstack){
    queueFunctionsMenu();
    int mode = 0;

    while(mode != 3){
        system("clear");
        programView(mainstack);
        showStack(mainstack);
        queueFunctionsMenu();
        printf("/\n/ <c:\\user\\admin>: ");
        mode = singleInput();
        if(mode == 1){
            queuePush(mainstack);
        } else if(mode == 2){
            queuePop(mainstack);
        }
    }

    system("clear");

    
}


void queueFunctionsMenu(){
    p("\n/\t\t\t Queue Mode \t\n");
    p("/\t\t[1] Push\n");
    p("/\t\t[2] Pop\n");
    p("/\t\t[3] Exit\n");
}

void queuePush(struct stackParameters *mainstack){
    mainstack->top += 1;
    printf("/ <c:\\user\\admin>: ");
    p("Input: ");
    int temp = singleInput();
    mainstack->data[mainstack->top] = temp;
}

void queuePop(struct stackParameters *mainstack){
    int i;
    if(mainstack->top > -1){
        for(i = 0; i < mainstack->top; i++){
            swap(mainstack, i);
        }
        mainstack->top--;
    }   else if(mainstack->top < 0){
        p("There is no Data\n");
    }
}

void swap(struct stackParameters *a, int i){
    int temp;
    temp = a->data[i];
    a->data[i] = a->data[i+1];
    a->data[i+1] = temp;

}

/*
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
} */