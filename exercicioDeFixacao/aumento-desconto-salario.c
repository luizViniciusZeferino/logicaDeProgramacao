/*Escreva um algoritmo para ler o salário de um funcionário
 e aumentá-lo em 20%. Após o aumento, desconte 10% de impostos. 
 Imprima o salário inicial, o salário com o aumento e o salário 
 líquido (com desconto).
*/

    #include <stdio.h>

int main()
{
    int salarioInicial = 0, salarioAumento = 0, salarioDesconto; 
    
    printf("Escreva o seu salário a seguir: \n");
    scanf("%i", &salarioInicial);
    
    salarioAumento = salarioInicial * 0.20 + salarioInicial;
    salarioDesconto = salarioAumento * 0.1 + salarioInicial;
    
    printf("Seu salário inicial seria de %i\n", salarioInicial);
    printf("Seu salário com o aumento seria de %i \n", salarioAumento);
    printf("Seu salário com os descontos de impostos seria de %i \n", salarioDesconto);
    
    
    return 0;
}