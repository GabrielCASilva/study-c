#include "stdio.h"

int main(void)
{
  int numero;

  printf("Escreva um número inteiro no console:");
  scanf("%d", &numero);

  printf("O número que você escreveu foi: %d", numero);

  return 0;
}