#include <stdio.h>

int main(void)
{
  int dia;

  printf("ESCREVA UM NUMERO DE 1 A 12: ");
  scanf("%d", &dia);

  switch (dia)
  {
  case 1:
    printf("JANIERO");
    break;
  case 2:
    printf("FEVEIRO");
    break;
  case 3:
    printf("MARCO");
    break;
  case 4:
    printf("ABRIL");
    break;
  case 5:
    printf("MAIO");
    break;
  case 6:
    printf("JUNHO");
    break;
  case 7:
    printf("JULHO");
    break;
  case 8:
    printf("AGOSTO");
    break;
  case 9:
    printf("SETEMBRO");
    break;
  case 10:
    printf("OUTUBRO");
    break;
  case 11:
    printf("NOVEMBRO");
    break;
  case 12:
    printf("DEZEMBRO");
    break;

  default:
    printf("NUMERO INVALIDO");
    break;
  }
  return 0;
}