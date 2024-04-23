#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
struct STRUCT_NAME{
    insert variables here with datatypes
    no values allowed
};
*/

struct birthday {
    char *month;
    int day;
    int year;
};

int main(){
    struct birthday *list = calloc(3, sizeof(struct birthday));

    list[0].month = calloc(10, sizeof(char));
    strcpy(list[0].month, "april");
    list[0].day = 25;
    list[0].year = 2004;

    list[1].month = calloc(10, sizeof(char));
    strcpy(list[1].month, "June");
    list[1].day = 26;
    list[1].year = 2005;

    list[2].month = calloc(10, sizeof(char));
    strcpy(list[2].month, "May");
    list[2].day = 27;
    list[2].year = 2006;

    int i;
    for(i = 0; i < 3; i++){
        printf("%s, %d, %d\n", list[i].month, list[i].day, list[i].year);
    }


    return 0;
}
