#include <stdio.h>
#include <math.h>

int main(void)
{
  float x, y, distancia;
  scanf("%f %f", &x, &y);

  distancia = sqrt(pow(x, 2) + pow(y, 2));

  printf("%.2f", distancia);

  return 0;
}