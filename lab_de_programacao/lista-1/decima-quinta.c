#include <stdio.h>
/*
 *  Ler três números reais e escreva um dos códigos numéricos (0, 1, 2 ou 3): 0, se os números lidos 
 *  não puderem ser as medidas dos lados de um triângulo; 1, se os números são medidas de um triângulo 
 *  escaleno; 2, se os números são medidas de um triângulo isósceles; 3, se os números são medidas de 
 *  um triângulo equilátero.
 */
int main(void) {
	float l1, l2, l3;
	scanf("%f %f %f", &l1, &l2, &l3);
	printf("%d\n", (((l1 < l2+l3) && (l2 < l1+l3) && (l3 < l1+l2)) ? ((l1 == l2 && l2 == l3) ? 3 : ((l1 != l2 && l1 != l3 && l2 != l3) ? 1: 2)): 0));
	return 0;
}