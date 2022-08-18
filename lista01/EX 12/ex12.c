#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e retorne o volume desse
cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula:
𝑉= 𝜋 ∗ 𝑟𝑎𝑖𝑜 2 ∗ 𝑎𝑙𝑡𝑢𝑟a */

float calculaVolume(float altura, float raio)
{
  printf("Digite a altura do cilindro: ");
  scanf("%f", &altura);

  printf("Digite o raio do cilindro: ");
  scanf("%f", &raio);

  float pi = 3.14;
  float raioAoQuadrado = pow(raio, 2);

  return (pi * raioAoQuadrado * altura);
}

int main(int argc, char *argv[])
{
  float retornaAltura, retornaRaio;

  printf("O volume do cilindro eh: %.4f", calculaVolume(retornaAltura, retornaRaio));
  return 0;
}