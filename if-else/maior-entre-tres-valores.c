/*Escreva	um	programa	para	ler	3	valores 	inteiros
e	escrever	o	maior	deles.	 Considere	que	o	usuário
não	informará	valores	iguais.*/ 

    #include <stdio.h>

int main()
{
    int valor1 = 0, valor2 = 0, valor3 = 0; 
    
    printf("Digite três números:\n");
    scanf("%i", &valor1);
    scanf("%i", &valor2);
    scanf("%i", &valor3);   
    
    if (valor1 > valor2 && valor1 > valor3){
        printf("O maior valor entre os dados digitados é: %i", valor1);
    } else if (valor2 > valor3 && valor2 > valor1) {
        printf("O maior valor entre os dados digitados é: %i", valor2);
    } else if (valor3 > valor1 && valor3 > valor2) {
        printf("O maior valor entre os dados digitados é: %i", valor3);
    }
    
    
    
    return 0;
}

