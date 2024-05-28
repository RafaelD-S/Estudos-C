// 54. Construa um programa que receba um número e verifique se ele é um número triangular.
// (Um número é triangular quando é resultado do produto de três números consecutivos.
// Exemplo: 24 = 2 x 3 x 4)

#include <stdio.h>

int main() {
  int a = 0, num, soma = 0;

  printf("Informe um numero para saber se é triangular: ");
  scanf("%d", &num);

  while (soma < num) {
    
    soma = a + (a + 1) + (a + 2);
    
    if (soma == num) {
      printf("\nEsse é um número triângular");
    }
    else if (soma > num) {
      printf("\nEsse não é um número triângular");
    }
    a++;
  }
}