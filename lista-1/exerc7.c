#include "stdio.h"

int main(void)
{
  float grauFahrenheit, grauCelsius;
  printf("Conversor de temperatura em de Fahrenheit para Celsius\n");
  printf("Digite a temperatura em Fahrenheit:\n");
  scanf("%f", &grauFahrenheit);

  grauCelsius = 5.0 * (grauFahrenheit - 32.0) / 9.0;

  printf("O grau convertido para Celsius é de %.2f", grauCelsius);
  return 0;
}