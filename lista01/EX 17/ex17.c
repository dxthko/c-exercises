#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void calcular(float raio, float* volume, float* area) { //float volume e float �rea s�o refer�ncias/endere�os de mem�ria para uma vari�vel (ponteiro)
	*volume = 4/3 * 3.1414592 + raio * raio * raio; //o asterisco na frente indica que posso mudar o valor dessa vari�vel
	*area = 4 * 3.1414592 * raio * raio;
}

int main(int argc, char *argv[]) {
	float v, a;
	
	calcular(3, &v, &a); //&v e &a para  referenciar os endere�os volume e area
	printf("Volume: %f \\ Area: %f", v, a);
	return 0;
}
