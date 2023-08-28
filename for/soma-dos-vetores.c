/*
Construa um algoritmo que leia dois vetores de inteiros
A e B, cada um com  5 elementos. Em seguida, some o vetor
A e B (A+B), armazene o resultado no vetor C e exiba o vetor C.O
*/

#include <stdio.h>

int main()
{
    int tamanho = 0, menorValor, maiorValor;
    
    printf("Digite o tamanho do vetor:\n");
    scanf("%i", &tamanho);
    
    int vetor[tamanho];
    
    printf("Digite os elementos do vetor:\n");
    for(int i = 0; i < tamanho; i++) {
    scanf("%i", &vetor[i]);
    }
    
    menorValor = vetor[0];
    maiorValor = vetor[0];
    
    for(int i = 0; i < tamanho; i++) {
        if(vetor[i] < menorValor) {
            menorValor = vetor[i]; 
        }
        if(vetor[i] > maiorValor ) {
            maiorValor = vetor[i];
        }
         
    }
 
    printf("O menor valor do vetor é: %i \n", menorValor);
    printf("O maior valor do vetor é: %i \n", maiorValor); 
    


    return 0;
}
