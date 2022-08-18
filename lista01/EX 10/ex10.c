#include <stdio.h>
#include <stdlib.h>

/* Faça uma função que receba um número inteiro de 1 a 12 e imprima em tela o mês e a sua quantidade de dias
de acordo com o número digitado pelo usuário. Caso o usuário digite um número abaixo de 1 ou acima de 12,
imprima na tela “mês inválido”
Exemplo: Entrada = 4. Saída = abril.  */

int achaMes(int data)
{
  int i;

  printf("Digite o numero do mes que voce quer saber: ");
  scanf("%d", &data);

  for (i = data; i <= 12; i++)
  {
    if ((i < 1) || (i > 12))
    {
      printf("Mes invalido!");
    }

    if (i == 1)
    {
      printf("Janeiro!");
    }

    if (i == 2)
    {
      printf("Fevereiro!");
    }

    if (i == 3)
    {
      printf("Marco!");
    }

    if (i == 4)
    {
      printf("Abril!");
    }

    if (i == 5)
    {
      printf("Maio!");
    }

    if (i == 6)
    {
      printf("Junho!");
    }

    if (i == 7)
    {
      printf("Julho!");
    }

    if (i == 8)
    {
      printf("Agosto!");
    }

    if (i == 9)
    {
      printf("Setembro!");
    }

    if (i == 10)
    {
      printf("Outubro!");
    }

    if (i == 11)
    {
      printf("Novembro!");
    }

    if (i == 12)
    {
      printf("Dezembro!");
    }
  }
}

int main(int argc, char *argv[])
{
  int retornaMes;

  achaMes(retornaMes);
  return 0;
}