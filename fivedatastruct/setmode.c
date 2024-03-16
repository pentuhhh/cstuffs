#include <stdio.h>
#include <stdbool.h>
#include "setmode.h"
#include "stackmode.h"
#include "orderedlistmode.h"
#include "listmode.h"
#define p printf

void setModeMain(struct stackParameters *mainstack){
    setmodeFunctionsMenu();
    char confirmation[1];
    int mode = 0;

    printf("!!! WARNING !!!\n");
    printf("This function will eliminate any duplicates in the Stack\n");
    while(confirmation[0] != 'Y' && confirmation[0] != 'y' && confirmation[0] != 'N' && confirmation[0] != 'n'){
        printf("Confirm? (Y/N): ");
        scanf("%c", &confirmation[0]);
    }

    if(confirmation[0] == 'Y' || confirmation[0] == 'y'){
        setmodeFunctionsMenu();
        filter(mainstack);

        while(mode != 4){
        p("Select Function: ");
        mode = singleInput();
        if(mode == 1){
            setPush(mainstack);
            filter(mainstack);
        } else if(mode == 2){
            listExtract(mainstack);
            filter(mainstack);
        } else if(mode == 3){
            showStack(mainstack);
            filter(mainstack);
        }
        listFunctionsMenu();
    }
    }
}

void setmodeFunctionsMenu(){
    p("\t Set Mode \t\n");
    p("[1] Push\n");
    p("[2] Extract\n");
    p("[3] Show Data\n");
    p("[4] Exit\n");
}

void setPush(struct stackParameters *mainstack){
    int complete = 0;
    mainstack->top += 1;
    while(complete == 0){
        p("Input: ");
        int temp = singleInput();
        int isPresent = notDuplicate(mainstack, temp);
        if(isPresent == 0){
            mainstack->data[mainstack->top] = temp;
            complete = 1;
            printf("accepted\n");
        } else {
            printf("!!! WARNING !!! Value Rejected: Already Present\n");
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