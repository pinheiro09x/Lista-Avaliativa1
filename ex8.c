#include<stdio.h>

int main() {
  float ms, nf, medias, mediaf, prct;
  int opcao, contador = 0, filhostotais = 0, salariototal = 0, nsalariocem = 0;

  while (opcao != 2) {
    printf("Por favor, informe, respectivamente, sua média salarial e número de filhos: ");
    scanf("%f %f", &ms, &nf);

    contador++;
    filhostotais += nf;
    salariototal += ms;

    if (ms <= 100) {
      nsalariocem++;
    }

    printf("Deseja cadastrar um novo cidadão? Digite 1 para sim, ou 2 para não: ");
    scanf("%d", &opcao);
  }

  medias = salariototal / contador;
  mediaf = filhostotais / contador;
  prct = (float) nsalariocem * 100 / contador;

  printf("A média salarial da população, assim como a média do número de filhos e a porcentagem de pessoas com salário até cem reais são, respectivamente, %.2f, %.2f e %.2f%%\n", medias, mediaf, prct);
}