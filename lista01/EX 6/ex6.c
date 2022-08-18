#include <stdio.h>
#include <stdlib.h>

/* Faça uma função capaz de receber por parâmetro 1 número inteiro. A sua função deverá incrementar o
parâmetro em 1 vez, ou seja, somar 1. A função deverá retornar o novo valor. Chame a função na main. */

int incrementoInteiro(int numUm)
{
  printf("Digite um numero: ");
  scanf("%d", &numUm);
  numUm++;
}

int main(int argc, char *argv[])
{
  int retornaIncremento;

  printf("Incremento: %d", incrementoInteiro(retornaIncremento));
  return 0;
}