#include <stdio.h>
#include <stdbool.h>
#include "setmode.h"
#include "stackmode.h"
#include "orderedlistmode.h"
#include "listmode.h"
#define p printf

void setModeMain(struct stackParameters *mainstack){
    char confirmation[1];
    int mode = 0;
    system("clear");
    printf("/\t\t\t!!! WARNING !!!\n");
    printf("/\tThis function will eliminate any duplicates in the Stack\n");
    while(confirmation[0] != 'Y' && confirmation[0] != 'y' && confirmation[0] != 'N' && confirmation[0] != 'n'){
        
        scanf("%c", &confirmation[0]);
        printf("/ <c:\\user\\admin>: Confirm? (Y/N): ");
    }

    if(confirmation[0] == 'Y' || confirmation[0] == 'y'){
        setmodeFunctionsMenu();
        filter(mainstack);

        while(mode != 3){
        system("clear");
            programView(mainstack);
            showStack(mainstack);
            setmodeFunctionsMenu();
            printf("\n/ <c:\\user\\admin>: ");
            mode = singleInput();
        if(mode == 1){
            setPush(mainstack);
            filter(mainstack);
        } else if(mode == 2){
            listExtract(mainstack);
            filter(mainstack);
        }
    }
    }
}

void setmodeFunctionsMenu(){
   p("\n/\t\t\t set Mode \t\n");
    p("/\t\t[1] Push\n");
    p("/\t\t[2] Extract\n");
    p("/\t\t[3] Exit\n/");
}

void setPush(struct stackParameters *mainstack){
    int complete = 0;
    mainstack->top += 1;
    while(complete == 0){
            printf("/ <c:\\user\\admin>: ");
        p("Input: ");
        int temp = singleInput();
        int isPresent = notDuplicate(mainstack, temp);
        if(isPresent == 0){
            mainstack->data[mainstack->top] = temp;
            complete = 1;
            printf("/\taccepted\n");
        } else {
            printf("/\t\t\t!!! WARNING !!! Value Rejected: Already Present\n");
        }
    }
    
}

void filter(struct stackParameters *mainstack){
    int i, j;
    //count how many duplicates 
    for(i = 0; i <= mainstack->top; i++){
        for(j = i+1; j <=mainstack->top; j++){
            if(mainstack->data[i] == mainstack->data[j]){
                shift(mainstack, j);
            }
        }
    }
}

void shift(struct stackParameters *mainstack, int i){
    int j; 

    for(j = i; j <= mainstack->top; j++){
        swap3(mainstack, j);
        
    }
    mainstack->data[mainstack->top] = 0;
    mainstack->top--;

}

int notDuplicate(struct stackParameters *mainstack, int n){
    int i, isPresent = 0;

    for(i = 0; i <= mainstack->top; i++){
        if(mainstack->data[i] == n){
            isPresent = 1;
        }
    }

   return isPresent;

}