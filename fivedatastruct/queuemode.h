#ifndef QUEUEMODE_H
#define QUEUEMODE_H





void queueModeMain(struct stackParameters *mainstack);
void queueFunctionsMenu();
void queuePush(struct stackParameters *mainstack);
void queuePop(struct stackParameters *mainstack);

void swap(struct stackParameters *a, int i);

#endif