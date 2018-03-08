#include <stdio.h>

void calcula(int qtd_carros, float *total_multa, int *qtd_casas_mult) {
	if(qtd_carros == 999) 
		return;
	if(qtd_carros > 2) {
		*qtd_casas_mult += 1;
		*total_multa += (qtd_carros-2.0) * 12.89;
	}
	scanf("%d", &qtd_carros);
	calcula(qtd_carros, total_multa, qtd_casas_mult);
}

int main(void) {

	int qtd_carros, qtd_casas_mult;
	float total_multa;
	
	total_multa = 0;
	qtd_casas_mult = 0;
	
	scanf("%d", &qtd_carros);

	calcula(qtd_carros, &total_multa, &qtd_casas_mult);

	printf("%.2f\n%d\n", total_multa, qtd_casas_mult);

	return 0;
}