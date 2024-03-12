#include <stdio.h>
#include "back.h"

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
    if(mainstack->top > 0){
        printf("Stack Data: ");
        for(i = 0; i < mainstack->top; i++){
            printf("%d ", mainstack->data[i]);
        }
        printf("\n");
    } else {
        printf("There is no Data: ");
    }

}

struct stackParameters debugdata(){
    struct stackParameters tempstack;
    int k = 23;
    tempstack.size = 100;
    tempstack.data = (int *) calloc(tempstack.size, sizeof(int));
    for(int i = 0; i < 10; i++){
        tempstack.data[i] = k;
        k++;
    }
    tempstack.top = 9;

    return tempstack;
}