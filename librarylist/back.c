#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "back.h"

void debug(){
    printf("Success");
}

void populate(struct booklist *mainlibrary){
    mainlibrary->count = 3;
    strcpy(mainlibrary->books[0].title.words[99].characters, "Harry Potter and The Sorcerers Stone");
    strcpy(mainlibrary->books[0].author.words[99].characters, "JK Rowling");
    strcpy(mainlibrary->books[0].genre.characters, "Fiction");

    strcpy(mainlibrary->books[1].title.words[99].characters, "Mein Kampf");
    strcpy(mainlibrary->books[1].author.words[99].characters, "Adolf Hitler");
    strcpy(mainlibrary->books[1].genre.characters, "Biography");

    strcpy(mainlibrary->books[2].title.words[99].characters, "Principia Psychology");
    strcpy(mainlibrary->books[2].author.words[99].characters, "Sigmun Freud");
    strcpy(mainlibrary->books[2].genre.characters, "Reference");
    //debug();
}

void printLibrary(struct booklist *mainlibrary){
    int i;

    for(i = 0; i < mainlibrary->count; i++){
        printf("Title: ");
        printf("%s\n", mainlibrary->books[i].title.words[99].characters);
        printf("Author: ");
        printf("%s\n", mainlibrary->books[i].author.words[99].characters);
        printf("genre: ");
        printf("%s\n\n", mainlibrary->books[i].genre.characters);
    }
}

void tokenize(struct booklist *mainlibrary, int n){
    int i, j;
    for(i = 0; i < n; i++){
        j = 0;
        for(char *token = strtok(mainlibrary->books[i].title.words[99].character, " "); token != NULL; token = strtok(NULL, " ")){
            strcpy(mainlibrary->books[i].title.words[j].characters[0], token);
            j++;
        }
        mainlibrary->books[i].title.words[j].characters[0] = '\0';
        
        j = 0;
        for(char *token = strtok(mainlibrary->books[i].title.words[99].character, " "); token != NULL; token = strtok(NULL, " ")){
            strcpy(mainlibrary->books[i].title.words[j].characters[0], token);
            j++;
        }
        mainlibrary->books[i].title.words[j].characters[0] = '\0';
    }
    
}