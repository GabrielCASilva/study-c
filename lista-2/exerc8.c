#include <stdio.h>

int main(void)
{
  float nota1, nota2;
  scanf("%f %f", &nota1, &nota2);
  if (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10)
  {
    float media = (nota1 + nota2) / 2;
    printf("A média é de: %.1f", media);
  }
  else
  {
    printf("Nota inválida");
  }
  return 0;
}