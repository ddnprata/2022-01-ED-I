#include "sortnsearch.h"
#include<stdio.h>

void printV(int* V, int size){
  for(int i=0; i<size; i++)
    printf("%d, ", V[i]);
  puts("");
}

int main(){
  const int size = 6;
  int V[] = {5, 8, 10, 13, 7, 1};
  printV(V, size);
  sort(V, size);
  printV(V, size);
  return 0;
}