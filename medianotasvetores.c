#include <stdio.h>

int main() {
  // Declarando um vetor de inteiros para armazenar as notas
  int notas[5];

  // Pedindo as notas ao aluno
  for (int i = 0; i < 5; i++) {
    printf("Digite a nota %d: ", i + 1);
    scanf("%d", &notas[i]);
  }

  // Calculando a média das notas
  int soma = 0;
  for (int i = 0; i < 5; i++) {
    soma += notas[i];
  }
  float media = (float) soma / 5;

  // Imprimindo a média
  printf("A média das notas é: %.1f\n", media);

  return 0;
}





























