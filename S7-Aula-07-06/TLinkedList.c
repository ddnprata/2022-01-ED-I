#include "TLinkedList.h"
#include<stdlib.h>
#include<stdio.h>

typedef struct no{
  int info;
  struct no *prox;
} TNo;

struct list{
  TNo *inicio;
};

/*
Aux funcs
*/
TNo* TNo_createNFill(int info){
  TNo* novo = malloc(sizeof(TNo));
  if(novo){
    novo->info = info;
    novo->prox = NULL;
  } return novo;
}


TLinkedList* TLinkedList_create(){
  TLinkedList* nova = malloc(sizeof(TLinkedList));
  if(nova){
    nova->inicio = NULL;
  } return nova;
}

int TLinkedList_insert_end(TLinkedList* list, int info){
  TNo* novo = TNo_createNFill(info);
  if(novo == NULL || list == NULL) return 0;
  
  if(list->inicio==NULL)
    list->inicio = novo;
  else{
    TNo* aux = list->inicio;
    while(aux->prox!=NULL)
      aux = aux->prox;
    aux->prox = novo;
  }
  return 1;
}

int TLinkedList_insert_begin(TLinkedList* list, int info){
  TNo* novo = TNo_createNFill(info);
  if(novo == NULL || list == NULL) return 0;  
  novo->prox = list->inicio;
  list->inicio = novo;
  return 1;
}

void TLinkedList_print(TLinkedList* list){
  TNo* aux = list->inicio;
  while(aux!=NULL){
    printf("[%d]-> ", aux->info);
    aux = aux->prox;
  }
  putchar('\n');
}



TLinkedList* TLinkedList_concatenate(TLinkedList* L1, TLinkedList* L2){
  if(L1==NULL || L2==NULL) return NULL;
  
  TLinkedList* L3 = TLinkedList_create();
  for(TNo* aux = L1->inicio; aux!=NULL; aux = aux->prox)
    TLinkedList_insert_end(L3, aux->info);
  for(TNo* aux = L2->inicio; aux!=NULL; aux = aux->prox)
    TLinkedList_insert_end(L3, aux->info);
  return L3;
}

TLinkedList* TLinkedList_so_pares(TLinkedList* L1){
  if(L1==NULL) return NULL;
  
  TLinkedList* L2 = TLinkedList_create();
  for(TNo* aux = L1->inicio; aux!=NULL; aux = aux->prox)
    if(aux->info % 2 == 0)
      TLinkedList_insert_end(L2, aux->info);
  return L2;
}