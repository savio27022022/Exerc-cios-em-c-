#include<stdio.h>
int main(){
//declarando as variáveis.
int idade;
float peso;
char sexo;
char nome;
//Pedindo ao usuário os dados de idade,peso,sexo e nome.
printf("\nDigite a idade da pessoa:");
scanf("%d",&idade);

printf("\nDigite o peso da pessoa:");
scanf("%f",&peso);

printf("\nDigite o sexo da pessoa:(M/F:");
scanf("%c",&sexo);

printf("\nDigite o nome da pessoa:");
scanf("%c",nome);


//Exibindo resultados.
printf("\nIdade:%i",idade);
printf("\nPeso:%f",peso);
printf("\nSexo:%c",sexo);
printf("\nNome:%c",nome);
    return 0;
}




































