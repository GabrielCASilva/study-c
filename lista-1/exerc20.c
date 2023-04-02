#include <stdio.h>

int main(void)
{
  float libras, quilogramas;
  printf("Digite o valor em quilogramas para converte-lo em libras: ");
  scanf("%f", &quilogramas);

  libras = quilogramas / .45;

  printf("O valor em libras é de %.2f", libras);

  return 0;
}