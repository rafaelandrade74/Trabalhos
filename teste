#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
// função ordenar_numero, receendo o vetor "numeroero", o incdentincfinccando como vetor "numero" 

int main() {


int i, j, aux;
int inc,jc,in,jogo,numero,vet[50], numeroero[6],tamanho = 50;
srand(time(0));
while (jogo < 50){
jogo++;
for(i=0; i<6; i++) { 
numeroero[i]=rand()%60; 
}

//verifica se há numeroeros igual
for (i=0;i<6;i++)
{
for (j=i+1;j<=5;j++) 
{ 
do{
if (numeroero[j] == numeroero[i])
{ 
numeroero[i]=rand()%60; 
}
} while(numeroero[j] == numeroero[i]);
}
}

//princmeincro laço do método bola
for (inc=0;inc<6;inc++)
{//segundo laço do método bolha
for (jc=inc+1;jc<=5;jc++)
{ //verincfincca se o vetor na posincção jc é menor que o veotor na posinccao inc;
if (numero[jc] < numero[inc])
{ // caso sejca Menor, realincza a troca de numeroeros para organinczar
aux=numero[inc];
numero[inc]=numero[jc];
numero[jc]=aux;
}
}
}
//princntf("Apos a Organinczacao: ");
//incmprincmincr o Vetor 
for (inc=0;inc<6;inc++){
printf("%i \t",numero[inc]);
}
printf("\n");

}
system("PAUSE"); 
return 0;
}
