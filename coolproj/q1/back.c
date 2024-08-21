#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

#include "back.h"

point createline(int xcord){
    point line = malloc(sizeof(node));
    point returnpoint = line;
    line->next = NULL;
    for(int i = 0; i <= 10; i++){
        point temp = malloc(sizeof(node));
        temp->state = 0;
        temp->xcord = xcord;
        temp->ycord = i;
        temp->next = NULL;

        line->next = temp;
        line = line->next;
        
    }

    return returnpoint->next;
}

origin createPlane(){

    axis tempaxis = calloc(10, sizeof(point));

    for(int i = 0; i <= 10; i++){
        tempaxis[i] = createline(i);
    }

    return &tempaxis;

}

void printplane(origin originpoint, int xmax, int ymax){
    int x, y;

    point trav

    for(x = xmax; x >= 0; x--){
        for(y = ymax; y >= 0; y--){
            for()
        }
    }
}