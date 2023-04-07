#include <stdio.h>

int main(void)
{
  float salarioBase;
  scanf("%f", &salarioBase);
  printf("%.2f", salarioBase + salarioBase * .05 - salarioBase * .07);
  return 0;
}