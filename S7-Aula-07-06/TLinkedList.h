#ifndef TLINKED_LIST_H
#define TLINKED_LIST_H

typedef struct list TLinkedList;

TLinkedList* TLinkedList_create();
void TLinkedList_destroy(TLinkedList*);
int TLinkedList_insert_end(TLinkedList*, int);
int TLinkedList_insert_begin(TLinkedList*, int);
void TLinkedList_print(TLinkedList*);

//Para vocês implementarem
int TLinkedList_search(TLinkedList*, int);
int TLinkedList_delete(TLinkedList*, int);


#endif