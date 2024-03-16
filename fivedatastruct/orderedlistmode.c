#include <stdio.h>
#include "orderedlistmode.h"
#include "stackmode.h"

void orderedlistModeMain(struct stackParameters *mainstack){
    int mode = 0;
    char confirmation[1];
    printf("!!! WARNING !!!\n");
    printf("This function will sort all items in the stack\n");
    while(confirmation[0] != 'Y' && confirmation[0] != 'y' && confirmation[0] !='N' && confirmation[0] != 'n'){
            printf("Continue? (Y/N): ");
            scanf("%c", &confirmation[0]);
    }
    
    if(confirmation[0] == 'Y' || confirmation[0] == 'y'){
            orderedlistFunctionsMenu();
            sort(mainstack);

            while(mode != 4){
            p("Select Function: ");
            mode = singleInput();
            if(mode == 1){
                orderedlistPush(mainstack);
            } else if(mode == 2){
                orderedlistExtract(mainstack);
            } else if(mode == 3){
                showStack(mainstack);
            }
            sort(mainstack);
            orderedlistFunctionsMenu();
        }
    }
    
}


void orderedlistFunctionsMenu(){
    p("\t List Mode \t\n");
    p("[1] Push\n");
    p("[2] Extract\n");
    p("[3] Show Data\n");
    p("[4] Exit\n");
}

void orderedlistPush(struct stackParameters *mainstack){
    mainstack->top += 1;
    p("Input: ");
    int temp = singleInput();
    mainstack->data[mainstack->top] = temp;
}

void orderedlistExtract(struct stackParameters *mainstack){
    int i, j;
    if(mainstack->top > -1){
        printf("Enter index to remove: ");
        i = getIntInput(mainstack->top);
        for(j = i; j <= mainstack->top; j++){
            swap(mainstack, j);
        }
        mainstack->data[mainstack->top] = 0;
        mainstack->top--;
        
    } else if (mainstack < 0){
        printf("There is no Data!\n");
    }
    
}
// this one swaps the element to the one on its right
void swap3(struct stackParameters *a, int i){
    int temp;
    temp = a->data[i];
    a->data[i] = a->data[i+1];
    a->data[i+1] = temp;

}

void sort(struct stackParameters *mainstack){
    

    int i, j;
    for(i = 0; i < (mainstack->top); i++){
        for(j = 0; j < mainstack->top; j++){
            if(mainstack->data[j] > mainstack->data[j+1]){
                swapStructElem(&mainstack->data[j], &mainstack->data[j+1]);

            }
        }
    }
}

void swapStructElem(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}