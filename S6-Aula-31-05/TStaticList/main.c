#include "TStaticList.h"
#include<stdio.h>

int main(){
  TStaticList *list1 = TStaticList_create(), *list2 = TStaticList_create();
  int V[] = {10, 5, 7, 8, 11, 15, 12, 19, 21, 22, 26, 51};
  for(int i=0; i<12; i++){
    if(i<=5)
      if(!TStaticList_insert_begin(list1, V[i]))
        printf("Nao pude inserir o %d\n", V[i]);
    if(i>7)
      if(!TStaticList_insert_begin(list2, V[i]))
        printf("Nao pude inserir o %d\n", V[i]);
  }
  TStaticList_print(list1);
  TStaticList_print(list2);
  TStaticList* list3 = TStaticList_concatenate(list1, list2);
  if(list3)
    TStaticList_print(list3);
  
  TStaticList_destroy(list1);
  TStaticList_destroy(list2);
  TStaticList_destroy(list3);
  return 0;
}