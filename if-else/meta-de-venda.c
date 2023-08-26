/*Faça um algoritmo que leia o valor de venda de um vendedor
 no mês. Se o valor de venda for maior do que R$ 30.000,00, 
 exiba a mensagem: "Parabéns, você superou a meta do mês!".*/

    #include <stdio.h>

 int main()
{
    float valorVenda; 
    
    printf("Qual seria o total de vendas no mês ?\n");
    scanf("%f", &valorVenda); 
    
    if(valorVenda >= 30.000){
        printf("Parabéns, você superou a meta do mês!");
    }else{
        printf("Continue, você está quase lá!");
    }
    
    return 0;
}
gi 