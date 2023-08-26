/*Escreva um programa que leia o valor de 3 ângulos de um triângulo e
escreva se o triângulo é Acutângulo, Retângulo ou Obtusângulo. Sendo
que:
− Triângulo Retângulo: possui um ângulo reto. (igual a 90o)
− Triângulo Obtusângulo: possui um ângulo obtuso. (maior que90o)
− Triângulo Acutângulo: possui três ângulos agudos. (menor que 90o)*/

    #include <stdio.h>

int main()
{
  int   angulo1 = 0, angulo2 = 0, angulo3 = 0, res = 0, somaDosAngulos = 0; 
   
  printf("Escreva três angulos de um triângulo\n");
  scanf("%i", &angulo1);
  scanf("%i", &angulo2);
  scanf("%i", &angulo3);
  somaDosAngulos = angulo1 + angulo2 + angulo3;
  res = ("%i", somaDosAngulos * (3 - 2)) / 3;  
  if (("%i",res) < 90) {
      printf("O triângulo é acutângulo!");
  } else if (("%i", res) > 90) {
      printf("O triângulo é obtusângulo!");
  }else if (("%i", res) == 90) {
      printf("O triângulo é retângulo!");
  }

    return 0;
}


