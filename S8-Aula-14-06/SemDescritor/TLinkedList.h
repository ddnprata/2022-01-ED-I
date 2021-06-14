#ifndef TLINKED_LIST_H
#define TLINKED_LIST_H

typedef struct no TNo;

void TLinkedList_destroy(TNo*);
int TLinkedList_insert(TNo**, int);
void TLinkedList_print(TNo*);
void TLinkedList_print_r(TNo*);
#endif