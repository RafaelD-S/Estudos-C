// 69. Escreva um programa que leia um vetor de 15 posições de inteiros. Em seguida, o
// programa deve ler um valor inteiro e imprimir o número de vezes que este valor ocorre
// no vetor

#include <stdio.h>

int main() {
  int lista[15], num, i, cont = 0;

  for (i = 0; i < 15; i++) {
    printf("Informe os números inteiros (%d/15): ", i + 1);
    scanf("%d", &lista[i]);
  }
  printf("\nInforme um número: ");
  scanf("%d", &num);

  for (i = 0; i < 15; i++)
    if (lista[i] == num)
      cont++;

  printf("\nO numero %d apareceu %d vezes", num, cont);
}