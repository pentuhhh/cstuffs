#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "back.h"
#include "back.c"

int main(){
    splashMessage();

    player player1 = getPlayer();
    player player2 = getPlayer();

    scoreboard(player1, player2);
    


}