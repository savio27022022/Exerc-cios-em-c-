#include<stdio.h>
#include<stdlib.h>
#include <locale.h>


void cabecalho(){
system("cls||clear");
printf("==soma de dois números reais==");
fflush(stdin);
}

float somar(int n1,n2){
return n1+n2;
}

int main(){
setlocale(LC_ALL," ");
//declaração de variáveis.
float num1,num2,soma;
}

//Leitura de dois números.
printf("Digite o primeiro número:");
scanf("%d",&num1);

printf("Digite o segundo número:");
scanf("%d",&num2);

soma=somar(num1,num2);

//Exibição do resultado.
printf("A soma dos dois números é:%d\n",soma);

return 0;
}
