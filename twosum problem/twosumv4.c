#include <stdio.h>
#include <stdlib.h>

#define p printf


int getLength(){
    int len;
    p("\nEnter array length: ");
    scanf("%i", &len);

    return len;
}

int *createArray(int length){
    int *arraytemp = (int *)malloc(length * sizeof(int));
    int i;

    for(i = 0; i < length; i++){
        p("Enter element %i: ", i+1);
        scanf("%i", &arraytemp[i]);
    }

    return arraytemp;
}
int getTarget(){
    int temp;
    printf("Enter what number would you like the sum of two numbers to be: ");
    scanf("%i", &temp);
    return temp;
}

int *twoSum(int *array, int length, int target){
    int *answer = (int*)malloc(2 * sizeof(int));
    int i, j;
    answer[0] = 0;
    answer[1] = 0;
    for(i = 0; i < length; i++){
        for(j = i + 1; j < length; j++){
            if(*(array + i) + *(array + j) == target){
                answer[0] = i;
                answer[1] = j;
                return answer;
                break;
            }
        }
    }

    return answer;
}

void printInput(int *a, int length){
    int i;
    p("[");
    for(i = 0; i < length; i++){
        printf("%i, ", a[i]);
    }
    p("]");
}

void explain(int *a, int *b, int target){
    p("\n\nThe answer is [%i,%i] because: \n", b[0], b[1]);
    p("The values %i + %i will add up to %i", a[*(b)], a[*(b+1)], target);
}

int main(){
    int arrLength = getLength();
    int *array = createArray(arrLength);
    int target = getTarget();
    int *answer = twoSum(array, arrLength, target);
    
    if(*answer == 0 && *(answer+1) == 0){
        printf("No elements in the array will add up to %i", target);
    } else {
        printInput(array, arrLength);
        p("\n");
        printInput(answer, 2);
        explain(array, answer, target);
    }
}
