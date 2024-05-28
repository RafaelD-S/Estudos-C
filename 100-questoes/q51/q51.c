// 51. A série de Fibonacci é formada pela sequencia:
// • 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
// Escreva um programa que gere a série de FIBONACCI até o N-ésimo termo (com N
// sendo uma entrada do algoritmo).

#include <stdio.h>

int main() {
  int limite, n = 1 , numAnterior = 1, numAtual = 2, numAntes = 1;

  printf("Informe um numero inteiro: ");
  scanf("%d", &limite);

  while (n <= limite) {
    if(n < 3) 
      printf("\n1");
      
    else if (n == 3)
      printf("\n%d", numAtual);
      
    else {
      numAntes = numAnterior;
      numAtual = numAtual + numAnterior;
      numAnterior = numAtual - numAnterior;

      printf("\n%d", numAtual);
    }
    n++;
  }
}