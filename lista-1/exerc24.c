#include <stdio.h>

int main(void)
{
  int metrosQuadrados, acres;
  printf("Digite o valor em matros quadrados para converte-lo em acres: ");
  scanf("%f", &metrosQuadrados);

  acres = metrosQuadrados * .000247;
  printf("O valor em acres é %.2f", acres);

  return 0;
}