#include <stdio.h>

int main(void)
{
  float lado;
  scanf("%f", &lado);

  float area = lado * lado;

  printf("%.2f", area);
  return 0;
}