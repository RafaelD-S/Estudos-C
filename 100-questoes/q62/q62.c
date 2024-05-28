// 62. Faça um programa em C que leia um array de 10 posições e conte quantos números pares
// são elementos do array. Imprima esta quantidade

#include <stdio.h>
int main ()
{
  int lista[10], n = 0, pares[10], i = 0;

  do {
    printf("Informe 10 numeros (%d / 10): ", n + 1);
    scanf("%d", &lista[n]);

    if (lista[n] % 2 == 0) {
      pares[i] = lista[n];
      i++;
    }
    n++;
    
  } while (n < 10);

  printf("\n");
  
  for (n = 0; n < i; n++)
    printf(" %d", pares[n]);
}