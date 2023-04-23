#include <stdio.h>

int main(void)
{
  int num, sum;
  printf("DIGITE UM NUMERO PARA VERIFICARMOS A SOMA DE SEUS ALGARISMOS: ");
  scanf("%d", &num);
  if (num < 0)
  {
    printf("NUMERO INVALIDO!!!");
    return 0;
  }

  sum = 0;
  while (num != 0)
  {
    int temp = num % 10;
    sum = sum + temp;
    num /= 10;
  }

  printf("%d", sum);

  return 0;
}