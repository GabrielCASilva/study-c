#include <stdio.h>

int main(void)
{
  float salario, prestacaoEmprestimo;
  scanf("%f %f", &salario, &prestacaoEmprestimo);

  float porcentagem = (prestacaoEmprestimo - salario) / salario * 100;

  if (porcentagem > 20)
  {
    printf("Emprestimo não concedido");
  }
  else
  {
    printf("Emprestimo concedido");
  }
  return 0;
}