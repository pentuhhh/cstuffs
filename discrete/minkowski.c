#include <stdio.h>

int getP();
int getN();
int getAbsolute(int num);
void printGiven(int n, int p);
void summation(int n, int p);
int main(){
    int p = getP();
    int n = getN();

    printGiven();
    summation(n, p);
}

int getP(){
    int p = 0;
    while(p < 1){
        printf("Enter P that is greater than 1");
        scanf("%i", &p);
    }

    return p;

}

int getN(){
    int n = 0;
    while(n < 0){
        printf("Enter N that is a real number: ");
        scanf("%i", &n);
    }

    return n;
}

int getAbsolute(int num){
    if(num < 0){
        num *= -1;
    }
    return num;
}

void printGiven(int n, int p){
    printf("Your N is %i, your P is %i", n, p);
}

void summation(int n, int p){
    int i;
    for(i = 1; i <= n; i++){
        printf("[| %i + %i | ^%i ] ^%i = [|%i| ^ %i] ^ %i  ")
    }
} 