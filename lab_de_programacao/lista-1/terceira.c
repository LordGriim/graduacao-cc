#include <stdio.h>
/*
 * 3 - Ler um número real representando um tempo em minutos e mostrá-lo no formato: 
 * h horas, m minutos e s segundos, com h, m e s inteiros.  
 */
int main(void) {

	int m;
	scanf("%d", &m);
	// m/60 -> quantidade de horas
	// m -> minutos
	// m*60 -> segundos
	printf("%d %d %d\n", m/60, m, m*60);

	return 0;
}