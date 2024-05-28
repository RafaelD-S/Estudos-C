#include <stdio.h>

int main() {
  int lista[10], i, x, n, u;

  // pedir os números
  for (u = 0; u < 10; u++) {
    printf("Informe um numero inteiro (%d/10): ", u + 1);
    scanf("%d", &lista[u]);
  }

  // Bubble sort
  for (i = 0; i < 10; i++) {
    for (n = i + 1; n < 10; n++) {
      if (lista[i] > lista[n]) {
        x = lista[n];
        lista[n] = lista[i];
        lista[i] = x;
      }
    }
  }

  // Mostrar os números
  for (u = 0; u < 10; u++)
    printf("%d ", lista[u]);
}