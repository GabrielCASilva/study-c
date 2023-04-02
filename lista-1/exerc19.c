#include <stdio.h>

int main(void)
{
  float litros, metrosCubicos;
  printf("Digite o valor do volume em litros para transforma-lo em metros cubicos: ");
  scanf("%f", &litros);

  metrosCubicos = litros / 1000;
  printf("Valor convertido é de %.2f", metrosCubicos);

  return 0;
}