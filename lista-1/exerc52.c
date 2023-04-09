#include <stdio.h>

int main(void)
{
  float a, b, c, premio;
  printf("Doacoes\n");
  scanf("%f %f %f", &a, &b, &c);
  printf("Premio\n");
  scanf("%f", &premio);

  float totalDoado = a + b + c;

  float porcentagemA = a / totalDoado * 100;
  float porcentagemB = b / totalDoado * 100;
  float porcentagemC = c / totalDoado * 100;

  printf("Quem doou %.2f fica com %.2f\n", a, premio * porcentagemA / 100);
  printf("Quem doou %.2f fica com %.2f\n", b, premio * porcentagemB / 100);
  printf("Quem doou %.2f fica com %.2f\n", c, premio * porcentagemC / 100);

  return 0;
}