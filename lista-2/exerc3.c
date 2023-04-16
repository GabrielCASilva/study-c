#include <stdio.h>
#include <math.h>

int main(void)
{
  int num;
  scanf("%d", &num);

  if (num > 0)
  {
    printf("%.2f", sqrt(num));
  }
  else
  {
    printf("%d", pow(num, 2));
  }

  return 0;
}