// 55. Dizemos que dois números são amigos se cada um deles é igual a soma dos divisores
// próprios do outro. Os divisores próprios de um número positivo N são todos os divisores
// inteiros positivos de N exceto o próprio N. Um exemplo de números amigos são 284 e
// 220, pois os divisores próprios de 220 são 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 e 110.
// Efetuando a soma destes números obtemos o resultado 284 (1 + 2 + 4 + 5 + 10 + 11 + 20
// + 22 + 44 + 55 + 110 = 284). Os divisores próprios de 284 são 1, 2, 4, 71 e 142,
// efetuando a soma destes números obtemos o resultado 220 (1 + 2 + 4 + 71 + 142 = 220).
// Escreva um programa que dado dois inteiros, verifique se eles são amigos. (17296 e
// 18416 são amigos, por exemplo).

#include <stdio.h>

int main() {
  
  int num1, num2, n = 1, soma = 0;

  printf("Informe os dois inteiros:\n");
  scanf("%d%d", &num1, &num2);

  while (n < num1) {
    if (num1 % n == 0) {
      soma = soma + n;
    }
    n++;
  }
  
  if (soma == num2) {
    n = 1;
    soma = 0;

    while (n < num2) {
      if (num2 % n == 0) {
        soma = soma + n;
      }
      n++;
    }
  if (soma == num1) 
    printf("Os dois números são amigos");
  }
  else 
    printf("Os dois números não são amigos");
}