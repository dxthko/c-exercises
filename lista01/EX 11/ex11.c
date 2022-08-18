#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a retorne convertida
em graus Celsius. A fórmula de conversão é: C = (F – 32.0) * (5.0/9.0), sendo F a temperatura em Fahrenheit e C
a temperatura em Celsius.  */

float converteFarenheit(float temp)
{
  printf("Digite uma temperatura em Farenheit: ");
  scanf("%f", &temp);

  return ((temp - 32.0) * (5.0 / 9.0));
}

int main(int argc, char *argv[])
{
  float retornaCelsius;

  printf("Farenheit para Celsius: %.4f", converteFarenheit(retornaCelsius));

  return 0;
}