#include <stdio.h>
#include <stdlib.h>
#define p printf

int *twoSum(int *a, int target, int size);

int main(){
    
    int nums[] = {2,7,11,15};
    int size = sizeof(nums)/sizeof(int);
    int *output = (int *) malloc(2 * sizeof(int));
    p("\n\nInput: nums = [2,7,11,15],   target = 9\n\n");

    output = twoSum(nums, 9, size);

    p("Output: [%i, %i]", output[0], output[1]);

    return 0;
}

int *twoSum(int *a, int target, int size){
    int i, j;
    int answer[] = {0,0};
    for(i = 0; i < size; i++){
        for(j = i + 1; j< size; j++){
            if(*(a + i) + *(a + j) == target){
                answer[0] = i;
                answer[1] = j;
                break;
            }
        }
    }

    return answer;
}