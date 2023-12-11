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
    if ((A * A == (C * C) + (B * B)) || (C * C == (A * A) + (B * B)) || (B * B == (A * A) + (C * C))) {
      printf("\nÉ um triângulo retângulo");
    }
    else if ((A * A + B * B - C * C) > 0 || (C * C + B * B - A * A) > 0 || (A * A + C * C - B * B) > 0) {
      printf("\nÉ um triângulo obtusângulo");
    }
    else if ((A * A + B * B - C * C) < 0 || (C * C + B * B - A * A) < 0 || (A * A + C * C - B * B) < 0) {
      printf("\nÉ um triângulo acutângulo");
    }
  } else {
    printf("\nNão é possível formar um triângulo com esses lados");
  }

  return 0;
}