#ifndef STUDENTLIST_H
#define STUDENTLIST_H

struct word {
    char characters[50];
};

struct student{
    int id;
    struct word fname;
    struct word lname;
    char program[5];
};

struct studentlist{
    struct student *roster;
    int top;
    int size;
};

struct studentlist *debugData();

#endif