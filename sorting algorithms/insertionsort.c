#include <stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int array[] = {5, 4, 26, 32, 1, 5, 3 ,2 ,8};
    //int *arrayptr = array;
    int length = sizeof(array)/sizeof(int);
    int i, j;

    for(i = 1; i < length; i++){
        for(j = i; j > 0; j--){
            if(array[j] < array[(j-1)]){
                swap(&array[j],&array[(j-1)]);
            }
        }
    }

    for(i = 0; i < length; i++){
        printf("%i\t", array[i]);
    }
    return 0;
}