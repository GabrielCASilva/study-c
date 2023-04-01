#include "stdio.h"

int main(void)
{
  float velocidadeKm, velocidadeM;
  printf("CONVERSOR DE VELOCIDADE\n");
  printf("Km/h para m/s\n\n");

  printf("Digite a velocidade em Km/h\n");
  scanf("%f", &velocidadeKm);

  velocidadeM = velocidadeKm / 3.6;

  printf("Valor convertido é de: %.2f", velocidadeM);

  return 0;
}