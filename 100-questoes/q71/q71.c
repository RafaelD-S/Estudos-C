// 71. Escreva um programa que leia um vetor de 10 posições de inteiros e um inteiro. O
// programa deve informar a primeira posição onde este inteiro ocorre no vetor ou -1 caso o
// valor não ocorra no vetor (Busca Sequencial).

#include <stdio.h>

int main() {
  int lista[10], num, i;

  for (i = 0; i < 10; i++) {
    printf("Informe 10 numeros inteiros (%d/10): ", i + 1);
    scanf("%d", &lista[i]);
  }
  printf("Informe um numero: ");
  scanf("%d", &num);

  for (i = 0; i < 10; i++) {
    if (lista[i] == num) {
      printf("%d", i);
      break;
    }
    if (i == 9)
      printf("-1");
  }
}