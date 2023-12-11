#include<stdio.h>

int main() {
  int codigo, cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0, nulo5 = 0, branco6 = 0, opcao;

  printf("A seguir, você poderá encontrar o código dos candidatos e também os códigos de voto em branco e nulo.");
  printf("\nCandidato-1, Candidato-2, Candidato-3, Candidato-4, Voto Nulo-5, Voto em Branco-6");

  while (opcao != 0) {
    printf("\nPor favor, digite o código desejado: ");
    scanf("%d", &codigo);

    if (codigo == 1) {
      cand1++;
    } else if (codigo == 2) {
      cand2++;
    } else if (codigo == 3) {
      cand3++;
    } else if (codigo == 4) {
      cand4++;
    } else if (codigo == 5) {
      nulo5++;
    } else if (codigo == 6) {
      branco6++;
    }

    printf("\nGostaria que mais alguém votasse? Sim-9, Não-0: ");
    scanf("%d", &opcao);
  }

  printf("\nTotal de votos no candidato 1: %d", cand1);
  printf("\nTotal de votos no candidato 2: %d", cand2);
  printf("\nTotal de votos no candidato 3: %d", cand3);
  printf("\nTotal de votos no candidato 4: %d", cand4);
  printf("\nTotal de votos nulos: %d", nulo5);
  printf("\nTotal de votos em branco: %d\n", branco6);
}