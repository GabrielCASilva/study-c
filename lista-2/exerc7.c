#include <stdio.h>

int main(void)
{
  int num1, num2;
  scanf("%d %d", &num1, &num2);

  if (num1 > num2)
  {
    printf("%d", num1);
  }
  else if (num1 < num2)
  {
    printf("%d", num2);
  }
  else
  {
    printf("Números iguais");
  }

  return 0;
}