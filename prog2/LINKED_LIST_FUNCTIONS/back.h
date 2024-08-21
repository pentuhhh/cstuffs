#ifndef BACK_H
#define BACK_H

struct node {
    int val;
    struct node *next;
};

struct node *createList();
void printList(struct node *head);
int genRand(int max, int min);
struct node *createRandomListLength();
struct node *createRandomListLengthLong();
struct node *createRandomListLengthLongHighChanceDuplicate();
void printNewLine();
void printList(struct node *head);
void printHeader();

/*

hello!

special thanks to sir Madz for a wonderful semester of prog 2

special thanks to ram, myles, sam, kenneth and ofcos Neah!!!

goodluck to everyone

*/
#endif