#include <stdio.h>

int getIntInput(int n){
    int temp = 0;

    while(temp > n || temp < n){
        printf("Input: ");
        scanf("%i", &temp);
    }

    return temp;
}