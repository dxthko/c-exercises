#include <stdio.h>
#include <stdlib.h>

// Faça uma função capaz de imprimir a seguinte mensagem na tela “Bem-vindo ao sistema!”. Chame a função na main.

char imprimeMensagem()
{
  return printf("Bem vindo ao sistema!");
}

int main(int argc, char *argv[])
{
  imprimeMensagem();
  return 0;
}