#include "TStaticList.h"
#include<stdio.h>

int main(){
  TStaticList *list = TStaticList_create();
  int V[] = {10, 5, 7, 8, 11, 15, 12, 19, 21, 22, 26, 51};
  for(int i=0; i<12; i++){
    if(!TStaticList_insert_end(list, V[i]))
      printf("Nao pude inserir o %d\n", V[i]);
  }
  TStaticList_print(list);
  TStaticList_destroy(list);
  return 0;
}