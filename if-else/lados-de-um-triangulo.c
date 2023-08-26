/*Escreva	 um	 programa que	 leia	 as	 medidas	 dos	 lados	
de	 um	 triângulo	 e	 escreva	se	ele	é	Equilátero,	Isósceles
ou	Escaleno.	Sendo	que:	 
− Triângulo	Equilátero:	possui	os 3	lados	iguais.	
− Triângulo	Isóscele:	possui	2	lados	iguais.
− Triângulo	Escaleno:	possui	3	lados	diferentes*/

#include <stdio.h>

int main()
{
    int lado1 = 0, lado2 = 0, lado3 = 0;
    
    printf("Escreva as medidas dos três lados do triangulo: \n");
    scanf("%i", &lado1);
    scanf("%i", &lado2);
    scanf("%i", &lado3);
    
    if (lado1 == lado2 && lado1 == lado3) {
        printf("Esse triangulo é Equilátero!");
    }else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("Esse triangulo é Isóscele");
    } else {
        printf("Esse triangulo é Escaleno");
    }
    
    
    return 0;
};

