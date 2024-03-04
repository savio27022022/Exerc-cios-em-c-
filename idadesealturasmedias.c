#include <stdio.h>

int main() {
    int idades[5];
    float alturas[5];
    int i;
    int maior_idade, menor_idade;
    float maior_altura, menor_altura;
    float soma_idades = 0, soma_alturas = 0;

    // Leitura das idades e alturas
    for (i = 0; i < 5; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
        printf("Digite a altura da pessoa %d (em metros): ", i + 1);
        scanf("%f", &alturas[i]);

        soma_idades += idades[i];
        soma_alturas += alturas[i];
    }

    // Inicialização das variáveis para comparação
    maior_idade = menor_idade = idades[0];
    maior_altura = menor_altura = alturas[0];

    // Encontrando a maior e menor idade, e a menor altura
    for (i = 0; i < 5; i++) {
        if (idades[i] > maior_idade) maior_idade = idades[i];
        if (idades[i] < menor_idade) menor_idade = idades[i];
        if (alturas[i] > maior_altura) maior_altura = alturas[i];
        if (alturas[i] < menor_altura) menor_altura = alturas[i];
    }

    // Calculando as médias
    float media_idades = soma_idades / 5;
    float media_alturas = soma_alturas / 5;

    // Exibindo resultados
    printf("\nMaior idade: %d anos\n", maior_idade);
    printf("Menor idade: %d anos\n", menor_idade);
    printf("Média das idades: %.2f anos\n", media_idades);
    printf("Maior altura: %.2f m\n", maior_altura);
    printf("Menor altura: %.2f m\n", menor_altura);
    printf("Média das alturas: %.2f m\n", media_alturas);

    return 0;
}


















