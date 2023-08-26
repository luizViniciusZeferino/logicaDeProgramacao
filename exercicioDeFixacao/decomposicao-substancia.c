/*t indica o tempo em minutos e Q(t) indica a quantidade da
substância, em gramas, no instante t. Crie um algoritmo que 
leia um valor t e determine a massa dessa substância após t minutos.*/

    #include <stdio.h>

int main()
{
    float tempoT = 0, res = 0;
    
    printf("Defina o valor de t para a seguinte formula: Q(t) = 2048*2 - 0,5t\n");
    scanf("%f", &tempoT);
    
    res =(2048*2) - 0,5 * tempoT;
    printf("O total da massa é %.2f no tempo %0.2f", res, tempoT);
    
    return 0;
}
