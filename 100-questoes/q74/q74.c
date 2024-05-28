// 74. Escreva um programa em C que armazene um vetor de até 30 inteiros. O programa deve 
// fornecer as seguintes operações:
// a. Inserir um elemento no final do vetor
// b. Inserir um elemento em uma dada posicao
// c. Remover um elemento de uma posição indicada
// d. Remover todos elementos iguais a um valor indicado
// e. Gerar um novo array sem duplicidades a partir deste array

#include <stdio.h>

int main() {
  int lista[30] = {0};
  int n = 1, i, resposta, posicao;

  while (n != 0) {
    printf("\n\nOla, voce possui um vetor de no maximo 30 digitos, aqui estao os numeros dele:\n\n");

    for (i = 0; i < 30; i++)
      printf("[ %d ] ", lista[i]);

    printf("\n\nO que voce deseja fazer com esse vetor:\n\n0 - Desligar\n1 - Inserir um elemento no final do vetor\n2 - Inserir um elemento em uma posicao especifica\n3 - Remover um elemento de uma posiçao especifica\n4 - Remover todos os elementos iguais a um valor indicado\n5 - Gerar um vetor novo sem nenhuma duplicacao a partir deste vetor\n\n=> ");
    scanf("%d", &n);

    if (n == 1) {
      printf("\nInforme o numero que deseja colocar no fim do vetor\n\n=> ");
      scanf("%d", &resposta);
      for (i = 29; i >= 0; i = i - 1) {
        if (lista[i] != 0) {
          lista[i + 1] = resposta;
          break;
        }
        else if (lista[0] == 0) {
          lista[0] = resposta;
          break;
        }
      }
    }

    if (n == 2) {

      printf("\nInforme a posicao que deseja inserir\n\n=> ");
      scanf("%d", &posicao);
      
      printf("\nInforme o numero que deseja inserir\n\n=> ");
      scanf("%d", &resposta);

      if (posicao >= 0 && posicao < 30) {
        lista[posicao] = resposta;
      }
      else 
        printf("\n\nPosicao Invalida\n\n");
    }

    if (n == 3) {
      printf("Informe a posicao que deseja remover o numero\n\n=> ");
      scanf("%d", &posicao);

      lista[posicao] = 0;
    }

    if (n == 4) {
      printf("Informe o valor que deseja remover da lista\n\n=> ");
      scanf("%d", &resposta);

      for (i = 0; i < 30; i++) {
        if (lista[i] == resposta)
          lista[i] = 0;
      }
    }

    if (n == 5) {
      for (i = 0; i < 30; i++) {
        for (int a = i + 1; a < 30; a++) {
          if (lista[a] == lista[i])
            lista[a] = 0;
        }
      }
    }
  }
}