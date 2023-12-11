#include<stdio.h>

int main() {
    
  float x, y;

  printf("Em um plano Cartesiano, digite um valor para o eixo x e para o eixo y respectivamente: ");
  scanf("%f %f", &x, &y);

  if (x == 0 && y == 0) {
    printf("O seu ponto se encontra na origem");
  } else if (x > 0 && y > 0) {
    printf("O seu ponto está no quadrante 1");
  } else if (x < 0 && y > 0) {
    printf("O seu ponto se encontra no quadrante 2");
  } else if (x < 0 && y < 0) {
    printf("O seu ponto está no quadrante 3");
  } else if (x > 0 && y < 0) {
    printf("Seu ponto está no quadrante 4");
  } else if (x == 0 && y > 0) {
    printf("Seu ponto se encontra na linha Y");
  } else if (x > 0 && y == 0) {
    printf("Seu ponto está na linha X");
  }
}