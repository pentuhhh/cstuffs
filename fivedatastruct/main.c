#include <stdio.h>
#include <stdlib.h>
#include "menu.c"
#include "menu.h"

#include "back.c"
#include "back.h"

#include "stackmode.c"
#include "stackmode.h"


int main(){
    //define main working stack here
    //struct stackParameters mainstack;

    //mainstack.top = -1;
    //mainstack.size = 100;
    //allocate memory for data array;
    //mainstack.data = (int *)calloc(mainstack.size, sizeof(int));

    struct stackParameters mainstack;
    mainstack = debugdata();

    int mode = 0;
    int run = 0;
    while(run == 0){
        if(mode == 1){
            showStack(&mainstack);
        }
        if(mode == 2){
            stackModeMain(&mainstack);
        }
        printMenu();
        mode = getIntInput(6);
        
    }
    
    
 


}