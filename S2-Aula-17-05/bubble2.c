#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 10
/**
 * Como criar um vetor de ponteiros de tal forma que ordene este vetor e 
 * não mexa nas posições do original.
 * */

void swap(int **v1, int **v2){
  int *temp = *v1;
  *v1 = *v2;
  //v1 e v2 são endereços para endereços
  //*v1 e *v2 são endereços de inteiros
  *v2 = temp;
}

void fill(int V[], int* Vp[], unsigned int size, int range){
  unsigned int i;
  srand(time(NULL));
  for(i=0; i< size; i++){
    Vp[i] = &V[i];
    V[i] = rand()%range;
  }
}

void printV(int V[], unsigned int size){
  unsigned int i;
  for(i=0; i< size; i++)
    printf("%d, ",V[i]);
  putchar('\n');
}

void printV2(int* V[], unsigned int size){
  unsigned int i;
  for(i=0; i< size; i++)
    printf("%d, ",*V[i]);
  putchar('\n');
}

void bubble2(int* V[], unsigned int size){
  unsigned int i, j;
  for(i=0; i< size; i++)
    for(j=i+1; j<size; j++)
    if(*V[i]>*V[j])
      swap(&V[i], &V[j]);
}

int main(){
  int V[MAX], *Vp[MAX];

  fill(V, Vp, MAX, 100);
  printV(V, MAX);
  bubble2(Vp, MAX);
  printV(V, MAX);
  printV2(Vp, MAX);
  return 0;
}