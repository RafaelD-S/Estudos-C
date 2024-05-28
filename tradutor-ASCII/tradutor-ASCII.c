#include <stdio.h>

int main() {
  int n,i, x;
  char palavra [50] = {0};
  int binario [8], hexadecimal[2], octal[3];

  // Perguntar a palavra
  printf("Informe a sentença que deseja saber em ASCII (utilize _ para separar palavras)\n\n=> ");
  scanf("%s", &palavra);
  printf("\n");

  // Imprime a palavra escolhida
  for (n = 0; n < 50; n++) {
    printf("%c", palavra[n]);
  }

  // Informa as colunas
  printf("\n\n Char.\tDec.\tBin.\t\tOct.\tHex.\n");

  // Coloca uma linha
  for (n = 0; n < 42; n++)
    printf("%c", 61);
  printf("\n");
  
  // Logica para informar todos os items da palavra
  for (i = 0; i < 50; i++) {

    // Caso o espaço não esteja sendo utilizado
    if (palavra[i] == 0) 
      continue;

    // Substituir underline por espaços
    if (palavra[i] == 95)
      palavra[i] = 32;

    // Imprime o caracter e seu valor decimal
    printf("\n  %c\t\t%d\t\t", palavra[i] , palavra[i]);

    // Logica para criar e imprimir o valor binario do caracter
    x = palavra[i];
    for (n = 7; n >= 0; n--) {
      binario[n] = x % 2;
      x = x / 2;
    }
    for (n = 0; n < 8; n++) 
      printf("%d", binario[n]);
    printf("\t");

    // Logica para criar e imprimir o valor octal do caracter
    x = palavra[i];
    for (n = 2; n >= 0; n--) {
      octal[n] = x % 8;
      x = x / 8;
    }
    for (n = 0; n < 3; n++) 
      printf("%d", octal[n]);
    printf("\t\t");

    // Logica para criar e imprimir o valor hexadecimal do carater
    x = palavra[i];
    for (n = 1; n >= 0; n--) {
      hexadecimal[n] = x % 16;
      x = x / 16;
    }
    for (n = 0; n < 2; n++)
      switch (hexadecimal[n]) {
        case 15 : printf("F"); break;
        case 14 : printf("E"); break;
        case 13 : printf("D"); break;
        case 12 : printf("C"); break;
        case 11 : printf("B"); break;
        case 10 : printf("A"); break;
        default : printf("%d", hexadecimal[n]);
      }
    
    printf("   |\n");
  }

  // Detalhes finais
  printf("\n");
  for (n = 0; n < 42; n++)
    printf("%c", 61);
}