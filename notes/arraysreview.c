#include <stdio.h>
#include <stdlib.h>


int main(){
    int *array = calloc(10, sizeof(int));
    //it will allocate 10 * 4 bytes of memory

    // array will point to the first index
    // if there is 40 bytes, array will point to the first one

    int i;
    for(i = 0; i < 10; i++){
        array[i] = i+1;
    }

    for(i = 0; i < 10; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    for(i = 0; i < 10; i++){
        if(array[i] % 2 == 0){
            printf("%i ", array[i]);
        }
    }

    printf("\n");
    for(i = 0; i < 10; i++){
        if(array[i] % 2 != 0){
            printf("%i ", array[i]);
        }
    }

    printf("\n");
    int sum = 0;
    for(i = 0; i < 10; i++){
        sum += array[i]; // same as sum = sum + array[i]
        /*
        i = 0, array[i] = 1
        sum += 1 therefore sum == 1

        i = 1, array[i] = 2
        sum += 2 therefore sum == 3
        */
    }
    printf("%d \n", sum);

    int gn = 0;
    for(i = 0; i < 10; i++){
        if(gn < array[i]){
            gn = array[i];
            // if gn = 10, array[i] = 1 -> gn < array[i]? ->false we do nothing
        }
    }

}