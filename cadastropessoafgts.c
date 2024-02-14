#include <stdio.h>

// Definição da struct para Pessoa
typedef struct {
    char nome[100];
    char cpf[15];
    char dataNascimento[11]; // Formato DD/MM/AAAA
    float saldoFGTS;
} Pessoa;

void cadastrarPessoa(Pessoa *p) {
    printf("Digite o nome: ");
    scanf(" %[^\n]s", p->nome); // Lê uma string incluindo espaços

    printf("Digite o CPF: ");
    scanf("%s", p->cpf);

    printf("Digite a data de nascimento (DD/MM/AAAA): ");
    scanf("%s", p->dataNascimento);

    printf("Digite o saldo do FGTS: ");
    scanf("%f", &p->saldoFGTS);
}

void exibirCadastro(Pessoa p) {
    printf("\nCadastro:\n");
    printf("Nome: %s\n", p.nome);
    printf("CPF: %s\n", p.cpf);
    printf("Data de Nascimento: %s\n", p.dataNascimento);
    printf("Saldo do FGTS: R$%.2f\n", p.saldoFGTS);
}

int main() {
    Pessoa pessoa;

    cadastrarPessoa(&pessoa);
    exibirCadastro(pessoa);

    return 0;
}






























