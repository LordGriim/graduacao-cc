#include <stdio.h>

int main(void) {

	int m;
	scanf("%d", &m);
	// m/60 -> quantidade de horas
	// m -> minutos
	// m*60 -> segundos
	printf("%d %d %d\n", m/60, m, m*60);

	return 0;
}