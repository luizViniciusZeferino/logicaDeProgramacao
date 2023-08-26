/*Escreva um algoritmo que leia o valor da base e a 
altura de um retângulo e mostre os resultados:
Perímetro = 2 * (altura + base)
Área = base * altura
*/

    #include <stdio.h>

int main()
{
    int base = 0, altura = 0, perimetro = 0, area = 0; 
    
    printf("Qual o valor da base do retângulo ? \n");
    scanf("%i", &base);
    printf("Qual a altura do retângulo ? \n");
    scanf("%i", &altura);
    
    perimetro = 2 * (altura + base); 
    area = base * altura; 

    printf("O perimetro e a área do triangulo seria igual a: \n Perimetro = %i \n Àrea = %i", perimetro, area);
    
    return 0;
}
