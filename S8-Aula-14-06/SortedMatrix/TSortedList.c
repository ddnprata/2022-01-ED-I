#include "TSortedList.h"
#include<stdlib.h>
#include<stdio.h>

typedef struct no{
  int *line;
  int index;
  struct no *prox;
} TNo;

struct list{
  TNo *inicio;
  int M;
};

/*
Aux funcs
*/
TNo* TNo_createNFill(int *line, int index){
  TNo* novo = malloc(sizeof(TNo));
  if(novo){
    novo->line = line;
    novo->index = index;
    novo->prox = NULL;
  } return novo;
}

TSortedList* TSortedList_create(int M){
  TSortedList* nova = malloc(sizeof(TSortedList));
  if(nova){
    nova->inicio = NULL;
    nova->M = M;
  } return nova;
}

int TSortedList_insert(TSortedList* list, int *line, int index){
  TNo* novo = TNo_createNFill(line, index);
  if(novo == NULL || list == NULL) return 0;
  
  if(list->inicio==NULL)//lista vazia
    list->inicio = novo;
  else{ //Lista nao vazia
    //Case I: novo->info < inicio->info
    if(novo->line[0] < list->inicio->line[0]){
      novo->prox = list->inicio;
      list->inicio = novo;
    }else{ //Case II: 
      TNo* y = list->inicio;
      while(y->prox!=NULL)
      {
        if(y->prox->line[0] > novo->line[0]) break;
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
    printf("Line: [%d]:[", aux->index);
    for(int j=0; j<list->M; j++)
      printf("%d,", aux->line[j]);
    printf("]\n");
    aux = aux->prox;
  }
}
