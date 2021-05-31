#include "Complex.h"
#include<stdio.h>
#include<stdlib.h>

struct complex{
  float x, y;
};

Complex* Complex_create(float x, float y){
  Complex* novo = malloc(sizeof(Complex));
  if(novo){
    novo->x = x;
    novo->y = y;
  }
  return novo;
}
//b)
void Complex_delete(Complex* num){
  free(num);
}
//Imprime um dado Complex
void Complex_print(const Complex* num){
  if(num->y == 0)
    printf("%0.2f ", num->x);
  else
    printf("%0.2f + %0.2fi ", num->x, num->y);
  putchar('\n');
}
//Access values x and y
//c) Soma
Complex* Complex_soma(const Complex* num1, const Complex* num2){
  return Complex_create(num1->x+num2->x, num1->y+num2->y);
}

//d) Subtração
Complex* Complex_subtracao(const Complex* num1, const Complex* num2){
  return Complex_create(num1->x-num2->x, num1->y-num2->y);
}
