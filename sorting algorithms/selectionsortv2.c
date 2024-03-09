#include <stdio.h>

void swap(int *a, int *b);

int main(){

    int array[] = {5, 4, 26, 32, 1, 5, 3 ,2 ,8};
    int length = sizeof(array) / sizeof(int);

    int *arrayptr = array;

    int i;

    for(i = 0; i < length; i++){
        printf("%i\t", array[i]);
    }

    printf("\n\n");
    
    int j;

    for(i = 0; i < 5; i++){
        for(j = i; j < length; j++){
            if(*(arrayptr + i) > *(arrayptr + j)){
                swap(arrayptr+i,arrayptr+j);
                j = i;
            }
        }
    }

    for(i = 0; i < length; i++){
        printf("%i\t", array[i]);
    }
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}