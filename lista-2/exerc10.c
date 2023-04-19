#include <stdio.h>
#include <string.h>

int main(void)
{
  float altura, pesoIdeal;
  char sexo[10];

  printf("Altura: ");
  scanf("%f", &altura);
  printf("Sexo [ feminino | masculino ]: ");
  scanf("%10s", sexo);

  if (strcmp("masculino", sexo) == 0)
  {
    pesoIdeal = 72.7 * altura - 58;
  }
  else if (strcmp("feminino", sexo) == 0)
  {
    pesoIdeal = 62.1 * altura - 44.7;
  }
  else
  {
    printf("valor inválido");
    return 0;
  }

  printf("%.1f", pesoIdeal);
  return 0;
}