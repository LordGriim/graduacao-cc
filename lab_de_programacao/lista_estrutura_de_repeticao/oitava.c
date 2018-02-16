#include <stdio.h>
#include <ctype.h>

int main(void) {
	int idade = 1, qtd_h, soma_i_h, qtd_g_p, qtd_h_n_g, soma_i_m, qtd_m_g_p, flag = 0;
	char sexo= ' ', gostou = ' ';
	qtd_h = soma_i_h = qtd_g_p = qtd_h_n_g = soma_i_m = qtd_m_g_p = 0;
	while(idade != 0 && sexo != 'x' && gostou != 'x') {
		scanf("%d", &idade);
		flag = 0;
		if(idade < 0) {
			printf("Entrada invalida\n");
			flag = 1;
		} else {
			scanf(" %c", &sexo);
			sexo = tolower(sexo);
			if(sexo != 'm' && sexo != 'f' && sexo != 'x') {
				flag = 1;
				printf("Entrada invalida\n");
			}else {
				scanf(" %c", &gostou);
				gostou = tolower(gostou);
				if(gostou != 's' && gostou != 'n' && gostou != 'x') {
					printf("Entrada invalida\n");
					flag = 1;
				} else {					
					if(gostou == 's') {
						qtd_g_p++;
					} 
					if(sexo == 'm') {
						qtd_h++;
						soma_i_h += idade;
						if(gostou == 'n') {
							qtd_h_n_g++;
						}
					} else if(sexo == 'f') {
						if(gostou == 's') {
							qtd_m_g_p++;
							soma_i_m += idade;
						}
					}
				}
			}
		}
	}
	if(qtd_h > 0) 
		printf("Media da idade dos homens entrevistados: %.2f\n", soma_i_h/(qtd_h*1.0));
	else 
		printf("nao houveram homens entrevistados\n");
	printf("quantidade de pessoas que gostaram do produto: %d\n", qtd_g_p);
	if(qtd_h > 0)
		printf("porcentagem de homens que nao gostaram do produto: %.2f\n", (100.0*qtd_h_n_g)/(qtd_h*1.0));
	else
		printf("nao houveram homens entrevistados\n");
	if(qtd_m_g_p > 0)
		printf("media da idade das mulheres que gostaram do produto: %.2f\n", soma_i_m/(qtd_m_g_p*1.0));
	else
		printf("mulheres entrevistadas nao gostaram do produto\n");
	return 0;
}