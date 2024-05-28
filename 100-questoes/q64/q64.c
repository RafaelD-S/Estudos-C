// 64. Faça um programa em C que leia um array de 20 inteiros e imprima o menor e o maior
// valor dentre os elementos do array.

#include <stdio.h>

int main() {
  int lista[20], n, maior, menor;

  for (n = 0; n < 20; n++) {
    printf("Informe um numero inteiro (%d/20)", n + 1);
    scanf("%d", &lista[n]);

    if (n == 0) {
      maior = lista[0];
      menor = lista[0];
    }

    if (maior < lista[n]) 
      maior = lista[n];
    if (menor > lista[n])
      menor = lista[n];
  }
  printf("%d / %d", menor, maior);
}