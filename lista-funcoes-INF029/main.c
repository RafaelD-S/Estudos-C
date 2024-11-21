#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1.
int soma(int valor1, int valor2) { return valor1 + valor2; }

int subtrair(int valor1, int valor2, int valor3) {
  return valor1 - valor2 - valor3;
}

// 2.
int fatorial(int valor) {
  int i, fat = 1;
  if (valor < 1)
    return 0;

  for (i = valor; i > 1; i--)
    fat = fat * i;

  return fat;
}

// 3. (Pode ser feito da mesma forma da 7.) 
int *ler3Numeros() {
  int *vetor = (int *)malloc(3 * sizeof(int));

  for (int i = 0; i < 3; i++) {
    printf("\nInforme o %dº número: ", i + 1);
    scanf(" %d", &vetor[i]);
  }

  return vetor;
}

// 4.
typedef struct nums {
  int num1;
  int num2;
  int num3;
  int num4;
} nums;

// 5.
nums ler4Numeros() {
  nums numeros;
  printf("\nInforme o 1º número: ");
  scanf(" %d", &numeros.num1);
  printf("\nInforme o 2º número: ");
  scanf(" %d", &numeros.num2);
  printf("\nInforme o 3º número: ");
  scanf(" %d", &numeros.num3);
  printf("\nInforme o 4º número: ");
  scanf(" %d", &numeros.num4);
  
  return numeros;
}

// 6. (pode ser feita da mesma forma da 7)
char *ler3Letras() { 
  char* vetor = (char*)malloc(3 * sizeof(char));

  for (int i = 0; i < 3; i++) {
    printf("\nInfome o %dº carácter: ", i + 1);
    scanf(" %c", &vetor[i]);
  }

  return vetor;
}

// 7.
void ler3Palavras(char vetorString[3][20]) {
  for (int i = 0; i < 3; i++) {
    printf("\nInfomre a %dª palavra: ", i + 1);
    fgets(vetorString[i], 20, stdin);
  }
}

// 9.
typedef struct data {
  int dia;
  int mes;
  int ano;
} dataDeNascimento;

int validarNome(char nome[20]) {
  return strlen(nome) < 20 && strlen(nome) > 1;
}

int validarSexo(char sexo) {
  return sexo == 'm' || sexo == 'M' || sexo == 'f' || sexo == 'F' || sexo == 'o' || sexo == 'O'; 
}

int validarCPF(long int cpf) {
  char numeroStr[12];
  snprintf(numeroStr, sizeof(numeroStr), "%.0ld", cpf);

  return strlen(numeroStr) == 11;
}

int validarData(dataDeNascimento dtNasc) {
  return dtNasc.dia > 0 && dtNasc.dia < 32 && dtNasc.mes > 0 && dtNasc.mes < 13 && dtNasc.ano > 0 && dtNasc.ano < 2024;
}

// 8.
typedef struct rg {
  char nome[20];
  dataDeNascimento dtNasc;
  long int cpf;
  char sexo;
  int validacao;
} registro;

registro cadastrarCliente() {
  registro cliente;

  printf("\nInforme o nome do cliente: ");
  fgets(cliente.nome, 20, stdin);

  printf("\nInforme a data de nascimento do cliente: ");
  scanf("%d %d %d", &cliente.dtNasc.dia, &cliente.dtNasc.mes, &cliente.dtNasc.ano);

  printf("\nInforme o CPF do cliente: ");
  scanf("%ld", &cliente.cpf);

  printf("\nInforme o sexo do cliente: ");
  scanf(" %c", &cliente.sexo);

if (!validarNome(cliente.nome)) {
  printf("\nErro de nome");    
  cliente.validacao = 0;
}
if (!validarSexo(cliente.sexo)) {
  printf("\nErro de sexo");    
  cliente.validacao = 0;
}
if (!validarCPF(cliente.cpf)) {
  printf("\nErro de CPF");    
  cliente.validacao = 0;
}
if (!validarData(cliente.dtNasc)) {
  printf("\nErro de data de nascimento");    
  cliente.validacao = 0;
}
else
  cliente.validacao = 1;
  
  return cliente;
}


int main(void) {
  printf("%d", soma(2, 4));
  
  printf("\n%d", subtrair(6, 2, 3));
  
  int fat = fatorial(4);
  if (fat)
    printf("\n%d", fat);
  else
    printf("\nErro");

  // Descomente o que quiser testar

  // int *vetor = ler3Numeros();
  // for (int i = 0; i < 3; i++) {
  //   printf("\n%d", vetor[i]);
  // }
  // free(vetor);

  // nums nums = ler4Numeros();
  // printf("\n%d", nums.num1);
  // printf("\n%d", nums.num2);
  // printf("\n%d", nums.num3);
  // printf("\n%d", nums.num4);
  // return 0;

  // char *vetorLetras = ler3Letras();
  // for (int i = 0; i < 3; i++) {
  //   printf("\n%c", vetor[i]);
  // }
  // free(vetorLetras);

  // char vetorString[3][20];
  // ler3Palavras(vetorString);
  // printf("\n");
  // puts(vetorString[0]);
  // puts(vetorString[1]);
  // puts(vetorString[2]);

  // registro cliente = cadastrarCliente();
  // if (cliente.validacao) {
  //   printf("\n");
  //   puts(cliente.nome);
  //   printf("%d/%d/%d", cliente.dtNasc.dia, cliente.dtNasc.mes, cliente.dtNasc.ano);
  //   printf("\n%.0ld", cliente.cpf);
  //   printf("\n%c", cliente.sexo);
  // }

}
