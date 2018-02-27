#include <stdio.h>
/*
 * 2 - Ler um número natural de quatro algarismos e informar, em separado, os algarismos das 
 * unidades, dezenas, centenas e unidades de milhar
 */
int main(void) {
	int n;
	scanf("%d", &n); // lê a variável
	printf("%d %d %d %d\n", n/1000, n/100%10, n/10%10, n%10); // exibe, o valor respectivamente: do milhar, da centena, da dezena e da unidade
	return 0;
}