#include <stdio.h>
#include <stdlib.h>

// Escreva uma função que receba por parâmetro dois números e retorne o maior deles. Chame a função na main.

float maiorQue(float numUm, float numDois)
{

  printf("Digite um numero: ");
  scanf("%f", &numUm);

  printf("Digite outro numero: ");
  scanf("%f", &numDois);

  if (numUm > numDois)
  {
    printf("%.1f eh maior que %1.f", numUm, numDois);
  }
  else if (numDois > numUm)
  {
    printf("%.1f eh maior que %.1f", numDois, numUm);
  }
  else
  {
    printf("Os dois numeros sao iguais.");
  }
}

int main(int argc, char *argv[])
{
  float retornaNumUm, retornaNumDois;

  maiorQue(retornaNumUm, retornaNumDois);

  return 0;
}