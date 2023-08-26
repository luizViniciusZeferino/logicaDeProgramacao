/*Um motorista de táxi anota a quilometragem do seu veículo
antes e após uma viagem, bem como o número de litros de
combustível gastos. Elabore um algoritmo que leia os 3 
dados acima e a capacidade do tanque. Ao final, o algoritmo
deve calcular e mostrar quantos quilômetros o seu carro faz
com um tanque cheio.*/


 int main()
{
    int quilometPósVia = 0, quilometAtual = 0, res = 0, res2 = 0, res3 = 0 ;
    float CombustGasto = 0, CapacidadTanq = 0;
    
    printf("Qual a quilometragem do veículo antes da viagem ?\n");
    scanf("%i", &quilometAtual);
    printf("Qual a quilometragem do veículo após a viagem ?\n");
    scanf("%i", &quilometPósVia);
    printf("Qual o total de combustivel gasto em litros?\n");
    scanf("%f", &CombustGasto);
    printf("Qual a capacidade do tanque do carro ?\n");
    scanf("%f", &CapacidadTanq);
    
    res = quilometPósVia - quilometAtual; 
    
    res2 = res / CombustGasto; 
    
    res3 = res2 * CapacidadTanq;
    
printf("O carro faz %i km com o tanque cheio, fazendo %ikm por litro\n", res3, res2);

    
    return 0;
}
