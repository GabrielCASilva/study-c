#include <stdio.h>

int main(void)
{
  float comprimento, polegadas;

  printf("Digite um valor em cm para ser convertido em polegadas: ");
  scanf("%f", &comprimento);

  polegadas = comprimento / 2.54;

  printf("O valor em polegadas é de %.2f", polegadas);
  return 0;
}