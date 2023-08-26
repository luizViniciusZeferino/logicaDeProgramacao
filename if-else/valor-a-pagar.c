/*A Empresa IFSC está com uma promoção de 15% de desconto 
nas compras acima de R$ 200,00. Faça um algoritmo que leia 
o valor de uma compra e calcule e mostre o valor a pagar.*/

    #include <stdio.h>

int main()
{

    float valorCompra = 0; 
    
    printf("Qual o valor da compra ? \n");
    scanf("%f", &valorCompra); 
    
    float valorFinal = valorCompra;
    
    if(valorCompra > 200){
        float desconto = valorCompra * 0.15; 
        valorFinal = valorCompra - desconto;
        printf("O desconto seria de R$%.2f reais e o valor a pagar seria de: R$%.2f reais", desconto, valorFinal);
    } else {
        printf("O valor a pagar é de R$%.2f reais", valorCompra);
    }

    return 0;
}
