#include "stdio.h"

const int PI = 3.14;

int main(void)
{
  float anguloGraus, anguloRadianos;
  printf("Digite o valor de um ângulo qualquer em redianos para converte-lo em graus:\n");
  scanf("%f", &anguloRadianos);

  anguloGraus = anguloRadianos * 180 / PI;

  printf("O valor convertido é de: %.2f", anguloGraus);

  return 0;
}