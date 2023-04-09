#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int num;
  char sNum[5];
  scanf("%d", &num);

  itoa(num, sNum, 10);

  for (int i = 0; sNum[i] != '\0'; i++)
  {
    printf("%c\n", sNum[i]);
  }

  return 0;
}