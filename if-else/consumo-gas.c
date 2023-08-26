/*Faça um algoritmo que leia o consumo de gás de um condomínio
 e calcule o valor a pagar a partir da fórmula a seguir (c 
 corresponde ao consumo).*/

    #include <stdio.h>

int main()
{
    float consumoGas = 0; 
    
    printf("Qual o valor total do consumo de gás ? \n");
    scanf("%f", &consumoGas); 
    
    if(consumoGas <= 10){
    float  totalGas = 15 * consumoGas;
    printf("De acordo com os dados digitados, será pago um total de %.2f", totalGas);
    } else if(consumoGas > 10){
    float totalGas = 15 * consumoGas + 20;
    printf("De acordo com os dados digitados, será pago um total de %.2f", totalGas);
    }
    
    return 0;
}
