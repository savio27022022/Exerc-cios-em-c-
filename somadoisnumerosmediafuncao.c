include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void cabecalho(){
system("cls||clear");
printf("\nFunções");
fflush(stdin);
}

int calcularMedia(float n1,float n2){
float media;
media=(n1+n2)/2;
return media;
}

int main(){
setlocale(LC_ALL,"");
float primeiroNumero,segundoNumero,media;
printf("\nDigite o primeiro número:");
scanf("%f",&primeiroNumero);

printf("\nDigite o segundo número:");
scanf("%f",&segundoNumero);

media=calcularMedia(primeiroNumero,segundoNumero);

printf("\nMédia:%1.f\n",media);
return 0;
}
