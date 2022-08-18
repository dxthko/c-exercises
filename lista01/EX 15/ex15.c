#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float mediaAlunos(float* notas, int tam) {
	float total = 0;
	int i;
	
	for (i = 0; i < tam; i++) {
		total += notas[i];
	}
	return total / tam;
}

int main(int argc, char *argv[]) {]
	float valores[10];
	int i;
	
	for (i = 0; i < 10; i++) {
		printf("Digite uma nota: %d");
		scanf("%f", &valores[i]);
	}
	
	prinf("Resultado da media: %f", mediaAlunos(valores, 10));
	return 0;
}
