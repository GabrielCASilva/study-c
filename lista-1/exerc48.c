#include <stdio.h>

int main(void)
{
  int segundos;
  int minutos = 0;
  int horas = 0;

  scanf("%d", &segundos);

  if (segundos >= 60)
  {
    while (segundos >= 60)
    {
      minutos = segundos / 60;
      segundos = segundos % 60;
    }
  }

  if (minutos >= 60)
  {
    while (minutos >= 60)
    {
      horas = minutos / 60;
      minutos = minutos % 60;
    }
  }

  printf("%d:%d:%d", horas, minutos, segundos);
  return 0;
}