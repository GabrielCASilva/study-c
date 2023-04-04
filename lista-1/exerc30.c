#include <stdio.h>

int main(void)
{
  float real, cotacao, dolar;

  scanf("%f %f", &real, &cotacao);

  dolar = real * cotacao;
  printf("%.2f", dolar);
  return 0;
}