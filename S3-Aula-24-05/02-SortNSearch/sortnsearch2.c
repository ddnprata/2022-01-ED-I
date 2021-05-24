#include "sortnsearch.h"
#include<stdlib.h>
#include <stdio.h>

int cmp(const void* p1, const void* p2){
  int *pt1 = (int*) p1;
  int *pt2 = (int*) p2;
  return *pt1 - *pt2;
}

void sort(int* V, int size){
  puts("Sort sortnsearch2.c");
  qsort(V, size, sizeof(int), cmp);
}
