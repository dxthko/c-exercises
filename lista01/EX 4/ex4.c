#include <stdio.h>
#include <stdlib.h>

/* Faça uma função capaz de receber por parâmetro 2 números inteiros. Então imprima na tela uma mensagem.
Chame a função na main.
Exemplo: se os valores passados forem 5 e 6. Imprimir: “Os números passados foram 5 e 6” */

int doisInteiros(int numUm, int numDois)
{
  return printf("Os numeros passados foram %d e %d", numUm, numDois);
}

int main(int argc, char *argv[])
{
  int retornaNumUm;
  int retornaNumDois;

  printf("Digite um numero: ");
  scanf("%d", &retornaNumUm);

  printf("Digite outro numero: ");
  scanf("%d", &retornaNumDois);

  doisInteiros(retornaNumUm, retornaNumDois);

  return 0;
}