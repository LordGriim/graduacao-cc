#include <stdio.h>

int main(void) {

	float salario, gasto, trinta_porcento;

	scanf("%f %f", &salario, &gasto);
	
	trinta_porcento = (salario/100) * 30;

	if(gasto >= trinta_porcento) {
		printf("0.00\n");
	} else {
		printf("%.2f\n", trinta_porcento-gasto);
	}

	return 0;
}