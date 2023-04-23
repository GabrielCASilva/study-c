#include <stdio.h>
#include <math.h>
int main(void)
{
  float num, result;
  printf("DIGITE UM NUMERO PARA CALCULARMOS O LOG DELE: ");
  scanf("%f", &num);

  if (num < 0)
  {
    printf("NUMERO INVALIDO!!!");
    return 0;
  }

  result = log(num);

  printf("%.2f", result);
  return 0;
}