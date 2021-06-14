#ifndef TSORTED_LIST_H
#define TSORTED_LIST_H

typedef struct list TSortedList;

TSortedList* TSortedList_create(int);
void TSortedList_destroy(TSortedList*);
int TSortedList_insert(TSortedList*, int*, int);
void TSortedList_print(TSortedList*);
#endif