#ifndef TLINKED_LIST_H
#define TLINKED_LIST_H

typedef struct list TLinkedList;

TLinkedList* TLinkedList_create();
int TLinkedList_insert_end(TLinkedList*, int);
void TLinkedList_print(TLinkedList*);
#endif