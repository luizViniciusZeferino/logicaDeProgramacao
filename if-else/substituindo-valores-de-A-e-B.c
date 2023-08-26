/*Crie um algoritmo que leia dois valores A e B e troque os valores
das variáveis de forma que A passe a ter o valor de B e B passe a 
ter o valor de A. Após a troca, o algoritmo deve exibir os novos valores de A e B.*/

    #include <stdio.h>

int main()
{
    int valor1 = 0, valor2 = 0;
    
    printf("Defina valores para A e B a seguir:\n");
    scanf("%i", &valor1);
    scanf("%i", &valor2);
    
    if (valor1 != valor2 && valor2 != valor1){
        printf("A ordem dos números foram trocadas sendo A = %i e B = %i", valor2, valor1);
    } else {
        printf("Os valores de A e B são iguais!");
    }

    return 0;
}

