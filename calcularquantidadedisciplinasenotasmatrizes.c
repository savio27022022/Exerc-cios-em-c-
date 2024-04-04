include <stdio.h>

int main() {
  // Declaração da matriz para armazenar os nomes das disciplinas
  char disciplinas[3][50] = {
    "Lógica de programação";
  };

  // Declaração da matriz para armazenar as notas
  float notas[3][2];

  // Laço para receber as notas de cada disciplina
  for (int i = 0; i < 3; i++) {
    printf("Nome da disciplina: %s\n", disciplinas[i]);

    // Laço para receber as duas notas de cada disciplina
    for (int j = 0; j < 2; j++) {
      printf("%iº nota: ", j + 1);
      scanf("%f", &notas[i][j]);
    }

    // Cálculo da média da disciplina
    float media = (notas[i][0] + notas[i][1]) / 2;

    // Exibição da média da disciplina
    printf("Média: %.1f\n\n", media);
  }

  return 0;
}
