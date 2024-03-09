#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100

int *getArray();
void printArray(int *a);
int getSize(int *a);
int *mergeArray(int *a, int *b);
void sortArray(int*a);
double getMedianOfArray(int *a);
void swap(int *a, int*b);

int main(){
    int *array1 = getArray();
    int *array2 = getArray();
    int *mergedArray;
    int *sortedArray;
    
    mergedArray = mergeArray(array1, array2);
    int sizearr = getSize(mergedArray);
    int *mainarray = (int *) malloc (sizearr * sizeof(int));
    memcpy(mainarray, mergedArray, (sizearr + 1));


    printArray(mainarray);
    sortArray(mainarray);
    printArray(mainarray);
    //sortedArray = sortArray(mergedArray);
    //printArray(sortedArray);
    // sortedArray = sortArray(mergedArray);
    printf("The median of all unique elements are: %0.2f", getMedianOfArray(sortedArray));

}

int *getArray(){
    int *array = (int*)malloc(max * sizeof(int));
    int temp, i = 0;
    printf("Enter a positive integer. Enter -1 to end\n");

    while(1 == 1){
        printf("Enter a number: ");
        scanf("%i", &temp);
        array[i] = temp;
        i++;
        if(temp == -1){
            break;
        }
    }
    return array; 
}

void printArray(int *a){
    int i;
    for(i = 0; a[i] != '\0'; i++){
        printf("%i\t", a[i]);
    }
}

int getSize(int *a){
    int i, size = 0;
    for(i = 0; a[i] != '\0'; i++){
        size++;
    }

    return size;
}

int *mergeArray(int *a, int *b){
    int size1 = getSize(a);
    int size2 = getSize(b);

    int *mergedArray = (int*) malloc ((size1 + size2 + 1) * sizeof(int));

    int i, j, count = 0, isunique = 1;
    //all elements of a into new array
    for(i = 0; a[i] != -1; i++){
        mergedArray[i] = a[i];
        count = i;
    }
    count++;
    //append remaining while checking for unique
    for(i = 0; i <= size2; i++){
        isunique = 1;
        if(i < size2){
            for(j = 0; j < size1; j++){
                if(b[i] == a[j]){
                    isunique = 0;
                }
            }
        if(isunique == 1){
            mergedArray[count] = b[i];
            count++;
        }
        }
    }
    return mergedArray;
}

double getMedianOfArray(int *a){
return 0;
}
void sortArray(int *a){
    int i,j;
    int size1 = getSize(a);
    printArray(a);
    for(i = 0; i < size1; i++){
        for(j = 0; j < size1; j++){
            if(a[j] > a[(j+1)]){
                swap(&a[j],&a[(j+1)]);
            }
        }
    }
}
void swap(int *a, int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}