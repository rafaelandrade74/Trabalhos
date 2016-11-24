#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


/* Nomes
* Rafael Andrade - 2215100617
* Johnny Guimaraes - 2215112355
* Rafael Ferreira - 2215112127
*/



void gravar(int ch[6],int j,FILE *p_arq){
	
	int i;
	p_arq = fopen("Sorteio Mega.txt","a");
	fprintf(p_arq,"SORTEIO: [%.4i] = ",j);
	
		
	
	for (i=0; i <= 5;i++){
		 fprintf(p_arq,"%.2d ", ch[i]);
		 printf("%.2d ", ch[i]);
		}
		fprintf(p_arq,"\n");
		printf("\n");
		
		fclose(p_arq);
}
void ler(){
	FILE *p_arq;
	
	int ch[3001];
	p_arq = fopen("Sorteio Mega.txt","r");
	
	while (fgets(ch,100,p_arq)!=NULL){
			
		 	
	 		puts(ch);
	 		
	 		
	 	}
	 	fclose(p_arq);
}

int repete(int vet[6]){
	int i,j,aux;
	
	for (i=0;i<6;i++)
{
for (j=i+1;j<=5;j++) 
{ 
do{
if (vet[j] == vet[i])
{ 
vet[j]=rand()%60; 
}
} while(vet[j] == vet[i]);
}
}

}

void ordenar(int num[6]){
	int i, j, aux;
//primeiro laço 
for (i=0;i<6;i++)
{//segundo laço
for (j=i+1;j<=5;j++)
{ //verifica se o vetor na posição J é menor que o vetor na posicao I;
if (num[j] < num[i])
{ // caso seja menor, realiza a troca de numeros para organizar
aux=num[i];
num[i]=num[j];
num[j]=aux;
}
}
}
//Imprimir o Vetor 
//printf(" (%.2i - %.2i - %.2i - %.2i - %.2i - %.2i)",num[0],num[1],num[2],num[3],num[4],num[5]);
//printf("\n");
}

void inicio(){
	int i, j, aux;
int ji,in,jogo,vet[6000],tamanho = 50,l,c;

int numero[30000][6],matriz[3000][6],x,y;
FILE *p_arq;
 	
 	p_arq = fopen("Sorteio Mega.txt","a");
 	
 	if (p_arq == NULL)
 	{
 		printf("Erro na abertura do arquivo.");
 		getch();
 		return 0;
	 }

srand(time(0));



for(i=1;i<3000;i++){
		for(j=0; j<6; j++) { 
		numero[i][j]=rand()%60 + 1; 
		
		
		vet[j]=numero[i][j];
		
		
	}
	repete(vet);
	
numero[i][0]=vet[0];
numero[i][1]=vet[1];
numero[i][2]=vet[2];
numero[i][3]=vet[3];
numero[i][4]=vet[4];
numero[i][5]=vet[5];

		matriz[i][j]=numero[i][j];





ordenar(vet);
gravar(vet,i,p_arq);
	

}
}


int main() {


int valor;

	do
	{
	
	printf("======Menu=======\n");
	printf("Sair do Menu = 0\n");
	printf("Gerar Sorteio = 1\n");
	printf("Ver Sorteios = 2\n");
	
	scanf("%d",&valor);
	
	switch(valor){
		case 1:
			printf("\t|------------------------------------------------------------|\n");
		printf("\t|------------------------MEGA SENA---------------------------|\n");
		printf("\t|------------------------------------------------------------|\n");
		
		
		printf("\tSORTEIO DOS NUMEROS!!!\n");
			inicio();
			break;
		case 2:
			ler();
			break;
		case 0:
			return 0;
			break;
		default:
                printf("Digite uma opcao valida\n");
	}
	} while(valor);

system("pause");
return 0;
}
