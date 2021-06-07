#ifndef TLINKED_LIST_H
#define TLINKED_LIST_H

typedef struct list TLinkedList;

TLinkedList* TLinkedList_create();
void TLinkedList_destroy(TLinkedList*);
int TLinkedList_insert_end(TLinkedList*, int);
int TLinkedList_insert_begin(TLinkedList*, int);
void TLinkedList_print(TLinkedList*);

//Para vocês implementarem
/**
 * Busca por um elemento na lista. Retorna o endereço do inteiro armazenado pelo no.
 * */
int* TLinkedList_search(TLinkedList*, int);
/**
 * Busca e deleta um elemento da lista, refazendo as conexões necessárias. 
 * Retorna 0 ou 1 indicando a falha ou o sucesso da operação.
 * */
int TLinkedList_delete(TLinkedList*, int);


#endif