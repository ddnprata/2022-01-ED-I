#ifndef TCOMPLEX_H
#define TCOMPLEX_H

typedef struct complex Complex;
//Cria um novo Complex, passando floats x e y
//a)
Complex* Complex_create(float, float);
//b)
void Complex_delete(Complex*);
//Imprime um dado Complex
void Complex_print(const Complex*);
//Access values x and y
//c) Soma
Complex* Complex_soma(const Complex*, const Complex*);

//d) Subtração
Complex* Complex_subtracao(const Complex*, const Complex*);

#endif