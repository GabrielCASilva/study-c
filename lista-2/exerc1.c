#include <stdio.h>

int main(void)
{
  int num1, num2;

  printf("-- PROGRAMA PARA MOSTRAR QUAL NÚMERO É MAIOR --\n\n");
  printf("NUM 1: ");
  scanf("%d", &num1);

  printf("NUM 2: ");
  scanf("%d", &num2);

  if (num1 > num2)
  {
    printf("\nNUM %d É MAIOR", num1);
  }
  else
  {
    printf("\nNUM %d É MAIOR", num2);
  }

  return 0;
}