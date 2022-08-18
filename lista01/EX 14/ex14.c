#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int somar(int* array, int size) {
	int total = 0;
	int i;
	
	for (i = 0; i < size; i++) {
		total += array[i];
	}
	return total;
}

int main(int argc, char *argv[]) {
	int valores[10];
	int i;
	
	for (i = 0; i < 10; i++) {
		printf("Digite um valor: ");
		scanf("%d", &valores[i]);
	}
	
	printf("Resultado da soma: %d", somar(valores, 10));
	
	return 0;
}
