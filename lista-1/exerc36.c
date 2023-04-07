#include <stdio.h>
#include <math.h>

const float PI = 3.141592;

int main(void)
{
  float altura, raio;
  scanf("%f %f", &altura, &raio);

  printf("%.2f", PI * pow(raio, 2) * altura);
  return 0;
}