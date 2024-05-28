// 68. Escreva um programa que leia o índice pluviométrico de cada dia do mês de junho e
// informe o dia que mais choveu, o dia que menos choveu e as médias pluviométricas de
// cada uma das duas quinzenas

#include <stdio.h>

int main() {
  int dias[30], n, maior, maiorPos, menor, menorPos, soma1 = 0, soma2 = 0;

  for (n = 0; n < 30; n++) {
    printf("Infome o índice pluviométrico do dia %d: ", n + 1);
    scanf("%d", &dias[n]);

    if (n == 0) {
      maior = dias[0];
      menor = dias[0];
      maiorPos = n + 1;
      menorPos = n + 1;
    }
    
    if (dias[n] > maior) {
      maior = dias[n];
      maiorPos = n + 1;
    }
    else if (dias[n] < menor) {
      menor = dias[n];
      menorPos = n + 1;
    }

    if (n < 15) 
      soma1 = soma1 + dias[n];
    else 
      soma2 = soma2 + dias[n];
  }

  printf("\nO dia com maior indice foi: %d, com o indice de: %d", maiorPos, maior);
  printf("\nO dia com menor indice foi: %d, com o indice de: %d", menorPos, menor);
  printf("\nA media da primeira quinzena foi: %d, e da segunda: %d", soma1 / 15, soma2 / 15);
}