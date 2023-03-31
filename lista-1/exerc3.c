#include "stdio.h"

int main(void)
{
  int valor1, valor2, valor3;

  printf("Por favor, digite três valores inteiros\n");
  scanf("%d", &valor1);
  scanf("%d", &valor2);
  scanf("%d", &valor3);

  printf("O somatório desses valores é de: %d", valor1 + valor2 + valor3);

  return 0;
}