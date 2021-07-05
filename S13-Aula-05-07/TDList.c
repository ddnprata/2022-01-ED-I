#include "TDList.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct no{
  int info;
  struct no *prox;
  struct no *ant;
}TNo;

struct d_list{
  TNo *inicio, *fim;
};

TDList* TDList_create(){
  TDList* nova = malloc(sizeof(TDList));
  if(nova){
    nova->inicio = NULL;
    nova->fim = NULL;
  } return nova;
}
TNo* TNo_create_n_fill(int info){
  TNo* novo = malloc(sizeof(TNo));
  if(novo){
    novo->info = info;
    novo->prox = NULL;
    novo->ant = NULL;
  }return novo;
}

//Inserir um elemento inteiro na lista
int TDList_insert(TDList* lista, int info){
  TNo* novo = TNo_create_n_fill(info);
  if(novo == NULL || lista==NULL) return 0;
  //Caso onde a lista está vazia!
  if(lista->inicio == NULL){
      lista->inicio = novo;
      lista->fim = novo;
  }else{
    //inserir no fim
    //1) novo->ant deve apontar para o fim
    //2) fim->prox deve apontar para o novo
    //3) fim deve apontar para o novo;
    novo->ant = lista->fim;
    lista->fim->prox = novo;
    lista->fim = novo;
  }
  return 1;
}
//Imprimir a lista do início para o fim
void TDList_print(TDList* lista){
  TNo* aux = lista->inicio;
  for(; aux; aux = aux->prox)
    printf("<-[%d]-> ", aux->info);
  putchar('\n');
}
//Imprimir a lista do fim para o início
void TDList_reverse_print(TDList* lista){
  TNo* aux = lista->fim;
  for(; aux; aux = aux->ant)
    printf("<-[%d]-> ", aux->info);
  putchar('\n');
}
