#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct temp
{
	char fname[20];	
	char lname[20];	
	char program[20];
	int age;
};

struct info
{
	struct temp var[5];
};

struct temp *sortByProgramAsc(struct temp *var);
struct info sortByLastNameAsc(struct temp *var);
void printThisOne(struct temp *var);
void printThisTwo(struct info var);

int main() {
	struct temp var[5] = {{"Chris","Madrazo","BSCOMPE",51},
						  {"John","Duterte","BSIT",30},
						  {"asdf","qwer","BSCS",19},
						  {"wert","sdfg","BSIT",20},
						  {"sdfg","hdfgh","BSCS",30}};
	struct temp *var2 = sortByProgramAsc(var);
	printThisOne(var2);
	
    printf("\n\n");

	struct info var3 = sortByLastNameAsc(var);	
	printThisTwo(var3);	
	
	return 0;
}

struct temp *sortByProgramAsc(struct temp *var){
    int i, j;

    struct temp tempstruct;

    struct temp *newData = (struct temp*)calloc(5, sizeof(struct temp));
    memcpy(newData, var, 5 * sizeof(struct temp));


    for(i = 0; i < 5; i++){
        for(j = i + 1; j < 5; j++){
            if(strcmp(newData[i].program, newData[j].program) > 0){
                tempstruct = newData[i];
                newData[i] = newData[j];
                newData[j] = tempstruct;
            }
        }
    } 

    return newData;
}

void printThisOne(struct temp *var){
    int i;
    for(i = 0; i < 5; i++){
        printf("%s\t%s\t\t%s\t", var[i].fname, var[i].lname, var[i].program);
        printf("%i\t\n", var[i].age);
    }
}

struct info sortByLastNameAsc(struct temp* var){
    struct info arrayOfNames;

    memcpy(&arrayOfNames, var, 5 * sizeof(struct temp));
    struct temp tempstruct;
    int i, j;
    for(i = 0; i < 5; i++){
        for(j = i + 1; j < 5; j++){
            if(strcasecmp(arrayOfNames.var[i].lname, arrayOfNames.var[j].lname) > 0){
                tempstruct = arrayOfNames.var[i];
                arrayOfNames.var[i] = arrayOfNames.var[j];
                arrayOfNames.var[j] = tempstruct;
            }
        }
    }

    return arrayOfNames;
}

void printThisTwo(struct info var){
    int i;
    for(i = 0; i < 5; i++){
        printf("%s\t%s\t%s\t%d\n", var.var[i].fname, var.var[i].lname, var.var[i].program, var.var[i].age);
    }
}