#include <stdio.h>

void swap(int * a, int * b);

int main(){
    int array[] = {5, 4, 26, 32, 1, 5, 3 ,2 ,8};
    //int *arrayptr = array;
    int length = sizeof(array)/sizeof(int);
    int i, j;
    int min;
    for(i = 0; i < length; i++){
        min = i;
        for(j = i; j < length; j++){
            if(array[min] > array[j]){
                min = j;
            }

        
        }
        swap(&array[i], &array[min]);
    }
    /*
    at the beginning of each outer loop, variable min is assigned the value of index i
    in the inner loop, it will compare each succeeding element if its value is lesser than
    the value of the index of min. after the inner loop is completed, a lesser value is found
    and it will swap the new lesser value with the initial value
    */
    for(i = 0; i < length; i++){
        printf("%i\t", array[i]);
    }
}

void swap(int * a, int * b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}