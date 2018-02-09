#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {

	float lado;
	char saida[2][20];
	printf("Informe a medida de um dos lados do quadrado:\n");
	scanf("%f", &lado);
	sprintf(saida[0], "%.2f", lado*lado);
	sprintf(saida[1], "%.2f", (lado*lado)*2);
	if(saida[0][strlen(saida[0]) - 1] == '0')
		saida[0][strlen(saida[0])-1] = '\0';
	if(saida[1][strlen(saida[1]) - 1] == '0')
		saida[1][strlen(saida[1])-1] = '\0';
	printf("Resultado: %s\nDobro: %s\n", saida[0], saida[1]);

	return 0;
}