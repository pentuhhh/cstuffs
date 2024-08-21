#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define pf printf
#define pfn printf("\n")
#define pfn2 printf("#\n")

#include "back.h"

void splashMessage(){
    system("clear");
    fflush(stdin);
    pf("#\tWelcome to HANGMAN");
    pfn;
    pfn2;
    pf("#\tThis is a two player game");
    pfn;
    pf("#\tYou start with 5 lives");
    pfn;
    pfn2;
    pf("#\tA player inputs a phrase for the other player to guess");
    pfn;
    pfn2;
    pf("#\tnote: The phrase can only contain 20 words that are 20 characters long");
    pfn;
    pfn2;
    pf("#\tThe more unique characters there are, the higher the points-");
    pfn;
    pf("#\t10 points for each unique character");
    pfn2;

    fflush(stdin);
};

player getPlayer(){
    player temp;
    pfn2;
    pf("#\tEnter Player Name: ");
    fflush(stdin);
    scanf("%19s", (temp.playername.characters));

    temp.lives = 5;
    temp.points = 0;
    temp.solved = 0;

    return temp;
};

void scoreboard(player player1, player player2){
    system("clear")
};