#include <stdio.h>

int main(void)
{
  float hectares, metros;
  scanf("%f", &hectares);

  metros = hectares * 10000;
  printf("\n%.2f metros", metros);

  return 0;
}