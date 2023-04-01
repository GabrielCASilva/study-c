#include "stdio.h"

int main(void)
{
  float centimetros, podegadas;
  printf("DIGITE O VALOR EM POLEGADAS PARA CONVERTE-LO EM CENTIMETROS\n");
  scanf("%f", &podegadas);

  centimetros = podegadas * 2.54;

  printf("valor convertido: %.2f", centimetros);

  return 0;
}