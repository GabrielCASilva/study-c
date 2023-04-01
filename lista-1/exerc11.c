#include "stdio.h"

int main(void)
{
  float velocidadeKm, velocidadeM;
  printf("CONVERSOR DE VELOCIDADE\n");
  printf("m/s para Km/h\n\n");

  printf("Digite a velocidade em m/s\n");
  scanf("%f", &velocidadeM);

  velocidadeKm = velocidadeM * 3.6;

  printf("Valor convertido é de: %.2f", velocidadeKm);

  return 0;
}