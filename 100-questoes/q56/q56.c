// 56. Um número se diz perfeito se é igual à soma de seus divisores próprios. Divisores
// próprios de um número positivo N são todos os divisores inteiros positivos de N exceto o
// próprio N. Por exemplo, o número 6, seus divisores próprios são 1, 2 e 3, cuja soma é
// igual à 6 (1 + 2 + 3 = 6). Outro exemplo é o número 28, cujos divisores próprios são 1, 2,
// 4, 7 e 14, e a soma dos seus divisores próprios é 28 (1 + 2 + 4 + 7 + 14 = 28).

#include <stdio.h>

int main() {
  int num, soma = 0, n = 1;

  printf("Informe um número inteiro para saber se é perfeito: ");
  scanf("%d", &num);
  
  while (n < num) {
    if(num % n == 0) {
      soma = soma + n;
    }
    n++;
  }
  if (num == soma) 
    printf("\nEsse é um número perfeito");
  else 
    printf("\nEsse não é um número perfeito");
}