/*Escreva um algoritmo que calcule o aumento de um salário.
O algoritmo deve solicitar o valor do salário e a porcentagem
de aumento e exibir o valor do aumento e do novo salário
*/

    #include <stdio.h>

int main()
{
   int salarioInicial = 0, valorAumento = 0, novoSalario = 0;
   float decimalAumento = 0, porcentAumento = 0;
    
    printf("Qual seria o valor do salario ? \n");
    scanf("%i", &salarioInicial);
    printf("Agora digite a porcentagem em que seu salário ira aumentar: \n");
    scanf("%f", &porcentAumento);
    
    decimalAumento =  porcentAumento / 100;
    valorAumento = salarioInicial * decimalAumento; 
    novoSalario = salarioInicial + valorAumento;
    
     
    printf("Seu salário inicial teve um aumento de %i\n", valorAumento);
    printf("Seu novo salário seria no valor de %i \n", novoSalario);
    

    return 0;
}

