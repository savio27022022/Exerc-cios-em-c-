include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"portuguese");
//Declaração das variáveis.
char primeiroNumero,segundoNumero;
int soma,subtracao,multiplicacao,divisao;
//Peça os valores ao usuário.
printf("\nDigite o primeiro numero:");
scanf("%c",&primeiroNumero);

printf("\nDigite o segundo numero:");
scanf("%c",&segundoNumero);

//Calculando as 4 operações  com o primeiro e segundo números.
soma=primeiroNumero+segundoNumero;
subtracao=primeiroNumero-segundoNumero;
multiplicacao=primeiroNumero*segundoNumero;
divisao=primeiroNumero/segundoNumero;
//Exibindo Resultado.
printf("\n==Exibindo Resultados:");
printf("\nSoma:",soma);
printf("\nSubtração":subtracao);
printf("\nMultiplicação:",multiplicacao);
printf("\nDivisão:",divisao);

    return 0;
}

















