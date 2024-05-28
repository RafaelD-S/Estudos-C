// 52. A série de FETUCCINE é gerada da seguinte forma: os dois primeiros termos são
// fornecidos pelo usuário; a partir daí, os termos são gerados com a soma ou subtração dos
// dois termos anteriores, ou seja:
// 1. Ai = Ai-1 + Ai-2, para i ímpar
// 2. Ai = Ai-1 - Ai-2, para i par
// Criar um algoritmo que imprima os N primeiros termos da série de
// FETUCCINE, sabendo-se que para existir esta série serão necessários pelo menos três
// termos.

#include <stdio.h>

int main() {
  int limite, n = 1 , numAnterior, numAtual, numAntes;

  printf("Informe os dois termos: \n");
  scanf("%d%d", &numAntes, &numAnterior);
  
  printf("Informe o n: ");
  scanf("%d", &limite);

  while (n <= limite) {

    if (n % 2 == 0) {
      numAtual = numAnterior + numAntes;
      numAntes = numAnterior;
      numAnterior = numAtual;
    }
    else {
      numAtual = numAnterior - numAntes;
      numAntes = numAnterior;
      numAnterior = numAtual;
    }
    
    printf("\n%d", numAtual);
    n++;
  }
}