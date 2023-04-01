#include "stdio.h"

int main(void)
{
  printf("********************************************\n");
  printf("CONVERSOR DE TEMPETARURA KELVIN PARA CELSIUS\n");
  printf("********************************************\n\n");

  float grauCelsius, grauKelvin;
  printf("Digite o valor em Kelvin: ");
  scanf("%f", &grauKelvin);

  grauCelsius = grauKelvin - 273.15;

  printf("\nO valor convertido é de: %.2f\n", grauCelsius);

  return 0;
}