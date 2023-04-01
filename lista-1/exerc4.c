#include "stdio.h"

int main(void)
{
  float numeroReal;

  printf("Digite um número real: ");
  scanf("%f", &numeroReal);

  printf("O quadrado do número digitado é de %.2f", numeroReal * numeroReal);

  return 0;
}