/*
Faça um algoritmo que leia um valor inteiro N, a qual corresponde a 
quantidade de idades que serão lidas em seguida. Após a leitura das idades mostre:
a) média das idades
b) o percentual de pessoas com menos de 18 anos
c) o percentual de pessoas com idade de 18 a 22 anos.
d) o percentual de pessoas com mais de 22 anos.
*/



#include <stdio.h>

int main()
{
    int valorN = 0, idades = 0, totalPessoas = 0; 
    float idadeMenos18 = 0, idade18a22 = 0, idadeMaior22 = 0, somaIdades = 0;
    printf("Quantidades de idades a serem lidas: \n");
    scanf("%i", &valorN);
   
    for (int i = 1; i <= valorN; i++){
    printf("Digite a idade %d: ", i);
    scanf("%d", &idades);
    
    if (idades < 18) {
        idadeMenos18++;
    } else if (idades >= 18 && idades <= 22) {
        idade18a22++;
    }else {
        idadeMaior22++;
    };
    
    somaIdades += idades; 
    totalPessoas++;
    
    }
    
    float mediaIdades = somaIdades / totalPessoas;
    float porcentMenos18 = idadeMenos18 / totalPessoas * 100;
    float porcent18a22 = idade18a22 / totalPessoas * 100;
    float porcentMaior22 = idadeMaior22 / totalPessoas * 100; 
    
    printf("A média das idades seria de: %.2f \n", mediaIdades);
    printf("A porcentagem de pessoas com menos de 18 anos de idade seria: %.2f \n", porcentMenos18);
    printf("A porcentagem de pessoas com idade entre 18 e 22 anos seria: %.2f \n", porcent18a22);
    printf("A porcentagem de pessoas com mais de 22 anos seria: %.2f \n", porcentMaior22);
    
    
    
    return 0;
}
