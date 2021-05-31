#include "TStaticList.h"
#include <stdlib.h>
#include <stdio.h>

#define MAX 10

//Auxiliares
int TStaticList_is_full(const TStaticList*);
int TStaticList_is_empty(const TStaticList*);
struct list{
  unsigned int qty;
  int data[MAX];
};
TStaticList* TStaticList_create(){
  TStaticList *nova  = malloc(sizeof(TStaticList));
  if (nova){
    nova->qty = 0;
  }
  return nova;
}

TStaticList* TStaticList_destroy(TStaticList* list){
  if(list!=NULL)
    free(list);
} 

int TStaticList_insert_end(TStaticList* list, int info){
  if(list!=NULL){
    //Se nao estiver cheia
    if(!TStaticList_is_full(list)){
      //Leio o valor de qty, e depois incremento
      list->data[list->qty++] = info;
      return 1;
    }
  }
  return 0;
}
void TStaticList_print(const TStaticList* list){
  for(int i=0; i< list->qty ; i++)
    printf("%d, ", list->data[i]);
  putchar('\n');
}

//Auxiliares
int TStaticList_is_full(const TStaticList* list){
  return list->qty == MAX;
}
int TStaticList_is_empty(const TStaticList* list){
  return list->qty == 0;
}