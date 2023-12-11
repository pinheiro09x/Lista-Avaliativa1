#include<stdio.h>

int main() {
  float A, B, C;

  printf("Digite um valor para o primeiro lado do triângulo: ");
  scanf("%f", &A);

  printf("Digite um valor para o segundo lado: ");
  scanf("%f", &B);

  printf("Digite um valor para o último lado: ");
  scanf("%f", &C);

  if ((A < B + C) && (B < A + C) && (C < A + B)) {

    if (A == B && B == C) {
      printf("\nÉ um triângulo equilátero");
    } else if (A != B && B != C && C != A) {
      printf("\nÉ um triângulo escaleno");
    } else {
      printf("\nÉ um triângulo isósceles");
    }
  } else {
    printf("\nNão é possível formar um triângulo com esses lados");
  }
}