#include "Complex.h"

int main(){
  Complex* p1 = Complex_create(10, 6);
  Complex* p2 = Complex_create(9, 0);
  Complex_print(p1);
  Complex_print(p2);
  Complex* sum1 = Complex_soma(p1, p2);
  Complex* sub1 = Complex_subtracao(p1, p2);
  Complex_print(sum1);
  Complex_print(sub1);
  Complex_delete(sub1);
  Complex_delete(sum1);
  Complex_delete(p1);
  Complex_delete(p2);
  return 0;
}