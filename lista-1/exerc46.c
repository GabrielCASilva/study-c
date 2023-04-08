#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int num;
  char sNum[4];
  char invertNum[4];
  scanf("%d", &num);

  itoa(num, sNum, 10);

  invertNum[0] = sNum[2];
  invertNum[1] = sNum[1];
  invertNum[2] = sNum[0];
  invertNum[3] = '\0';

  printf("%s\n", invertNum);

  printf("%c\n", sNum);
  printf("%c\n", invertNum);
  return 0;
}