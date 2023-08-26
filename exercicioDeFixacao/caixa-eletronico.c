/*Um caixa eletrônico opera somente com cédulas de 100, 50,
 20, 10  e 5 reais. Faça um algoritmo que leia um valor a 
 sacar e calcule e mostre o menor número de cédulas de cada
 tipo no qual o valor pode ser decomposto. Considere que o 
 sistema admite somente valores múltiplos de 5.
*/

    #include <stdio.h>

int main()
{
    int notas100 = 0, notas50 = 0, notas20 = 0, notas10 = 10, notas5 = 0, valorSaque = 0, res = 0; 
    
    printf("Qual valor você deseja sacar ?\n");
    scanf("%i", &valorSaque);

    notas100 = valorSaque / 100;
    notas50 = valorSaque / 50;
    notas20 = valorSaque / 20;
    notas10 = valorSaque / 10;
    notas5 = valorSaque / 5;
    
    printf("Quantidade de notas de R$ 100,00: %i \n", notas100);
    printf("Quantidade de notas de R$ 50,00: %i \n", notas50);
    printf("Quantidade de notas de R$ 20,00: %i \n", notas20);
    printf("Quantidade de notas de R$ 10,00: %i \n", notas10);
    printf("Quantidade de notas de R$ 5,00: %i \n", notas5);
    

    return 0;
}
