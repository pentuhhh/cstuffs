#include <stdio.h>
#include <stdlib.h>

int * mergeArray(int* a, int* b, int arr1size, int arr2size);
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size);

int main(){
    // array 1 = [1,3,5], array 2 = [2,4,6]
    int * arr1 = (int *) malloc(3 * sizeof(int));
    int * arr2 = (int *) malloc(3 * sizeof(int));

    // need to populate both arrays;

    arr1[0] = 1;
    arr1[1] = 3;
    arr1[2] = 5;

    arr2[0] = 1;
    arr2[1] = 4;
    arr2[2] = 6;

    int arr1size = 3;
    int arr2size = 3;

    
    double median = findMedianSortedArrays(arr1, arr1size, arr2, arr2size);
    printf("\n%.2f", median);




}

int *mergeArray(int *a, int *b, int arr1size, int arr2size){
    /*Algorithm v1 - we are assuming that every element in an array is unique
    let there be no repeating elements in an array*
    
    allocate an array with the sizeof the length of arr1 and arr2

    all elements in array 1 are included 

    elements of array 2 will be checked if it is already present 
    if not, append element

    after, append -1 to be sentinel

    sort

    return array
    */
   int retArrSize = arr1size + arr2size; // 6, 0-5 elements, 6 = -1 sentinel 3 + 3
   int *myarray = (int*) malloc(retArrSize * sizeof(int));
   int i, j, k = 0;
   int isunique = 0;
   int count = 0;
   //add array to myarray

   for(i = 0; i < arr1size; i++){
    myarray[k] = a[i];
    k++;
   }

   //append remaining

    for(i = 0; i <= arr2size ; i++){
        isunique = 1;
        if(i < arr2size){
            for(j = 0; j < arr1size; j++){
            if(b[i] == a[j]){
                isunique = 0;
            }
        }
        if(isunique == 1){
            myarray[k] = b[i];
            count++;
            k++;
        }
        }
        if(i == arr2size){
            myarray[(arr1size + count)] = -1;
        }
        
    }
    
    for(i = 0; i <= retArrSize; i++){
        printf("%i\t", myarray[i]);
    }
    
    return myarray;
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){


    int *mergedarray = mergeArray(nums1, nums2, nums1Size, nums2Size);

    double median;
    int sum = 0, count = 0;
    int i;

    for(i = 0; mergedarray[i] != -1 ; i++){
        sum += mergedarray[i];
        count++;
    }
    printf("%i, %i", sum, count);

    median = (double)sum / (double)count;

    return median;
}