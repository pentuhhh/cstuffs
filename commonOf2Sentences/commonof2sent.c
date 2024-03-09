#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct word{
    char characters[100];
};

struct sentence{
    struct word words[100];
    int wordcount;
};

void getSentence(struct sentence *sentence);
void printSentence(struct sentence mysentence);
struct sentence commonOfTwo(struct sentence first, struct sentence second);

int main(){
    struct sentence firstsentence;
    struct sentence secondsentence;
    getSentence(&firstsentence);
    getSentence(&secondsentence);

    printf("First sentence: ");
    printSentence(firstsentence);
    printf("Second sentence: ");
    printSentence(secondsentence);
    
    struct sentence thirdsentence = commonOfTwo(firstsentence, secondsentence);
    printf("Common words of the two: ");
    printSentence(thirdsentence);

}

void getSentence(struct sentence *sentence){
    char temp[256];
    int wordcount = 1;

    fgets(temp, 256, stdin);
    temp[strcspn(temp, "\n")] = '\0';
    
    /*
    note: fgets will append a newline character, as such we must remove it
    strcspn. 

    translation of line 41

    temp of i, such that i is the index of the newline character, is \0;

    strcspn(str1, str2)

    strcspn check str1 for the first occurence of any character that is part of str2 and returns its
    index

    str1 = abc1d
    str2 = 123456;
 
    strcsp(str1,str2) will return int 3 or the index of 1 in str1

    */
    for(char *token = strtok(temp, " "); token != NULL; token = strtok(NULL, " ")){
        strcpy(sentence->words[(wordcount - 1)].characters, token);
        wordcount++;
    }

    sentence->wordcount = wordcount;
    sentence->words[wordcount].characters[0] = '\0';
}

void printSentence(struct sentence mysentence){
    int i; 

    for(i = 0; i < mysentence.wordcount; i++){
        printf("%s ", mysentence.words[i].characters);
    }
    printf("\n");
}

struct sentence commonOfTwo(struct sentence first, struct sentence second){
    int i, j;
    struct sentence output;

    output.wordcount = 0;

    for(i = 0; i < first.wordcount; i++){
        for(j = 0; j < second.wordcount; j++){
            if(strcasecmp(first.words[i].characters, second.words[j].characters) == 0){
                strcpy(output.words[output.wordcount].characters, first.words[i].characters);
                output.wordcount++;
            }
        }
    }

    output.wordcount++;
    return output;
}