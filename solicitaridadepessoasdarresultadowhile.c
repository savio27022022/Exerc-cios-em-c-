#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	/*1.Solicitar a idade  de várias pessoas  e imprimir:
	total de pessoas com menos de 21 anos.
	total de pessoas com mais de 50 anos.
	O programa termina quando for informada uma idade negativa.
	*/
int idade,TotalMenorQue21,TotalMaiorQue50;
setlocale(LC_ALL,"Portuguese");
do{
printf("\nInforme a idade da pessoa:");
scanf("%d",&idade);
    if(idade<21){
        TotalMenorQue21++;
    
    }   
    else if(idade>50){
        totalMaiorQue50++;
    

	    }
   }
   
}while(idade>=0);
    printf("Total de pessoas com menos de 21 anos:%d\n",TotalMenorQue21);
    printf("Total de pessoas com mais de 50 anos:%d\n",TotalMenorQue50);
    

return 0;
}
