#include "TLinkedList.h"
#include<stdlib.h>
#include<stdio.h>

typedef struct no{
  int info;
  struct no *prox;
} TNo;

struct list{
  TNo* inicio;
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
  
}

void TLinkedList_print(TLinkedList* list){
  TNo* aux = list->inicio;
  while(aux!=NULL){
    printf("[%d]-> ", aux->info);
    aux = aux->prox;
  }
  putchar('\n');
}

