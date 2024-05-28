// 59. O número e (número de Euler) pode ser representado e calculado por meio da utilização
// da série de Taylor para e quando x=1, como a soma da seguinte série infinita: 
// e = 1 + 1/1! + 1/2! + 1/3! ... + 1/n!
//   Escreva um programa, que leia o número de termos da série (n) e imprima como saída, o
//   cálculo do número de Euler para cada um dos n primeiros elementos da série.
  

#include <stdio.h>

int main() {
  int num, cont, fatCont, fatorial;
  float soma = 1.0;

  printf("Infome um número: ");
  scanf("%d", &num);

  for (cont = 1; cont <= num; cont++) {

    fatorial = 1;
    for (fatCont = 1; fatCont <= cont; fatCont++) {
      fatorial = fatorial * fatCont;
    }

    soma = soma + (1.0 / fatorial);
  }
  printf("%.2f", soma);
}