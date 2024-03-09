#include <stdio.h>

void swap(int * a, int * b);

int main(){
    int array[] = {5, 4, 26, 32, 1, 5, 3 ,2 ,8};
    int length = sizeof(array)/sizeof(int);
    int i, j, k;
    //int min;
    for(i = length-1; i >= 0; i--){

        //printing purposes
        for(k = 0; k < length; k++){
        printf("%i\t", array[k]);
        }
        printf("\n");
        //

        for(j = length-1; j >= 0; j--){
            if(array[j] < array[(j - 1)] && j != 0){
                swap(&array[j], &array[(j-1)]);
            }

        
        }
    }

    
}

void swap(int * a, int * b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}