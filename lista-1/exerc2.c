#include "stdio.h"

int main(void)
{
  float numeroReal;

  printf("Escreva um número real:");
  scanf("%f", &numeroReal);

  printf("O número que você escreveu foi: %.2f", numeroReal);

  return 0;
}