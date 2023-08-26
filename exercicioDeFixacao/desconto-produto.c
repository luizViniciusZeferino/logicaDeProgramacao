/*Escreva um algoritmo que calcule o desconto de um produto. 
O algoritmo deve solicitar o valor do produto e a porcentagem 
de desconto e exibir o valor do desconto e do novo valor do produto.
*/

    #include <stdio.h>

int main()
{
    float valorProduto = 0, porcentDesconto = 0, valorDesconto = 0, totalDescontado = 0, valorProd2 = 0; 
    
    printf("Qual o preço do produto ?\n");
    scanf("%f", &valorProduto);
    
    printf("Qual a porcentagem do desconto ?\n");
    scanf("%f", &porcentDesconto);
    
    valorDesconto = porcentDesconto / 100; 
    totalDescontado = valorProduto * valorDesconto; 
    valorProd2 = valorProduto - totalDescontado;  
    
    printf("O valor descontado do produto seria de: %.2f \n", totalDescontado);
    
    printf("O valor atualizado do produto seria de: %.2f \n", valorProd2);
    
    return 0;
}
