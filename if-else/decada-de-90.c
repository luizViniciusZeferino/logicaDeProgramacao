/*Faça uma algoritmo que leia o ano de nascimento de uma pessoa
  e mostre uma mensagem caso ela tenha nascido na década de 90 
  (1990 até 1999 inclusive)*/

    #include <stdio.h>

  int main()
{
    int anoNascimento = 0; 
    
    printf("Digite o ano de nascimento: \n");
    scanf("%i", &anoNascimento); 
    
    if(anoNascimento <= 1999 && anoNascimento >= 1990){
        printf("De acordo com o ano atual(2023) você tem uma idade entre 24 a 36 anos!");
    }else{
        printf("Tente Novamente!");
    }
    
    return 0;
}