/*Escreva um algoritmo que leia a velocidade, em km/h, de um carro.
Caso seja maior do que 60 km/h, exiba uma mensagem dizendo “Multado”
e o valor da multa. O valor da multa corresponde a R$ 10,00 por km/h
acima de 60 km/h.*/

    #include <stdio.h>

int main()
{
    float veloCarro = 0;
    
    printf("Qual a velocidade do carro ? \n");
    scanf("%f", &veloCarro);
    
    if(veloCarro > 60) {
        float acimaVelocidade = veloCarro - 60; 
        float valorMulta = acimaVelocidade * 10; 
        printf("Você está MULTADO no valor de R$%.2f reais", valorMulta);
    }else{
        printf("Sua velocidade está na média permitida!!! ");
    }
}