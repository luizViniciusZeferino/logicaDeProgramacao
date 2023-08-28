/*
Faça um algoritmo que imprima os N primeiros números
 da sequência de Fibonacci. Essa sequência começa com
  1 e 1, e cada número seguinte é a soma dos dois anteriores.
1, 1, 2, 3, 5, 8, 13, 21,...
*/

#include <stdio.h>

int main()
{
    int vetor[10];
    vetor[0] = 1, vetor[1] = 1;
    
    printf("%i \n", vetor[0]);
    printf("%i \n", vetor[1]);
    
    for(int i = 2; i < 10; i++){
      
      vetor[i] = vetor[i - 1] + vetor[i - 2];
      printf("%i \n", vetor[i]);
        
    };
    
    return 0;
}
