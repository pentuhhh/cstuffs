#include <stdio.h>
#include <stdlib.h>

void swap(int*a,int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int array[] = {5, 4, 26, 32, 1, 5, 3 ,2 ,8};
    int length = sizeof(array)/sizeof(int);
    int i,j;
    for(i = 1; i < length; i++){
        j = i;
        while(j > 0 && array[j-1] > array[j]){
            swap(&array[j],&array[j-1]);
            j--;
        }
    }

    int k;

    for(k = 0; k < length; k++){
        printf("%i\t", array[k]);
    }
}

