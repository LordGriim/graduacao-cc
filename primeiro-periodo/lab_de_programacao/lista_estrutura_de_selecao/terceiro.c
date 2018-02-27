#include <stdio.h>

int main(void) {
	float salario;
	scanf("%f", &salario);
	if(salario <= 600) {
		printf("Isento\n");
	} else if(salario <= 1200){
		printf("desconto = %.2f\n", salario * 0.2);
	} else if(salario <= 2000) {
		printf("desconto = %.2f\n", salario * 0.25);
	} else {
		printf("desconto = %.2f\n", salario * 0.3);
	}
	return 0;
}