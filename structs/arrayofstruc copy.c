#include <stdio.h>

struct data {
    int x;
    float y;
};

struct info {
    struct data var[3];
};

struct info getdata();
void printThis(struct info temp);

int main(){

    struct info temp = getdata();
    printThis(temp);

}

struct info getdata(){
    struct info temp;
    int i;
    for(i = 0; i < 3; i++){
        scanf("%i", &temp.var[i].x);
        scanf("%f", &temp.var[i].y);
    }

    return temp;
}

void printThis(struct info temp){
    int i;
    for(i=0;i<3;i++){
        printf("%i\t%f\n", temp.var[i].x, temp.var[i].y);
    }
    
}