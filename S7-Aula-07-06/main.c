#include "TLinkedList.h"
#include<stdio.h>

int main(){
  //Sem o no descritor
  TLinkedList* list = TLinkedList_create();
  int V[] = {1, 5, 7};
  for(int i=0; i < 3; i++){
    if(!TLinkedList_insert_end(list, V[i]))
      printf("Erro ao inserir %i \n", V[i]);
  }
  TLinkedList_print(list);
  return 0;
}