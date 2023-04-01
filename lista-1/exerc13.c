#include "stdio.h"

int main(void)
{
  float velocidadeKm, velocidadeMilhas;
  printf("CONVERSOR DE VELOCIDADE\n");
  printf("Milhas para km/h\n\n");

  printf("Digite a velocidade em Milhas\n");
  scanf("%f", &velocidadeMilhas);

  velocidadeKm = velocidadeMilhas / 1.61;

  printf("Valor convertido é de: %.2f", velocidadeKm);

  return 0;
}