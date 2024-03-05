#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
// Função para exibir a tabuada de um número
void exibirTabuada(int numero) {
int i;

  // Laço para calcular e exibir a tabuada de 1 a 10
  for (i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", numero, i, numero * i);
  }
}

int main() {
  int numero;
  int i;
  // Leitura do número do usuário
  printf("Digite um número: ");
  scanf("%d", &numero);

  // Chamada da função para exibir a tabuada
  exibirTabuada(numero);

  return 0;
}
