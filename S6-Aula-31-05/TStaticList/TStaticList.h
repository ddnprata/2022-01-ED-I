#ifndef TSTATICLIST_H
#define TSTATICLIST_H

typedef struct list TStaticList;
/**
 * Devolve uma instância de TStaticList
 * */
TStaticList* TStaticList_create();
/**
 * Deleta uma TStaticList da memoria;
 * */
TStaticList* TStaticList_destroy(TStaticList*);
/**
 * Implementa a inserção no final da lista.
 * Parametros: TStaticList* e um inteiro como informação
 * */
int TStaticList_insert_end(TStaticList*, int);
/**
 * Implementa a inserção no início da lista.
 * Parametros: TStaticList* e um inteiro como informação
 * */
int TStaticList_insert_begin(TStaticList*, int);
/**
 * Imprime o conteúdo da lista;
 * Parâmetro: ponteiro constante para TStaticList
 * */
void TStaticList_print(const TStaticList*);

//Primeira questao
TStaticList* TStaticList_concatenate(const TStaticList*, TStaticList*);

#endif