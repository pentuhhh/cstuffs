#ifndef BACK_H
#define BACK_H

typedef struct word{
    char characters[20];
} word;

typedef struct sentence{
    word words[20];
} sentence;

typedef struct node{
    int state;
    char letter;
    struct node *next;
} *nodeptr;

typedef struct player{
    word playername;
    int solved;
    int points;
    int lives;
} player;

void splashMessage();
player getPlayer();
void scoreboard(player player1, player player2);

#endif