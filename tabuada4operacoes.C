#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void cabecalho(){
printf("\n==Tabuada das 4 operações===\n.");
system("cls||clear");
fflush(stdin);

int main() {
setlocale(LC_ALL,"");

  int numero, i;
  char operacao;

  // Leitura do número e da operação
cabecalho();
  printf("Digite um número: ");
  scanf("%d", &numero);
 cabecalho();
  printf("Digite a operação (+, -, *, /): ");
  scanf(" %c", &operacao);

  // Tabuada de acordo com a operação escolhida
  switch (operacao) {
    case '+':
     cabecalho();
      printf("Tabuada da soma de %d:\n", numero);
      for (i = 0; i <= 10; i++) {
        printf("%d + %d = %d\n", numero, i, numero + i);
      }
      break;
    case '-':
      cabecalho();
      printf("Tabuada da subtração de %d:\n", numero);
      for (i = 0; i <= 10; i++) {
       cavecalho();
        printf("%d - %d = %d\n", numero, i, numero - i);
      }
      break;
    case '*':
     cabecalho();
      printf("Tabuada da multiplicação de %d:\n", numero);
      for (i = 0; i <= 10; i++) {
        printf("%d * %d = %d\n", numero, i, numero * i);
      }
      break;
    case '/':
      cabecalho();
      printf("Tabuada da divisão de %d:\n", numero);
      for (i = 1; i <= 10; i++) {
        if (numero % i == 0) {
          printf("%d / %d = %d\n", numero, i, numero / i);
        }
      }
      break;
    default:
      cabecalho();
      printf("Operação inválida!\n");
  }

  return 0;
}
