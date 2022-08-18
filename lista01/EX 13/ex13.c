#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int somar (int a, int b, int c) {
	return a + b + c;
}

int main(int argc, char *argv[]) {
	printf("Resultado: %d", somar(1, 2, 3));
	return 0;
}
