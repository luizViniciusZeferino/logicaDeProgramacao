/*
Construa um algoritmo que leia dois vetores de inteiros A e B, cada
um com 5 elementos. Em seguida, subtraia o vetor B de A (A-B), armazene
 o resultado no vetor C e exiba o vetor C.
*/

#include <stdio.h>

   int main()
{
    int a[5], b[5], c[5];
    
    printf("Digite 5 números para o vetor A: \n");
    for(int i = 0; i < 5; i++){
        scanf("%i", &a[i]);
        
    }
  
    printf("Digite 5 números para o vetor B: \n");
    for(int i = 0; i < 5; i++){
        scanf("%i", &b[i]);
    }
    
    
    for(int i = 0; i < 5; i++ ){
        c[i] = a[i] - b[i];
    }
    
    printf("Vetor C (resultado da subtração A-B):\n");
    for (int i = 0; i < 4; i++) {
        printf("%i ", c[i]);
    }
    
    
    return 0;
}
