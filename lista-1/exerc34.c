#include <stdio.h>

const float PI = 3.141592;

int main(void)
{
  float raio;
  scanf("%f", &raio);

  float area = raio * raio * PI;

  printf("%.2f", area);

  return 0;
}