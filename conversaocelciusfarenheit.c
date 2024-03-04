#include <stdio.h>

int main() {
  // Definindo variáveis
  float celsius, fahrenheit;

  // Imprimindo cabeçalho da tabela
  printf("Celsius | Fahrenheit\n------- | --------\n");

  // Loop para converter e imprimir valores de 0 a 100 Celsius
  for (celsius = 0; celsius <= 100; celsius++) {
    // Convertendo Celsius para Fahrenheit
    fahrenheit = celsius * 1.8 + 32;

    // Imprimindo linha da tabela
    printf("%6.1f | %7.1f\n", celsius, fahrenheit);
  }

  return 0;
}










