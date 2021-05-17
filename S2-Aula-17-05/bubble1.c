#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 10

void swap(int *v1, int *v2){
  int temp = *v1;
  *v1 = *v2;
  //v1 e v2 são endereços
  //*v1 e *v2 são inteiros
  *v2 = temp;
}

void fill(int V[], unsigned int size, int range){
  unsigned int i;
  srand(time(NULL));
  for(i=0; i< size; i++)
    V[i] = rand()%range;
}

void printV(int V[], unsigned int size){
  unsigned int i;
  for(i=0; i< size; i++)
    printf("%d, ",V[i]);
  putchar('\n');
}

void bubble1(int V[], unsigned int size){
  unsigned int i, j;
  for(i=0; i< size; i++)
    for(j=i+1; j<size; j++)
    if(V[i]>V[j])
      swap(&V[i], &V[j]);
}

int main(){
  int V[MAX];
  fill(V, MAX, 100);
  printV(V, MAX);
  bubble1(V, MAX);
  printV(V, MAX);
  return 0;
}