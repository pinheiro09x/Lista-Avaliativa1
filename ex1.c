#include<stdio.h>
#include<math.h>
main(){

  float funcao, x;

  printf("Funcao: 5*x+3 / ²√x²-16");
  
  printf("\nDigite um valor para x:");
    scanf("%f", &x);

  funcao = (5*x+3)/sqrt(x*x-16);

  printf("\nO resultado da funcao e igual a %f", funcao);

}