#include<stdio.h>

int main(int argc, char* argv[]){
  int n, i, temp;
  scanf("%d", &n);
  for(i=0; i< n; i++){
    scanf("%d", &temp);
    printf("li: %d\n", temp);
  }
  return 0;
}