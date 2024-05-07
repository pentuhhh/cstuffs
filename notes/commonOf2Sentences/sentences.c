#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

struct words {
    char word[MAX];
};

struct sentences {
    struct words words1[MAX];
    struct words words2[MAX];
};

void getSentence(struct sentences *inputsentence);

int main(){
    struct sentences mysentence;
    printf("Enter your sentences: ");
    getSentence(&mysentence);

    int i;
    for(i = 0; mysentence.words1[i].word[0] !='\0'; i++){
        puts(mysentence.words1[i].word);
    }
    for(i = 0; mysentence.words2[i].word[0] !='\0'; i++){
        puts(mysentence.words2[i].word);
    }

}

void getSentence(struct sentences *inputsentence){
    char temp[255];
    fgets(temp, 255, stdin);
    int i = 0;
    char *toker = strtok(temp, " ");

    for(char *toker = strtok(temp," "); toker != NULL; toker = strtok(NULL, " ")){
        strcpy(inputsentence->words1[i].word, toker);
        i++;
    }

}