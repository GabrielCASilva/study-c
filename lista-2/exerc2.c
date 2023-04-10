#include <stdio.h>
#include <math.h>

int main(void)
{
  float num;
  printf("CALCULO DA RAIZ QUADRADA DE UM NUMERO QUALQUER\n\n");
  printf("DIGITE UM NUMERO: ");
  scanf("%f", &num);

  if (num > 0)
  {
    printf("RAIZ QUADRADA DE %.2f EH DE %.2f", num, sqrt(num));
  }
  else
  {
    printf("NUMERO INVALIDO");
  }
  return 0;
}