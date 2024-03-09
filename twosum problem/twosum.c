#include <stdio.h>
#include <stdlib.h>
#define p printf
int *twoSum(int *nums, int numSize, int target);

int compare(int *a, int*b, int targ);

int main(){
    
    int size1 = 4;
    int array1[] = {2,7,11,15};
    int *answer;

    p("\n\n");
    p("Input: nums [%i, %i, %i, %i]\n", array1[0],array1[1],array1[2],array1[3]);

    answer = twoSum(&array1, size1, 9);
    p("Output: [%i, %i]", *answer, *answer++);
    


}

int *twoSum(int *nums, int numSize, int target){
    int i;
    int j;
    int *returnPair = (int*) malloc(2 * sizeof(int));

    for(i = 0; i < numSize; i++){
        for(j = i + 1; j < numSize; j++){
            if(compare(*(nums+i), *(nums+j), target) == 1){
                returnPair[0] = *(nums+i);
                returnPair[1] = *(nums+j);
            }
        }
    }

    return returnPair;
}

int compare(int *a, int *b, int target){
    if(*a + *b == target){
        return 1;
    } else {
        return 0;
    }
}
