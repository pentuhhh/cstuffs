#include <stdio.h>
#include <stdlib.h>

#include "back.h"
#include "back.c"

int main(){

    struct booklist mainLibrary;
    populate(&mainLibrary);
    printLibrary(&mainLibrary);
    tokenize(&mainLibrary, mainLibrary.count);
}