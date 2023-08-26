/*Tendo como entrada a altura e o sexo (codificado da seguinte forma:
1:feminino 2:masculino) de uma pessoa, construa um programa que
calcule e imprima seu peso ideal, utilizando as seguintes
Fórmulas:
- para homens: (72.7 * Altura) – 58
- para mulheres: (62.1 * Altura) – 44.7*/

    #include <stdio.h>

int main()
{
    int M = 0, F = 0, res = 0, sexo = 0;
    printf("Qual seu sexo ?(digite 1 para Masculino ou 2 para Feminino)\n");
    scanf("%i", &sexo);

    if(sexo == 1) {
        printf("Qual sua Altura ?\n");
        float AlturaM = 0;
        scanf("%f", &AlturaM);
        res = (72.7 * AlturaM) - 58;
        printf("O peso ideal para você de acordo com as informações seria: %i\n", res);
        
    } else if (sexo == 2){
        printf("Qual sua Altura ?\n");
        float AlturaF  = 0;
        scanf("%f", &AlturaF);
        res = (62.1	* AlturaF) - 44.7;
        printf("O peso ideal para você de acordo com as informações seria: %i\n", res);
        
    } else {
        printf("Por favor digite um número válido! :)");
    }
    
    
    return 0;
}
