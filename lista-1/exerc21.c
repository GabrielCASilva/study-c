#include <stdio.h>

int main(void)
{
  float quilogramas, libras;
  printf("Conversor de libras para quilogramas: ");
  scanf("%f", &libras);

  quilogramas = libras * .45;

  printf("Valor em quilogramas é de %.2f", quilogramas);

  return 0;
}