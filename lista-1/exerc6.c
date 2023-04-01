#include "stdio.h"

int main(void)
{
  float grauCelsius;
  printf("Digite o número que represente o valor em graus Celsius para ser convertido em Fahrenheit\n");
  scanf("%f", &grauCelsius);

  float grauFahrenheit = grauCelsius * (9.0 / 5.0) + 32.0;
  printf("O valor convertido de Celsius para Fahrenheit é de: %.2f", grauFahrenheit);

  return 0;
}