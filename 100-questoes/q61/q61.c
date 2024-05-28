// 61. Faça um programa em C que crie e inicialize um array de 20 posições de inteiros com 0
// para cada elemento. Imprima o vetor em seguida, indicando a posição e o valor na
// posição (um por linha).

#include <stdio.h>

int main() {
  int lista[20] = {0};

  for (int n = 0; n < 20; n++) 
    printf("\n[%d - %d]", n, lista[n]);
}