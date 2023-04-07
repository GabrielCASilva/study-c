#include <stdio.h>

int main(void)
{
  float valor;
  scanf("%f", &valor);

  printf("total a pagar: %.2f\nvalor de cada parcela x3: %.2f", valor - valor * .1, valor / 3);
  printf("\ncommissao a vista: %.2f\ncomissao parcelada: %.2f", (valor - valor * .1) * .05, valor * .05);
  return 0;
}