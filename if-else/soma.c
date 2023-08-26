/*Faça um algoritmo que leia três valores inteiros A, B, C 
e imprima na tela a soma de A + B, se esta for maior do que C.*/

    #include <stdio.h>

int main()
{
    int numeroA = 0, numeroB = 0, numeroC = 0; 
    
    printf("Digite três números inteiros:\n");
    scanf("%i", &numeroA); 
    scanf("%i", &numeroB); 
    scanf("%i", &numeroC); 
    
    if(numeroA + numeroB > numeroC){
        int somaAB = numeroA + numeroB; 
        printf("a soma de %i + %i é igual a %i", numeroA, numeroB, somaAB);
    }else{
        printf("Tente Novamente!");
    }
    
    return 0;
}
