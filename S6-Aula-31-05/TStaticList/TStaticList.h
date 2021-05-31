#ifndef TSTATICLIST_H
#define TSTATICLIST_H

typedef struct list TStaticList;

TStaticList* TStaticList_create();
TStaticList* TStaticList_destroy(TStaticList*);

int TStaticList_insert_end(TStaticList*, int);
void TStaticList_print(const TStaticList*);


#endif