#include <stdio.h>

int main(void)
{
  int num1, num2;
  scanf("%d %d", &num1, &num2);

  if (num1 > num2)
  {
    printf("O maior número: %d\n", num1);
    printf("Diferença entre eles é de: %d\n", num1 - num2);
  }
  else
  {
    printf("O maior número: %d\n", num2);
    printf("Diferença entre eles é de: %d\n", num2 - num1);
  }

  return 0;
}