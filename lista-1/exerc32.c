#include <stdio.h>

int main(void)
{
  int num;
  scanf("%d", &num);

  int n1 = num * 3 + 1;
  int n2 = num * 2 - 1;

  printf("%d", n1 + n2);

  return 0;
}