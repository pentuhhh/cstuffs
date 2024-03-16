#include <stdio.h>
#include <stdlib.h>


#include "stackmode.c"
#include "stackmode.h"

#include "queuemode.c"
#include "queuemode.h"

#include "listmode.c"
#include "listmode.h"

#include "orderedlistmode.c"
#include "orderedlistmode.h"

#include "setmode.c"
#include "setmode.h"

void printMenu(){
    p("\tMenu\t\n");
    p("[1] Show stack\n");
    p("[2] Stack Mode\n");
    p("[3] Queue Mode\n");
    p("[4] List Mode\n");
    p("[5] Ordered List Mode\n");
    p("[6] Set Mode\n");
    p("[7] Exit\n");
}

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
        if(mode == 3){
            queueModeMain(&mainstack);
        }
        if(mode == 4){
            listModeMain(&mainstack);
        }
        if(mode == 5){
            orderedlistModeMain(&mainstack);
        }
        if(mode == 6){
            setModeMain(&mainstack);
        }
        printMenu();
        mode = getIntInput(7);
        if(mode == 7){
            run = 1;
        }
    }
    
    
 


}
