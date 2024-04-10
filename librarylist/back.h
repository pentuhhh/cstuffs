#ifndef BACK_H
#define BACK_H

struct word {
    char characters[100];
};

struct sentence {
    struct word words[100];
};

struct book {
    struct sentence title;
    struct sentence author;
    struct word genre;
    int status;
};

struct booklist {
    struct book books[100];
    int count;
};

void populate(struct booklist *mainlibrary);
void printLibrary(struct booklist *mainlibrary);
void debug();
void tokenize(struct booklist *mainlibrary, int n);
#endif