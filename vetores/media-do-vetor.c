/*
Faça um algoritmo que calcule a média dos valores do vetor
int A[9]={9, 8, 6, 7, 5, 9, 6, 4, 8};
e mostre quantos valores estão acima da média.
*/

#include <stdio.h>

int main()
{
  int vetor[9]={9, 8, 6, 7, 5, 9, 6, 4, 5}, soma = 0, media = 0;
    
     
    for(int i = 0; i <= 9; i++) {
        soma += vetor[i]; // isso é igual a soma = soma + posição do vetor assim soma todos numeros da posição do vetor 
    }
        media = soma / 9; // pega o resultado da soma dos numeros e divide pela quantidade de índices 
        
    for(int i = 0; i <= 9; i++)  {
        if(vetor[i] > media){
            printf("%i \n", vetor[i]); // verificando se a posição i do vetor é maior que a média. 
        } 
    }
    return 0;
    }
