#include <stdio.h>
#include <stdlib.h>

/* Faça uma função capaz de receber por parâmetro 1 número inteiro. Então imprima na tela uma mensagem.
Chame a função na main.
Exemplo: se o valor passado for 5. Imprimir: “O próximo número é 6” */

int numeroInteiroIncremento(int numero)
{
  printf("Digite um numero: ");
  scanf("%d", &numero);
  numero++;
}

int main(int argc, char *argv[])
{
  int numeroIncrementado;
  printf("O proximo numero eh %d", numeroInteiroIncremento(numeroIncrementado));
  return 0;
}