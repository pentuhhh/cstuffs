#ifndef ORDEREDLISTMODE_H
#define ORDEREDLISTMODE_H

void orderedlistModeMain(struct stackParameters *mainstack);
void orderedlistFunctionsMenu();
void orderedlistPush(struct stackParameters *mainstack);
void orderedlistExtract(struct stackParameters *mainstack);
void swap3(struct stackParameters *a, int i);
void sort(struct stackParameters *mainstack);
void swapStructElem(int *a, int *b);

#endif