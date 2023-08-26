/*
Construa um algoritmo que leia 10 números e depois exiba-os 
na ordem inversa de que foram lidos.
*/

#include <stdio.h>   

int main()
{
  int numeros[5]; 

    printf("Digite 5 números: \n");   // lendo os números digitados do vetor 
    for(int i = 0; i < 5; i++){
      scanf("%d", &numeros[i]);  
    }; 
  
  
  printf("Os números da forma inversa ficam assim: \n");
  for(int i = 4; i >= 0; i--) {
      printf("%i", numeros[i]); // imprimindo os números de forma inversa 
  }

    return 0;
}
