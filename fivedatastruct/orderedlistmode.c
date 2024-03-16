#include <stdio.h>
#include "orderedlistmode.h"
#include "stackmode.h"

void orderedlistModeMain(struct stackParameters *mainstack){
    int mode = 0;
    char confirmation[1];
    printf("/\t\t\t!!! WARNING !!!\n");
    printf("/\tThis function will sort all items in the stack\n");
    while(confirmation[0] != 'Y' && confirmation[0] != 'y' && confirmation[0] !='N' && confirmation[0] != 'n'){
            
            scanf("%c", &confirmation[0]);
            printf("/ <c:\\user\\admin>: Continue? (Y/N): ");
    }
    
    if(confirmation[0] == 'Y' || confirmation[0] == 'y'){
            sort(mainstack);
            
        while(mode != 3){
            system("clear");
            programView(mainstack);
            showStack(mainstack);
            listFunctionsMenu();
            printf("\n/ <c:\\user\\admin>: ");
            mode = singleInput();
            if(mode == 1){
                orderedlistPush(mainstack);
            } else if(mode == 2){
                orderedlistExtract(mainstack);
            }
            sort(mainstack);
        }

        system("clear");
    }
    
}


void orderedlistFunctionsMenu(){
    p("\n/\t\t\t Ordered List Mode \t\n");
    p("/\t\t[1] Push\n");
    p("/\t\t[2] Extract\n");
    p("/\t\t[3] Exit\n");
}

void orderedlistPush(struct stackParameters *mainstack){
    mainstack->top += 1;
    printf("/ <c:\\user\\admin>: ");
    p("Input: ");
    int temp = singleInput();
    mainstack->data[mainstack->top] = temp;
}

void orderedlistExtract(struct stackParameters *mainstack){
    int i, j;
    if(mainstack->top > -1){
        printf("/ <c:\\user\\admin>: ");
        printf("Enter index to remove: ");
        i = getIntInput(mainstack->top);
        for(j = i; j <= mainstack->top; j++){
            swap(mainstack, j);
        }
        mainstack->data[mainstack->top] = 0;
        mainstack->top--;
        
    } else if (mainstack < 0){
        printf("\n/ <c:\\user\\admin>: ");
        printf("There is no Data!\n");
    }
    
}
// this one swaps the element to the one on its
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