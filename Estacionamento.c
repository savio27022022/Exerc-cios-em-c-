#include <stdio.h>

int main() {
    int entrada[5], saida[5], duracao[5];
    int i;

    // Coleta os dados de entrada e saída dos veículos
    for (i = 0; i < 5; i++) {
        printf("Veiculo %d - Hora de Entrada (0 a 23): ", i+1);
        scanf("%d", &entrada[i]);
        printf("Veiculo %d - Hora de Saida (0 a 23): ", i+1);
        scanf("%d", &saida[i]);

        // Calcula a duração da estadia. Considera a passagem da meia-noite.
        duracao[i] = saida[i] - entrada[i];
        if (duracao[i] < 0) {
            duracao[i] += 24; // Corrige duração negativa
        }
    }

    // Imprime o resumo
    printf("\nResumo da Estadia dos Veiculos:\n");
    for (i = 0; i < 5; i++) {
        printf("Veiculo %d - Hora de Entrada: %d, Hora de Saida: %d, Duracao: %d horas\n", 
               i+1, entrada[i], saida[i], duracao[i]);
    }

    return 0;
}





































