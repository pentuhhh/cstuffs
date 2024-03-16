#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "back.c"
#include "back.h"

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
    p("\n/\t\t\tMenu\t\n");
    p("/\t\t[1] Stack Mode\n");
    p("/\t\t[2] Queue Mode\n");
    p("/\t\t[3] List Mode\n");
    p("/\t\t[4] Ordered List Mode\n");
    p("/\t\t[5] Set Mode\n");
    p("/\t\t[6] Exit\n/");
}

int main(){
    
    system("clear");
    struct stackParameters mainstack;
    mainstack = debugdata();
    int mode = 0;
    int run = 0;

    init1();
    
    while(run == 0){
        system("clear");
       
        if(mode == 1){

                system("clear");

            stackModeMain(&mainstack);
        }
        if(mode == 2){
                    system("clear");

            queueModeMain(&mainstack);
        }
        if(mode == 3){
            listModeMain(&mainstack);
        }
        if(mode == 4){
            orderedlistModeMain(&mainstack);
        }
        if(mode == 5){
            setModeMain(&mainstack);
        }
        showStack(&mainstack);
        printMenu();
        mode = getIntInput(6);
        if(mode == 6){
            system("clear");
            devil();
            usleep(1000 * 1000);
            system("clear");
            printf("/ Program closing\n");
            usleep(500 * 1000);
            printf("/ Upload Complete");
            
            run = 1;
        }
    }
    
    
 


}
