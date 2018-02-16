#include <stdio.h>
/*
 * 1 - Ler um número natural de dois algarismos e informar os algarismos das unidades e das dezenas em
 * separado. Mostrar também o valor ao quadrado do novo número formado pela inversão dos algarismos
 * das unidades e dezenas do número dado
 */
int main(void) {
	int n;
	scanf("%d", &n);
	// n / 10 -> unidade de n
	// n % 10 -> dezena de n
	// (n%10) * 10 -> dezena invertida
	// n/10 -> unidade
	printf("%d %d %d\n", n/10, (n%10), ((n%10 * 10) + (n/10))*((n%10 * 10) + (n/10)));	
	return 0;
}