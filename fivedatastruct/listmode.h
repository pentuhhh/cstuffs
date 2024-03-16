#ifndef LISTMODE_H
#define LISTMODE_H

void listModeMain(struct stackParameters *mainstack);
void listFunctionsMenu();
void listPush(struct stackParameters *mainstack);
void listExtract(struct stackParameters *mainstack);
void swap(struct stackParameters *a, int i);

#endif