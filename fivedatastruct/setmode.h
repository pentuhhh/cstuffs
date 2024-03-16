#ifndef SETMODE_H
#define SETMODE_H

void setModeMain(struct stackParameters *mainstack);
void setmodeFunctionsMenu();
void filter(struct stackParameters *mainstack);
void shift(struct stackParameters *mainstack, int i);
void setPush(struct stackParameters *mainstack);


int notDuplicate(struct stackParameters *mainstack, int n);
#endif