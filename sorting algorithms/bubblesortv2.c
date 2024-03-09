#include <stdio.h>

void swap(int * a, int * b);

int main(){
    int array[] = {5, 4, 26, 32, 1, 5, 3 ,2 ,8};
    //int *arrayptr = array;
    int length = sizeof(array)/sizeof(int);
    int i, j, k;
    //int min;
    for(i = 0; i < length; i++){
        for(k = 0; k < length; k++){
        printf("%i\t", array[k]);
        }
        printf("\n");
        for(j = 0; j < length; j++){
            if(array[j] > array[j + 1]){
                swap(&array[j], &array[(j+1)]);
            }

        
        }
        //swap(&array[i], &array[min]);
    }

    
}

void swap(int * a, int * b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}