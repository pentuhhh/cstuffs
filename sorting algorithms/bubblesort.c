#include <stdio.h>
void swap(int *a, int*b);

int main(){
    int array[] = {5, 4, 26, 32, 1, 5, 3 ,2 ,8};
    int *a = array;
    int length = sizeof(array)/sizeof(int);
    int clear = 0;
    int i;

    printf("\nUnsorted Array:\n\n");
    for(i = 0; i < length; i++){
        printf("%i\t", array[i]);

    }

    printf("\nSorted Array:\n\n");
    for(i = 0; i < 5; i++){
        if(i == length && clear != length){
            i = 0;
        }
        if(*(a+i) > *(a+i+1)){
            swap(a+i,a+i+1);
            clear = 0;
        } else {
            clear++;
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