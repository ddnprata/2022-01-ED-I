#include "TDList.h"
#include<stdio.h>
int main(){
  TDList *lista = TDList_create();

  int V[] = {1, 2, 3, 4, 5};
  for(int i=0; i<5; i++)
    if(!TDList_insert(lista, V[i]))
      printf("Nao consegui inserir V[%d] = %d\n", i, V[i]);
  TDList_print(lista);
  TDList_reverse_print(lista);
  return 0;
}