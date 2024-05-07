#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

struct word {
    char string[MAX];
};

struct sentence {
    struct word words[MAX];
};

void getString(struct sentence *inputsentence);
void printSentence(struct sentence inputsentence);

void commonOfTwo(struct sentence input1, struct sentence input2, struct sentence *output);

int main(){
    struct sentence mysentence;
    struct sentence mysentence2;
    getString(&mysentence);
    getString(&mysentence2);

    printSentence(mysentence);
    printSentence(mysentence2);

    printf("\n\n");
    struct sentence commonWords;

    commonOfTwo(mysentence, mysentence2, &commonWords);
    printSentence(commonWords);

}

void printSentence(struct sentence inputsentence){
    int i;
    for(i = 0; inputsentence.words[i].string[0] != '\0'; i++){
        puts(inputsentence.words[i].string);
    }
}

void getString(struct sentence *inputsentence){
    int wordcount = 0;
    char temp[MAX];
    fgets(temp, MAX, stdin);
    for(char *token = strtok(temp, " "); token != NULL; token = strtok(NULL, " ")){
        strcpy(inputsentence->words[wordcount].string, token);
        wordcount++;
    }
    inputsentence->words[wordcount].string[0] = '\0';
}

void commonOfTwo(struct sentence input1, struct sentence input2, struct sentence *output){
    int i, j, k=0;

    for(i = 0; input1.words[i].string[0] != '\0'; i++){
        for(j = 0; input2.words[j].string[0] != '\0'; j++){
            if(strcasecmp(input1.words[i].string,input2.words[j].string) == 0){
                strcpy(output->words[k].string, input2.words[j].string);
                k++;
            }
        }
    }
}


