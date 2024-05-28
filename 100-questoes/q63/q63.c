// 63. Escreva um programa que leia dois vetores de números reais de mesma dimensão (10
// posições), e imprima o vetor resultante da soma destes vetores.

#include <stdio.h>

int main() {
  float lista1 [10] = {1.4, 13.2, 41.0, 2.5, 0, 1, 4, 5, 1, 12};
  float lista2 [10] = {1.1, 1.2, 431.0, 2.45, 0.2, 7.3, 1, 3, 1, 4};
  float soma [10];
  int n;

  for (n = 0; n < 10; n++)
    soma [n] = lista1[n] + lista2[n];

  for (n = 0; n < 10; n++)
    printf("\n\n%.2f", soma[n]);
}