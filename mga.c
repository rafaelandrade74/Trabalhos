#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
printf(" (%.2i - %.2i - %.2i - %.2i - %.2i - %.2i)",num[0],num[1],num[2],num[3],num[4],num[5]);
printf("\n");
}
/*int nrepetidos(int Matriz[60][6]){
	int x,y,j,repetido[60][0];
	
	for(x=0;x<60;x++){
		for(y=0;y<6;y++)
		if(Matriz[x][y] == x){
			j++;
			repetido[x][y]=j;
			printf("%i %i\n",x,repetido[x][j]);
		}
	}
	
	
	
}*/

int main() {
int i, j, aux;
int ji,in,jogo,vet[50],tamanho = 50,l,c;

int numero[30][6],matriz[60][6],x,y;

srand(time(0));

printf("\t|------------------------------------------------------------|\n");
printf("\t|------------------------MEGA SENA---------------------------|\n");
printf("\t|------------------------------------------------------------|\n");


printf("\tSORTEIO DOS NUMEROS!!!\n");
printf("\n");printf("\n");

for(i=1;i<31;i++){
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

printf("SORTEIO: [%.4i] = %.2i - %.2i - %.2i - %.2i - %.2i - %.2i",i,numero[i][0],numero[i][1],numero[i][2],numero[i][3],numero[i][4],numero[i][5]);

ordenar(vet);

printf("\n");
}

		


//nrepetidos(matriz);


system("pause");
return 0;
}
