/*
Faça um algoritmo que leia o peso e a altura de um grupo
 de 5 pessoas e informe o peso médio e a altura média desse grupo.
*/

#include <stdio.h>

int main()
{
   float peso = 0, altura = 0, pesoMédio = 0, alturaMédia = 0; 
   int quantPessoas;
   
    printf("Qual a quantidade de pessoas ? \n");
    scanf("%i", &quantPessoas);

   for(int i = 1; i <= quantPessoas; i++) {
       printf("Qual o peso da pessoa %i ? \n", i);
       scanf("%f", &peso);
       
       printf("Qual a altura ? \n");
       scanf("%f", &altura);
       
       pesoMédio = peso / i;
       alturaMédia = altura / i;
       
   }
       printf("O peso médio seria de %.2fkg \n", pesoMédio);
       printf("A altura média seria de %.2f centímetros", alturaMédia);
       
      

    return 0;
}
