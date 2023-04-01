#include "stdio.h"

int main(void)
{
  float velocidadeKm, velocidadeMilhas;
  printf("CONVERSOR DE VELOCIDADE\n");
  printf("km/h para milhas\n\n");

  printf("Digite a velocidade em km/h\n");
  scanf("%f", &velocidadeKm);

  velocidadeMilhas = velocidadeKm * 1.61;

  printf("Valor convertido é de: %.2f", velocidadeMilhas);

  return 0;
}