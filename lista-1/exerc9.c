#include "stdio.h"

int main(void)
{
  float grauCelsius;
  printf("DIGITE O VALOR EM CELSIUS PARA CONVERTER PARA KELVIN:\n");
  scanf("%f", &grauCelsius);

  float grauKelvin = grauCelsius + 273.15;

  printf("O VALOR EM KELVIN É DE: %.2f", grauKelvin);

  return 0;
}