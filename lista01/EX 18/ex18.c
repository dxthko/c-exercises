#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// PARA MUDAR OS VALORES DE PARÂMETROS COM ASTERISCO, DECLARE ELES COM ASTERISCO NA FRENTE

void calcular(int* array, int tam, int* maior, int* qtd) {
	int i;
	*maior = array[0];
	
	for (i = 1; i < tam; i++) 
	{
		
		if (*maior < array[i]) {
			*maior = array[i];
		}
		
		*qtd = 0;
	}
	
	for (i = 0; i < tam; i++) 
	{
		if (*maior == array[i]) {
			(*qtd)++;
		}
	}
}

int main(int argc, char *argv[]) {
	int a[10] = {3, 2, 1, 6, 7, 3, 7, 2, 7};
	int maiorValor;
	int qtd;
	calcular(A, 10, &maiorValor, &qtd);
	return 0;
}
