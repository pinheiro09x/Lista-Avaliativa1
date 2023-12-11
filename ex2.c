#include<stdio.h>

int main() {
  float chico = 1.50, ze = 1.10;
  int contador = 0;

  while (ze <= chico) {
    chico += 0.02;
    ze += 0.03;
    contador++;
  }

  printf("Em %d anos Zé será mais alto que Chico\n", contador);

  return 0;
}