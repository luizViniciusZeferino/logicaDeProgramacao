/*Faça um algoritmo que leia um número e verifique se esse 
número pertence ao vetor int B[8] = {12, 6, 8, 10, 15, 20, 17, 9};
. Se o número lido pertencer ao vetor, imprima o número lido e a sua 
posição, senão imprima a mensagem"X não encontrado". (X corresponde ao 
número lido)
*/

    #include <stdio.h>

int main()
{
  
    int numero = 0, b[8] = {12, 6, 8, 10, 15, 20, 17, 9};
    
    int totalarray = sizeof(b) / sizeof(b[0]); // sizeof(b) trás o tamanho em bytes que a array ocupa(32) e sizeof(b[0]) pega o total que ocupa o indice 0(4)
    
    printf("Digite um número:");
    scanf("%i", &numero);
    int encontrado = 0; // declarando variavel de identificação; 
    
    for (int i = 0; i < totalarray; i++) {
        if(numero == b[i]) {
            printf("O número %i possui ao vetor e está na posição %i", numero, i);
            encontrado = 1; // usando a variavel de identificação 
            
        }
    } 
     if(!encontrado) {
         printf("Número %i não encontrado", numero);
    };
   
    return 0;

}
