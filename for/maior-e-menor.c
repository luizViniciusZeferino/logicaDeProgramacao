/*
Faça um algoritmo que leia 10 números inteiros e que
apresente ao final o maior e o menor de todos.
*/

#include <stdio.h>


int main() {
    int numero, maiorNumero, menorNumero;

    
    printf("Digite o 1º número inteiro: ");
    scanf("%d", &numero);
    maiorNumero = menorNumero = numero; // O primeiro numero digitado vai ser igual ao maior numero e ao menor numero. 

    
    for (int i = 2; i <= 5; i++) { // index inicializado com 2 pois o primeiro numero foi a cima 
        printf("Digite o %dº número inteiro: ", i);
        scanf("%d", &numero);

        
        if (numero > maiorNumero) { // vendo se o próximo numero do loop é maior que o último número
            maiorNumero = numero;
        }
        if (numero < menorNumero) { // vendo se o próximo numero do loop é menor que o último número
            menorNumero = numero;
        }
    }

    
    printf("O maior número digitado é: %d\n", maiorNumero);
    printf("O menor número digitado é: %d\n", menorNumero);
    
        return 0;
}
