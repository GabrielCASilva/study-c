#include <stdio.h>
#include <math.h>

int main(void)
{
  float num;
  scanf("%f", &num);
  if (num > 0)
  {
    printf("Número ao quadrado: %.2f\n", pow(num, 2));
    printf("Raiz quadrada: %.2f", sqrt(num));
  }
  return 0;
}