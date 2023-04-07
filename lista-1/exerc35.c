#include <stdio.h>
#include <math.h>

int main(void)
{
  float a, b;
  scanf("%f %f", &a, &b);

  float hipotenusa = sqrt(pow(a, 2) + pow(b, 2));
  printf("%.2f", hipotenusa);
  return 0;
}