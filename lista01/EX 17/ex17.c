#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void calcular(float raio, float* volume, float* area) { //float volume e float área são referências/endereços de memória para uma variável (ponteiro)
	*volume = 4/3 * 3.1414592 + raio * raio * raio; //o asterisco na frente indica que posso mudar o valor dessa variável
	*area = 4 * 3.1414592 * raio * raio;
}

int main(int argc, char *argv[]) {
	float v, a;
	
	calcular(3, &v, &a); //&v e &a para  referenciar os endereços volume e area
	printf("Volume: %f \\ Area: %f", v, a);
	return 0;
}
