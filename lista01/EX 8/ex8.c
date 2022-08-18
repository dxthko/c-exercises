#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que receba por parâmetro dois números e retorne a multiplicação desses números, ou seja,
o primeiro parâmetro multiplicado pelo segundo parâmetro. Chame a função na main. */

int multiplicaInteiros(int numUm, int numDois)
{
  printf("Digite um numero: ");
  scanf("%d", &numUm);

  printf("Digite outro numero: ");
  scanf("%d", &numDois);

  return (numUm * numDois);
}

int main(int argc, char *argv[])
{
  int retornaNumUm, retornaNumDois;

  printf("Resultado da multiplicacao: %d", multiplicaInteiros(retornaNumUm, retornaNumDois));

  return 0;
}