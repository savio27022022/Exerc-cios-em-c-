#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
void cabecalho(){
system("cls||clear");
printf("Calcular as 4 Operações em C");
fflush(stdin);
}

void somar(int n1,int n2){
int soma;
int soma=n1+n2;
return soma;
}

void subtrair(int n1, int n2){
int subtracacao;
int subtracacao=n1-n2;
return subtracacao;
}

void multiplicar(int n1, int n2){
int multiplicacao;
int multiplicacao=n1*n2;
return multiplicacao;
}

void dividir(int n1,int n2){
int divisao;
int divisao=n1/n2;
return divisao;
}

int main(){
//declarando as variáveis.
int numero;
int soma;
int subtracacao;
int divisao;
int primeiroNumero,segundoNumero;



//Solicitar dados ao usuário.
printf("\nDigite o 1⁰ número:");
scanf("%i",&primeiroNumero);

printf("\nDigite o 2⁰ número:");
scanf("%i",&segundoNumero);

//Calculando as Operações.
soma=primeiroNumero+segundoNumero;
subtracao=primeiroNumero-segundoNumero;
multiplicacao=primeiroNumero*
segundoNumero
divisao=primeiroNumero/segundoNumero

//Exibindo os Resultados.
exibirsomar(int n1,int n2);
exibirsubtrair(int n1,int n2);
exibirmultiplicar(int n1,int n2);
exibirdividir(int n1,int n2);

return 0;
}








