#include "TStaticList.h"
#include <stdlib.h>

#define MAX 10

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
  free(list);
} 