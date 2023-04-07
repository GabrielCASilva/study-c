#include <stdio.h>

int main(void)
{
  float diaria = 30.00;
  float imposto = .08;
  int diasTrabalhados;

  scanf("%d", &diasTrabalhados);

  printf("%.2f", diaria * diasTrabalhados - diaria * diasTrabalhados * imposto);
  return 0;
}