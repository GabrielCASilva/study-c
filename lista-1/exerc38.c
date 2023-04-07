#include <stdio.h>

int main(void)
{
  float salario;
  scanf("%f", &salario);
  float novoSalario = salario + salario * 25 / 100;
  printf("%.2f", novoSalario);
  return 0;
}