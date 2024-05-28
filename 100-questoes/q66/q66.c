// 66. Faça um programa em C que copie o conteúdo de um vetor de 10 posições de inteiro em
// um segundo vetor e imprima este último

#include <stdio.h>

int main() {
  int lista[10] = {12, 4, 12, 5, 2, 6, 21, 6, 0, 100}, copia[10];

  for (int n = 0; n < 10; n++) 
    copia[n] = lista[n];

  for (int i = 0; i < 10; i++)
    printf("%d ", copia[i]);
}