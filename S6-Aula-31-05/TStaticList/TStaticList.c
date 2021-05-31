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

int TStaticList_insert_begin(TStaticList* list, int info){
    if(list!=NULL){
    //Se nao estiver cheia
    if(!TStaticList_is_full(list)){
      for(int i=list->qty-1; i>=0; i--)
        list->data[i+1] = list->data[i];
      list->data[0] = info;
      list->qty++;
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

TStaticList* TStaticList_concatenate(const TStaticList* list1, TStaticList* list2){
  TStaticList* nova = NULL;
  if(list1->qty + list2->qty <= MAX){
    nova = TStaticList_create();
    int i;
    for(i=0; i< list1->qty; i++)
      TStaticList_insert_end(nova, list1->data[i]);
    for(i=0; i< list2->qty; i++)
      TStaticList_insert_end(nova, list2->data[i]);
  }
  return nova;
}