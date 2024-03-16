#include <stdio.h>
#include "back.h"


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