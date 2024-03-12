#ifndef BACK_H
#define BACK_H

struct stackParameters {
    int top;
    int size;
    int *data;
    
};

int getIntInput(int n);
void showStack(struct stackParameters *mainstack);
int singleInput(){
    int temp;
    scanf("%i", &temp);
    return temp;
}

#endif