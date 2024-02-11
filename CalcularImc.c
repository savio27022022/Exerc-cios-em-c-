#include <stdio.h>

int main() {
    float peso, altura, imc;

    // Pedindo ao usuário para inserir peso e altura
    printf("Digite seu peso em quilogramas: ");
    scanf("%f", &peso);
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    // Calculando o IMC
    imc = peso / (altura * altura);

    // Exibindo o resultado
    printf("Seu IMC é: %.2f\n", imc);

    // Interpretando o valor do IMC
    if(imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if(imc >= 18.5 && imc <= 24.9) {
        printf("Peso normal\n");
    } else if(imc >= 25 && imc <= 29.9) {
        printf("Sobrepeso\n");
    } else if(imc >= 30) {
        printf("Obesidade\n");
    }

    return 0;
}




