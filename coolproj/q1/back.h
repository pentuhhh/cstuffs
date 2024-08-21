#ifndef BACK_H
#define BACK_H

typedef struct node{

    int state;
    int xcord;
    int ycord;
    struct node *next;


} node, *point, **axis, ***origin;

origin createPlane();
point createline(xcord);
void printplane(origin originpoint, int xmax, int ymax);

#endif