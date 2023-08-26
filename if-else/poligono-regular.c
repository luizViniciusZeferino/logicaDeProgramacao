/*Escreva	um	programa	para	ler	o	número	de	lados	de	um	polígono	
regular	 e	a	medida	do	lado	(em	cm).	Calcular	e	imprimir	o	
seguinte:	 − Se	o	número	de	lados	for	igual	a	3	escrever	
TRI NGULO	e	o	valor	da	 área − Se	o	número	de	lados	for	igual	
a	4	escrever	QUADRADO	e	o	valor	da	 sua	área.	 − Se	o	
número	de	lados	for	igual	a	5	escrever	PENTÁGONO. 

Acrescente	 as	 seguintes	 mensagens	 à	 solução	 do	 exercício	 anterior	
conforme	o	caso.	 − Caso	 o	 número	 de	 lados	 seja	 inferior	 a	 3	
escrever	 NÃO	 É	 UM	 POLÍGONO.	 − Caso	o	número	de	lados	seja	superior
a	5	escrever	POLÍGONO	NÃO	 IDENTIFICADO.*/

#include <stdio.h>

int main()
{
    int totallado = 0, medidalado = 0; 
    
    printf("Quantos lados possui o polígono?\n");
    scanf("%i", &totallado);
    printf("Quantos centimetros terá um dos lados?\n");
    scanf("%i", &medidalado);
    
    if (totallado == 3){
        float res = totallado * medidalado; 
        printf("De acordo com os dados digitados o polígono seria um triângulo com %.2f centimetros de área\n", res);
    } else if (totallado == 4){
        float res = totallado * medidalado; 
        printf("De acordo com os dados digitados o polígono seria um quadrado com %.2f centimetros de área\n", res);
    }else if (totallado == 5){
        float res = totallado * medidalado; 
        printf("De acordo com os dados digitados o polígono seria um pentágono com %.2f centimetros de área\n", res);
    }else if (totallado < 3 ){
        printf("Não é um polígono!");
    }else if (totallado > 5) { 
        printf("Polígono não identificado! ");
    }
    
    return 0;
}


