#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

#include "back.h"
#include "back.c"


int main(){

    axis xaxis = calloc(10, sizeof(point));
    origin originpoint = &xaxis;

    originpoint = createPlane();
    printPlane(originpoint, 10, 10);




}