#include "TSortedList.h"
#include<stdio.h>

int main(){
  //Sem o no descritor
  TSortedList* list = TSortedList_create();
  TSortedList* list2 = TSortedList_create();
  int V[] = {1, 5, 7, 2, 6};
  for(int i=0; i < 5; i++){
    if(!TSortedList_insert(list, V[i]))
      printf("Erro ao inserir %i \n", V[i]);
  }
  TSortedList_print(list);
  return 0;
}