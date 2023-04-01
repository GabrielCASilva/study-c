#include "stdio.h"

int main(void)
{
  float numeroReal;
  printf("Digite um número real: ");
  scanf("%f", &numeroReal);

  printf("A quinta parte do número digitado é de %.2f", numeroReal / 5);

  return 0;
}