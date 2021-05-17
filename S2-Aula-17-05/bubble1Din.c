#include<stdio.h>
#include<stdlib.h>
#include<time.h>

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
  unsigned int size;
  puts("Entre com o tamanho do vetor");
  scanf("%u", &size);
  int V[size];
  /*
  V = (int*) malloc(sizeof(int)*size);
  if(V==NULL){
    puts("Não pude alocar a memoria!");
    return 0;
  }
  */

  fill(V, size, (int)size*2);
  printV(V, size);
  bubble1(V, size);
  printV(V, size);
  return 0;
}