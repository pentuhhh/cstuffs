#include <stdio.h>
#include <stdlib.h>
#include "back.h"
#include "back.c"

//cartesian plane using linked lists

int main(){

    origin origin = malloc(sizeof(point));

    axis x,y;

    int xrange = 10, yrange = 10;


    origin = createPlane(xrange, yrange, x, y);





}