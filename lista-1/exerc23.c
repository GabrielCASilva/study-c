#include <stdio.h>

int main(void)
{
  float metros, jardas;

  printf("Valor em metros: ");
  scanf("%f", &metros);

  jardas = metros / .91;

  printf("%.2f", jardas);

  return 0;
}