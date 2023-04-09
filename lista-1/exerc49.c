#include <stdio.h>

int main(void)
{
  int hora, minuto, segundo, duracao;
  scanf("%d:%d:%d", &hora, &minuto, &segundo);
  scanf("%d", &duracao);

  int novaHora = hora;
  int novoMinuto = minuto;
  int novoSegundo = segundo + duracao;

  if (novoSegundo >= 60)
  {
    while (novoSegundo >= 60)
    {
      novoMinuto = novoSegundo / 60;
      novoSegundo = novoSegundo % 60;
    }
  }

  if (novoMinuto >= 60)
  {
    while (novoMinuto >= 60)
    {
      novaHora = novoMinuto / 60;
      novoMinuto = novoMinuto % 60;
    }
  }

  printf("inicio - %d:%d:%d\n", hora, minuto, segundo);
  printf("final - %d:%d:%d", novaHora, novoMinuto, novoSegundo);
  return 0;
}