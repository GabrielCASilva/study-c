#include <stdio.h>

int main(void)
{
  float trabalho, av1, av2, notaFinal;
  int pesoTrab = 2;
  int pesoAv1 = 3;
  int pesoAv2 = 5;

  printf("DIGITE A NOTA DO TRABALHO DE 0 - 10: ");
  scanf("%f", &trabalho);
  printf("DIGITE A NOTA DA AV1 DE 0 - 10: ");
  scanf("%f", &av1);
  printf("DIGITE A NOTA DA AV2 DE 0 - 10: ");
  scanf("%f", &av2);

  notaFinal = (trabalho * pesoTrab + av1 * pesoAv1 + av1 * pesoAv2) / (pesoTrab + pesoAv1 + pesoAv2);

  if (notaFinal >= 0 && notaFinal < 3)
  {
    printf("REPROVADO");
  }
  else if (notaFinal >= 3 && notaFinal < 5)
  {
    printf("RECUPERACAO");
  }
  else
  {
    printf("APROVADO");
  }
  return 0;
}