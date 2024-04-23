#include <stdio.h>
#include <stdlib.h>

struct numbers{
    int x;
    int y;
    int z;
};

int x = 10;
int *ptr = &x;


void addNumbers(struct numbers *input){
    input->x = 10;
    input->y = 11;
    input->z = 12;
}

void printThis(struct numbers *input){
    printf("%d, %d, %d", input->x, input->y, input->z);
}

int main(){

    struct numbers *myvalue = calloc(1, sizeof(struct numbers));

    // i want to add values using a function

    addNumbers(myvalue);
    printThis(myvalue);

}