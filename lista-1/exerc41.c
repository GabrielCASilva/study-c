#include <stdio.h>

int main(void)
{
  float valorHora;
  int numHoras;
  scanf("%f %d", &valorHora, &numHoras);

  printf("%.2f", numHoras * valorHora + numHoras * valorHora * .1);
  return 0;
}