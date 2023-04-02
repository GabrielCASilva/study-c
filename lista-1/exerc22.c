#include <stdio.h>

int main(void)
{
  float metros, jardas;

  printf("Valor em jardas: ");
  scanf("%f", &jardas);

  metros = jardas * .91;

  printf("%.2f", metros);

  return 0;
}