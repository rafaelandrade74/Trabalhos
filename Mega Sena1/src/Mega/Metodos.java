/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Mega;


import java.util.Random;

/**
 *
 * @author Rafael
 */
public class Metodos {
    Random rand;
    int i,randomNum;
    int j,in,jogo,vet,tamanho,l,c;
    int x,y;
    
    

   
    
    
    void ordenar(int num[]){
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
}        
 
   
    }
    

