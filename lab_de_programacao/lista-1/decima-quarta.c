#include <stdio.h>

/*
 * Ler três números reais e escrever um dos códigos numéricos abaixo (0 ou 1): 0, se os números 
 * lidos não puderem ser as medidas dos lados de um triângulo; 1, se os números puderem; 
 */

int main(void) {
	float l1, l2, l3;
	scanf("%f %f %f", &l1, &l2, &l3); // le os numeros
	printf("%d\n", ((l1 >= (l2 + l3)) && (l2 >= (l3 + l1)) && (l3 >= (l1 + l2))) ? 0 : 1); // determina se da pra formar um triangulo
	return 0;
}