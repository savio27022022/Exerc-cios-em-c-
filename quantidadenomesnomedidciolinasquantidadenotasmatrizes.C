#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define QUANTIDADE_NOME_DISCIPLINA 3
#define QUANTIDADE_NOTAs 2
int main(){
setlocale(LC_ALL,"");
char disciplinas[QUANTIDADE_NOME_DISCIPLINA];//Vetor para armazenar os nomes das disciplinas.
float notas[QUANTIDADE_NOTAS];//Matriz para notas por disciplinas.
float soma=0;
float media[QUANTIDADE_NOTAS];
int i,j;

for(i=0;i<QUANTIDADE_NOME_DISCIPLINA;i++){
printf("Digite o nome da %iª disciplina:",i+1);
scanf("%s",&disciplinas);
}

    for(j=0;j<QUANTIDADE_NOTAS;j++){
    printf("Digite a %iª nota:",j+1);
    scanf("%f",&notas[i][j]);
    soma+=notas[i][j];
}
media[i]=soma/QUANTIDADE_NOTAS;
soma=0;


printf("\n");
}

printf("\n===Exibindo resultados\n===");
for(i=0;i<QUANTIDADE_NOME_DISCIPLINA;i++){
    for(j=0;<QUANTIDADE_NOTAS;j++){
printf("%iª nota:%1.f\n",j+1,notas[i][j]);
printf("Média do %i º aluno:%%!.f\n",i+1,media[i]);
    }
}

printf("\n");
    +return 0;
}
