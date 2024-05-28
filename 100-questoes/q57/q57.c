// 57. Sendo S = 1 + 1/2² + 1/3³ ... 1/n**n
// um somatório de N (informado pelo
// usuário) termos, escreva um programa para calcular S para um número N.

#include <stdio.h>

int main() {

  int n2, n, numElevado, a = 1;
  float soma = 0;

  printf("Informe a posição: ");
  scanf("%d", &n);
  
  while (a <= n) {

    numElevado = a;
    
    n2 = 1;
    while (n2 < a) {
      numElevado = numElevado * a;
      n2++;
    }

    soma = soma + (1.0/numElevado);
    a++;
  }
  printf("\n%f", soma);
}