#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
  setlocale(LC_ALL,"");
  int n, soma = 0;

  // Leitura do valor de n
  printf("Digite um número inteiro positivo: ");
  scanf("%d", &n);

  // Laço para somar os números pares até n
  int i = 2;
  while (i <= n) {
    // Verificação se o número é par
    if (i % 2 == 0) {
      // Soma do número
      soma += i;
    }

    // Incrementação do contador
    i += 2;
  }

  // Exibição do resultado
  printf("A soma dos números pares até %d é: %d\n", n, soma);

  return 0;
}
