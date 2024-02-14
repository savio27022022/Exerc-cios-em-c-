#include <stdio.h>

int main() {
    float taxaCambio, dolares, reais;

    // Pede ao usuário a taxa de câmbio atual
    printf("Digite a taxa de câmbio atual de 1 dólar para real: ");
    scanf("%f", &taxaCambio);

    // Pede ao usuário o valor em dólares que deseja converter
    printf("Digite o valor em dólares que você deseja converter: ");
    scanf("%f", &dolares);

    // Realiza a conversão
    reais = dolares * taxaCambio;

    // Exibe o resultado
    printf("%.2f dólares a uma taxa de câmbio de %.2f é igual a %.2f reais.\n", dolares, taxaCambio, reais);

    return 0;
}




























