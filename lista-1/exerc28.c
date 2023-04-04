#include <stdio.h>

int main(void)
{
  float valor1, valor2, valor3;
  scanf("%f %f %f", &valor1, &valor2, &valor3);

  float result = (valor1 * valor1) + (valor2 * valor2) + (valor3 * valor3);
  printf("%.2f;", result);
  return 0;
}