#include <stdio.h>
int main() {
    int operacao;
    double num1, num2, num3;

    printf("Selecione a operação desejada:\n");
    printf("1: Adição\n2: Subtração\n3: Multiplicação\n4: Divisão\n");
    printf("5: Porcentagem (num1%% de num2)\n6: Módulo (apenas inteiros)\n7: Regra de três (num1 é para num2 assim como num3 é para x)\n");
    printf("Operação: ");
    scanf("%d", &operacao);

    switch(operacao) {
        case 1: // Adição
            printf("Digite dois números: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Resultado: %.2lf\n", num1 + num2);
            break;
        case 2: // Subtração
            printf("Digite dois números: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Resultado: %.2lf\n", num1 - num2);
            break;
        case 3: // Multiplicação
            printf("Digite dois números: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Resultado: %.2lf\n", num1 * num2);
            break;
        case 4: // Divisão
            printf("Digite dois números (divisor não pode ser zero): ");
            scanf("%lf %lf", &num1, &num2);
            if(num2 == 0) printf("Erro: Divisão por zero!\n");
            else printf("Resultado: %.2lf\n", num1 / num2);
            break;
        case 5: // Porcentagem
            printf("Digite o número e a porcentagem: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Resultado: %.2lf\n", (num1 * num2) / 100);
            break;
        case 6: // Módulo
            {
                int n1, n2;
                printf("Digite dois números inteiros: ");
                scanf("%d %d", &n1, &n2);
                printf("Resultado: %d\n", n1 % n2);
            }
            break;
        case 7: // Regra de três
            printf("Digite três números (num1, num2, num3): ");
            scanf("%lf %lf %lf", &num1, &num2, &num3);
            printf("Resultado (num1 é para num2 assim como num3 é para x): %.2lf\n", (num2 * num3) / num1);
            break;
        default:
            printf("Operação inválida!\n");
    }

    return 0;

}
