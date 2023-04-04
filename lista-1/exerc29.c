#include <stdio.h>

int main(void)
{
  float a, b, c, d;
  float qtd = scanf("%f %f %f %f", &a, &b, &c, &d);

  float media = (a + b + c + d) / qtd;

  printf("%.2f", media);
  return 0;
}