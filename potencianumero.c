#include<locale.h>
#include <stdlib.h>
#include <stdio.h>

void cabecalho(){
printf("==potência de um número:");
system("cls||clear");
fflush(stdin);
}


int main() {
setlocale(LC_ALL,"portuguese");
  int base, expoente, resultado;

  // Leitura da base e do expoente
  printf("Digite a base: ");
  scanf("%d", &base);
  printf("Digite o expoente: ");
  scanf("%d", &expoente);

  // Inicialização da variável resultado
  resultado = 1;

  // Loop para calcular a potência
  for (int i = 0; i < expoente; i++) {
    resultado=resultado* base;
  }

  // Exibição do resultado
  printf("%d elevado a %d é igual a %d\n", base, expoente, resultado);

  return 0;
}


















