#include <stdio.h>

int main(void)
{
  float prova1, prova2, prova3, media;
  scanf("%f %f %f", &prova1, &prova2, &prova3);

  media = (prova1 + prova2 + prova3 * 2) / (1 + 1 + 2);

  if (media >= 60)
  {
    printf("APROVADO");
  }
  else
  {
    printf("REPROVADO");
  }
  return 0;
}