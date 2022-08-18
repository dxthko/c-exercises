#include <stdio.h>
#include <stdlib.h>

/* Faça uma função capaz de receber por parâmetro 2 números com vírgula. Então imprima na tela uma
mensagem. Chame a função na main.
Exemplo: se os valores passados forem 5 e 6. Imprimir: “A soma de 5 e 6 é 11” */

float somaFloat(float numUm, float numDois)
{
  float soma = numUm + numDois;
  return printf("A soma de %.2f e %.2f eh: %.2f", numUm, numDois, soma);
}

int main(int argc, char *argv[])
{
  float retornaNumUm, retornaNumDois;

  printf("Digite um numero float: ");
  scanf("%f", &retornaNumUm);

  printf("Digite outro float: ");
  scanf("%f", &retornaNumDois);

  somaFloat(retornaNumUm, retornaNumDois);

  return 0;
}