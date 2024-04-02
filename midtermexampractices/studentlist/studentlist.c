#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "studentlist.h"

struct studentlist *debugData(){
    struct studentlist *dcism = (struct studentlist*)calloc(1,sizeof(struct studentlist));
    dcism->roster = (struct student *)calloc(5, sizeof(struct student));
    dcism->top = 4;
    dcism->size = 5;

    dcism->roster[0].id = 1;
    strcpy(dcism->roster[0].fname.characters, "Michael");
    strcpy(dcism->roster[0].lname.characters, "Reeves");
    strcpy(dcism->roster[0].program, "BSCS");

    dcism->roster[1].id = 2;
    strcpy(dcism->roster[1].fname.characters, "Jack");
    strcpy(dcism->roster[1].lname.characters, "Louvre");
    strcpy(dcism->roster[1].program, "BSCS");

    dcism->roster[2].id = 3;
    strcpy(dcism->roster[2].fname.characters, "Ingof");
    strcpy(dcism->roster[2].lname.characters, "Door");
    strcpy(dcism->roster[2].program, "BSIT");

    dcism->roster[3].id = 4;
    strcpy(dcism->roster[3].fname.characters, "Rosemary");
    strcpy(dcism->roster[3].lname.characters, "Mayonaka");
    strcpy(dcism->roster[3].program, "BSIT");

    dcism->roster[4].id = 5;
    strcpy(dcism->roster[3].fname.characters, "Jensen");
    strcpy(dcism->roster[3].lname.characters, "Ross");
    strcpy(dcism->roster[3].program, "BSIS");

    return dcism;

}

