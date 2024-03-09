#include <stdio.h>
#include <stdlib.h>

struct data {
    int x;
    float y;
};

struct data *getData();

void printThis(struct data *temp);

int main(){

    struct data *var = getData();
    printThis(var);

    return 0;
}

struct data *getData(){
    struct data * temp = (struct data*)calloc(3, sizeof(struct data));
    int i;
    for(i = 0; i < 3; i++){
        printf("Enter x %i: ", i+1);
        scanf("%i", &temp[i].x);
        printf("enter y %i: ", i +1);
        scanf("%f", &temp[i].y);
    }

    return temp;
}

void printThis(struct data *temp){
    int i;
    for(i = 0; i < 3; i++){
        printf("pair %i:\t", i +1);
        printf("\t%i\t", temp[i].x);
        printf("%f\n", temp[i].y);
    }
}