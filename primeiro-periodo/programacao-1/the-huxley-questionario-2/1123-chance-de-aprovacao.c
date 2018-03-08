#include <stdio.h>

int main(void) {

	int q_questoes, q_questoes_resolvida;
	
	float porcentagem;

	scanf("%d %d", &q_questoes, &q_questoes_resolvida);
	porcentagem = (q_questoes_resolvida*1.0/q_questoes) * 100;
	
	if(porcentagem > 0 && porcentagem < 20) {
		printf("%.2f%% 4.40%% Pessimo\n", porcentagem);
	} else if(porcentagem < 40) {
		printf("%.2f%% 31.65%% Ruim\n", porcentagem);
	} else if(porcentagem < 60) {
		printf("%.2f%% 56.82%% Bom\n", porcentagem);
	} else if(porcentagem < 80) {
		printf("%.2f%% 80.00%% Muito Bom\n", porcentagem);
	} else {
		printf("%.2f%% 94.00%% Excelente\n", porcentagem);
	}

	return 0;
}