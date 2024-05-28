#include <stdio.h>

int main() {
  int lista[15], i, x, n, u;

  // pedir os números
  for (u = 0; u < 15; u++) {
    printf("Informe um número inteiro (%d/15): ", u + 1);
    scanf("%d", &lista[u]);
  }

  // Bubble sort
  for (i = 0; i < 15; i++) {
    for (n = i + 1; n < 15; n++) {
      if (lista[i] > lista[n]) {
        x = lista[n];
        lista[n] = lista[i];
        lista[i] = x;
      }
    }
  }

  // Mostrar os números
  for (u = 0; u < 15; u++)
    printf("%d ", lista[u]);
}