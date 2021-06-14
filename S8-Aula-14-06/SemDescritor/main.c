#include "TLinkedList.h"
#include<stdio.h>

int main(){
  //Sem o no descritor
  TNo* inicio = NULL;
  int V[] = {1, 5, 7, 2, 6};
  for(int i=0; i < 5; i++){
    if(!TLinkedList_insert(&inicio, V[i]))
      printf("Erro ao inserir %i \n", V[i]);
  }
  TLinkedList_print_r(inicio);
  return 0;
}