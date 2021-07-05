#ifndef TDLIST_H
#define TDLIST_H
typedef struct d_list TDList;

TDList* TDList_create();
//Inserir um elemento inteiro na lista
int TDList_insert(TDList*, int);
//Imprimir a lista do início para o fim
void TDList_print(TDList*);
//Imprimir a lista do fim para o início
void TDList_reverse_print(TDList*);

#endif