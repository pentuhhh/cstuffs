#include <stdio.h>
#include <stdlib.h>

#define p printf

int* twoSum(int* nums, int numsSize, int target, int* returnSize);
// * nums = the array of numbers
// numsSize = basically length of array
// target = target number
// return size = i guess size of the output? which is a pait of values

int main(){
    int array[] = {2,7,11,15};
    int answerarray[2] = {0,0};
    int *retans = twoSum(array, (sizeof(array)/sizeof(int)), 9, answerarray);

    // print input
        p("\n\nInput: [2,7,11,15]\n\n");
    
    //print output
        p("Output: [%i, %i]", retans[0], retans[1]);
    

}

int *twoSum(int *nums, int numSize, int target, int *returnSize){
    int i,j;
    int *temp = (int*) malloc(numSize * sizeof(returnSize)/sizeof(int));

    for(i = 0; i < numSize; i++){
        for(j = i+1; j < numSize; j++){
            if(*(nums+i) + *(nums+j) == target){
                temp[0] = i;
                temp[1] = j;
                break;
            }
        }
    }

    return temp;

}