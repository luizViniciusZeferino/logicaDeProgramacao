/*
Faça um algoritmo que leia um número e que exiba a tabuada de
multiplicação do mesmo.
*/

#include <stdio.h>

int main()
{
   int numero = 0, contador = 0; 
   
   printf("Digite um número a seguir: \n");
   scanf("%i", &numero);
   
   for(contador = 1; contador <= 10; contador++)
   {
       int res = numero * contador;
       printf("%i X %i = %i \n", numero, contador, res);
   }
   
    return 0;
}
