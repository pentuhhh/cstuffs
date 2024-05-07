#ifndef STACKMODE_H
#define STACKMODE_H


struct stackParameters {
    int top;
    int size;
    int *data;
    
};
int getIntInput(int n);
void showStack(struct stackParameters *mainstack);
int singleInput();
struct strackParameters debugData();


void stackModeMain(struct stackParameters *mainstack);
void stackPush(struct stackParameters *mainstack);
void stackPop(struct stackParameters *mainstack);
void stackFunctionsMenu();

#endif