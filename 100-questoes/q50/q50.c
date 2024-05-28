// Escreva um programa que leia um valor e imprima todas as possíveis combinações em
// que o lançamento de um par de dados tenha como resultado da soma dos valores dos
// dados o número lido. Por exemplo, se a entrada for o número 7, o programa deve
// imprimir as seguintes combinações:
// • 1 6
// • 2 5
// • 3 4
// • 4 3
// • 5 2
// • 6 1

#include <stdio.h>

int main() {
  int a, b, c, d;

  printf("Informe um valor inteiro: ");
  scanf("%d", &a);
  
  for(d = 1, c = 1; c < a; d++, c++) {
    b = a - d;
    if (b <= 6 && c <= 6) {
      printf("\n%d + %d = %d", b, c, a);
    }
  }
  if (a > 12 || a <= 1) {
    printf("Numero invalido");
  }
}