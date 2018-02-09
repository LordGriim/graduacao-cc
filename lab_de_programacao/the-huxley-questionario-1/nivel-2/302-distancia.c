#include <stdio.h>

#define KMPS 0.000277778

int main(void) {
	
	int x, y, d, aux;
	scanf("%d %d %d", &x, &y, &d);
	aux = (d/(y-x*1.0) * 60);
	printf("%d minutos\n", aux);

	return 0;
}