#include <stdio.h>

int main(void)
{
  float valor;
  scanf("%f", &valor);

  float total = valor - valor * 12 / 100;
  printf("%.2f", total);
  return 0;
}