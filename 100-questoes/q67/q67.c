// 67. Faça um programa em C que leia dois vetores de 10 posições de inteiros e copie o maior
// valor dos dois em cada posição em um terceiro vetor. Em seguida, imprima este terceiro
// vetor

#include <stdio.h>

int main() {
  int a[10], b[10], maior[10], n;

  for (n = 0; n < 20; n++) {
    if (n < 10){
      printf("Informe numeros inteiros para primeira lista (%d/10): ", n + 1);
      scanf("%d", &a[n]);
      continue;
    }
    printf("Informe numeros inteiros para segunda lista (%d/10): ", n - 9);
    scanf("%d", &b[n - 10]);
  }
  for (n = 0; n < 10; n++) {
    if (a[n] > b[n])
      maior[n] = a[n];
    else
      maior[n] = b[n];
  }

  printf("\n");
  
  for (n = 0; n < 10; n++)
    printf("%d ", maior[n]);
}