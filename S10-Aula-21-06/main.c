#include <stdio.h>
#include "TCircularList.h"


int main(void) {
  int V[] = {1, 2, 3};
  TCircularList* L = TCircularList_create();
  for(int i=0; i<3; i++)
    if(!TCircularList_insert_end(L, V[i]))
      printf("Problema ao inserir: %d\n", V[i]);
  TCircularList_print(L);
  return 0;
}
