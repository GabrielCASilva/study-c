#include <stdio.h>

int main(void)
{
  float acres, metrosQuadrados;

  printf("Digite o valor em acres: ");
  scanf("%f", &acres);

  metrosQuadrados = acres * 4048.58;

  return 0;
}