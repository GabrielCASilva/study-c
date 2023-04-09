#include <stdio.h>

int main(void)
{
  float c, l, precoM;

  scanf("%f %f %f", &c, &l, &precoM);
  printf("%.2f", (c * 2 + l * 2) * precoM);
  return 0;
}