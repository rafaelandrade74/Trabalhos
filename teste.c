#include <stdio.h>
#include <stdlib.h>
#include <time.h> 


int main() {
int i, j, aux;
int ji,in,jogo,num[10],vet[50], numero[6],tamanho = 50;

printf("\t********************************************************\n");
printf("\t********************MEGA**SENA**************************\n");
printf("\t********************************************************\n");


printf("\tSORTEIO DOS NUMEROS!!!\n");
while (jogo < 50){
	jogo++;
for(i=0; i<6; i++) { 

numero[i]=rand()%60; 
}

//verifica se há numeros igual
for (i=0;i<6;i++)
{
for (j=i+1;j<=5;j++) 
{ 
do{
if (numero[j] == numero[i])
{ 
numero[i]=rand()%60; 
}
} while(numero[j] == numero[i]);
}
}

//printf("Apos a Organizacao: ");
//Imprimir o Vetor 
for (i=0;i<6;i++){
printf("%i \t",numero[i]);
}
printf("\n");
printf("\n");
printf("\n");
printf("\n");
}
}
