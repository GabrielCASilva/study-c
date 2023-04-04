#include <stdio.h>

int main(void)
{
  float metros, hectares;
  printf("Digite o valor da área em metros quadrados para ser convertido em hectares: ");
  scanf("%f", &metros);

  hectares = metros * 0.0001;

  printf("O valor em Hectares é de: %f", hectares);
  return 0;
}