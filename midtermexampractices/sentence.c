#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct word{
    char characters[100];
};

struct sentence{
    int top;
    struct word *words;
};
void printThis(struct sentence input);
void tokenize(struct sentence *input, char *sentence);
int main(){
    struct sentence mySentence;
    mySentence.words = (struct word*)calloc(100, sizeof(struct word));
    mySentence.top = -1;

    char input[256];

    fgets(input, 255, stdin);
    input[strcspn(input, "\n")] = '\0';

    tokenize(&mySentence, input);
    printThis(mySentence);

}

void tokenize(struct sentence *input, char *sentence){

    char *token = sentence;

    for(token = strtok(sentence, " "); token != NULL; token = strtok(NULL, " ")){
        input->top++;

        strcpy(input->words[input->top].characters, token);

    }
}

void printThis(struct sentence input){
    int i;

    for(i = 0; i <= input.top; i++){
        printf("%i. %s\n", i + 1, input.words[i].characters);
    }
}