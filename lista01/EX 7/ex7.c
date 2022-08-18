#include <stdio.h>
#include <stdlib.h>

/* Faça uma função capaz de receber por parâmetro 1 número inteiro. A sua função deverá multiplicar o
parâmetro por 2. A função deverá retornar o novo valor. Chame a função na main. */

int multiplicaPorDois(int numUm)
{
  printf("Digite um numero para ser multiplicado: ");
  scanf("%d", &numUm);

  return (numUm * 2);
}

int main(int argc, char *argv[])
{
  int retornaMultip;

  printf("Numero multiplicado: %d", multiplicaPorDois(retornaMultip));
  return 0;
}