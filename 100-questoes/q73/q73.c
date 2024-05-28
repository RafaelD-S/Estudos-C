// 73. Escreva um programa em C que leia um array de 20 inteiros, calcule e imprima: 
// a. A moda dos elementos no array (elemento mais freqüente).
// b. A mediana dos elementos no array (elemento central)
// c. A média

#include <stdio.h>
#define contagem 10

int main() {
  int lista[contagem], cont[contagem], moda, conta = 0;
  float media = 0, mediana = 0;
  int n, i, x;

  for (n = 0; n < contagem; n++) {
    printf("Informe um numero inteiro (%d/%d): ", n + 1, contagem);
    scanf("%d", &lista[n]);

    media = media + lista[n];
  }

  for (i = 0; i < contagem; i++) {
    for (n = i + 1; n < contagem; n++) {
      if (lista[i] > lista[n]) {
        x = lista[n];
        lista[n] = lista[i];
        lista[i] = x;
      }
    }
  }

  for (n = 0; n < contagem; n++) {
    for (i = n + 1; i < contagem; i++) {
      if (lista[n] == lista[i]) {
        cont[n]++;
        if (cont[n] > conta) {
          conta = cont[n];
          moda = lista[n];
        }
      }
    }
  }

  if (contagem % 2 == 0)
    mediana = (lista[(contagem / 2) - 1] + (lista[contagem / 2])) / 2;
  else
    mediana = lista[contagem / 2];
  
  media = media / contagem;
  
  for (n = 0; n < contagem; n++) {
    printf("%d ", lista[n]);
  }
  
  printf("\nA média é: %.1f", media);
  printf("\nA mediana é: %.1f", mediana);
  printf("\nA moda é: %d", moda);
}