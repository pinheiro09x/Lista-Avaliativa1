#include<stdio.h>
int main() {
  float nt1, nt2, nt3, media, turma = 0, mediaturma;
  int contador = 0;

  while (contador < 30) {
    printf("Por favor, digite suas notas da prova um, dois e três respectivamente: ");
    scanf("%f %f %f", &nt1, &nt2, &nt3);

    media = (nt1 * 2 + nt2 * 4 + nt3 * 3) / 10;
    printf("\nSua média foi igual a: %.2f", media);

    if (media >= 7) {
      printf("\nAprovado\n");
    } else {
      printf("\nReprovado\n");
    }

    contador++;
    turma += media;
  }

  mediaturma = turma / contador;
}
