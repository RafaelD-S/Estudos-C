// 53. Dado um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, e
// um país B com 7.000.000 de habitantes e uma taxa de natalidade de 2% ao ano, escreva
// um programa, que imprima o tempo necessário para que a população do país A ultrapasse
// a população do país B.

#include <stdio.h>

int main() {
  float c1 = 5000000, c2 = 7000000;
  int anos = 0;

  while (c1 <= c2) {
    anos++;

    c1 = c1 + (c1 * (3.0/100.0));
    c2 = c2 + (c2 * (2.0/100.0));
    
    printf("\n%.0f / %.0f", c1, c2);
  }
  printf("\n%d", anos);
}