/*As maçã custam R$ 0,30 cada	 se	 forem	 compradas	menos	 do
que	 uma	 dúzia,	 e	 R$	 0,25	 se	 forem	 compradas	 pelo	
menos	 doze.	 Escreva	 um	 programa	 que	 leia	 o	
número	 de	 maçãs	 compradas,	 calcule	 e	 escreva	 o	 
valor   total	da	compra.*/

#include <stdio.h>

int main()
{
    int qntMaca = 0;  
    float valorMaca = 0, totalCompra = 0;
    
    printf("Qual a quantidade de maçãs compradas? \n");
    scanf("%i", &qntMaca);
    
    if(qntMaca >= 12) {
        valorMaca = 0.25;
    }else { 
        valorMaca = 0.30;
    }
    
    totalCompra = valorMaca * qntMaca;
    
    printf("O total da compra foi de %.2f", totalCompra);
    
}
