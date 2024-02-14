#include <stdio.h>

int main() {
    // Declaração de variáveis
    float valorTotal, taxaAdministrativa;
    const float taxaPercentual = 5.0; // Taxa administrativa de 5%
    
    // Solicita ao usuário o valor total
    printf("Digite o valor total: ");
    scanf("%f", &valorTotal);
    
    // Calcula a taxa administrativa
    taxaAdministrativa = (valorTotal * taxaPercentual) / 100;
    
    // Exibe o resultado
    printf("A taxa administrativa sobre o valor total de R$%.2f é de R$%.2f\n", valorTotal, taxaAdministrativa);
    
    return 0;
}


































