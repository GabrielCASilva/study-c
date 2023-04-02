#include <stdio.h>

int main(void)
{
  int metrosCubicos, litros;
  printf("Digite o valor em metros cubicos para ser convertido em litros: ");
  scanf("%f", &metrosCubicos);

  litros = 1000 * metrosCubicos;

  printf("O valor em litros é de %.2f", litros);

  return 0;
}