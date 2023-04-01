#include "stdio.h"

const int PI = 3.14;

int main(void)
{
  float anguloGraus, anguloRadianos;
  printf("Digite o valor de um ângulo qualquer em graus para converte-lo em redianos:\n");
  scanf("%f", &anguloGraus);

  anguloRadianos = anguloGraus * PI / 180;

  printf("O valor convertido é de: %.2f", anguloRadianos);

  return 0;
}