#include "TSortedList.h"
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

TSortedList* TSortedList_create(){
  TSortedList* nova = malloc(sizeof(TSortedList));
  if(nova){
    nova->inicio = NULL;
  } return nova;
}

int TSortedList_insert(TSortedList* list, int info){
  TNo* novo = TNo_createNFill(info);
  if(novo == NULL || list == NULL) return 0;
  
  if(list->inicio==NULL)//lista vazia
    list->inicio = novo;
  else{ //Lista nao vazia
    //Case I: novo->info < inicio->info
    if(novo->info < list->inicio->info){
      novo->prox = list->inicio;
      list->inicio = novo;
    }else{ //Case II: 
      TNo* y = list->inicio;
      while(y->prox!=NULL)
      {
        if(y->prox->info > novo->info) break;
        y = y->prox;
      }
        novo->prox = y->prox;
        y->prox = novo;
    }
  }
  return 1;
}

void TSortedList_print(TSortedList* list){
  TNo* aux = list->inicio;
  while(aux!=NULL){
    printf("[%d]-> ", aux->info);
    aux = aux->prox;
  }
  putchar('\n');
}
