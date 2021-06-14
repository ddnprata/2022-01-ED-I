#include "TSortedList.h"
#include<stdio.h>
//compilar: gcc main.c TSortedList.c 
//Rodar: ./a.exe <input.txt
int main(){
  
  int N, M;
  scanf("%d %d", &N, &M);
  TSortedList* list = TSortedList_create(M);
  int matrix[N][M];
  for(int i=0; i<N; i++){
    for(int j=0; j<M; j++)
      scanf("%d", &matrix[i][j]);
    if(!TSortedList_insert(list, matrix[i], i))
      printf("Erro ao inserir a linha %d\n", i);
  }
  //Sem o no descritor
  TSortedList_print(list);
  return 0;
}