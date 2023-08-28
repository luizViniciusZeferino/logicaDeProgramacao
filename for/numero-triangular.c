/*
Faça uma algoritmo que leia um número inteiro positivo e
verifique se ele é um número triangular. Um número é triangular
quando é resultado da multplicação de 3 números consecutvos. Ex: 24 = 2*3*4.
*/

#include <stdio.h>

int main() {
    int valor = 0, ehTrigangular = 0;
    
    printf("Digite um valor positivo:\n");
    scanf("%i", &valor);
    
    for (int i = 1; i <= valor; i++) {
        int numeroTriangular = i * (i + 1) * (i + 2);
        
        if (valor == numeroTriangular) {
            printf("%d é um número triângular.\n", valor);
            ehTrigangular = 1;
        }
    }
    if( ehTrigangular == 0){
        printf("%d não é um número triângular.\n", valor);
    }
    return 0;
}
