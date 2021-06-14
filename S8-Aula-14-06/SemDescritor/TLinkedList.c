#include "TLinkedList.h"
#include<stdlib.h>
#include<stdio.h>

typedef struct no{
  int info;
  struct no *prox;
} TNo;
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

int TLinkedList_insert(TNo** inicio, int info){
  TNo* novo = TNo_createNFill(info);
  if(inicio == NULL || novo == NULL) return 0;
  
  if((*inicio)==NULL)
    *inicio = novo;
  else{
    TNo* aux = *inicio;
    while(aux->prox!=NULL)
      aux = aux->prox;
    aux->prox = novo;
  }
  return 1;
}

void TLinkedList_print(TNo* inicio){
  TNo* aux = inicio;
  while(aux!=NULL){
    printf("[%d]-> ", aux->info);
    aux = aux->prox;
  }
  putchar('\n');
}

void TLinkedList_print_r(TNo* aux){
  if(aux!=NULL){
    TLinkedList_print_r(aux->prox);
    printf("[%d]-> ", aux->info);
  }else
    putchar('\n');
}
