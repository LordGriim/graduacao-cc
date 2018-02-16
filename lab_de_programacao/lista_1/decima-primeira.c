#include <stdio.h>
/*
 * 11 - Ler os coeficientes b e c (o coef. a é 1) da equação do segundo grau x2+bx+c=0 e escrever
 * “tem raízes reais” ou “não tem raízes reais”.
 */
int main(void) {
	float b, c;
	scanf("%f %f", &b, &c);
	((b*b)-(4*c)) >= 0 ? printf("tem raizes reais\n") : printf("não tem raizes reais\n"); // verifica o valor de delta para determinar se existem ou não raizes reais
	return 0;
}