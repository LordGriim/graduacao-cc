#include <stdio.h>

void troca(float *a, float *b) {
	float aux;
	if(*a > *b) {
		aux = *a;
		*a = *b;
		*b = aux;
	}
}

void ordena(float *h1, float *h2, float *h3, float *h4) {
	troca(h1, h2);
	troca(h2, h3);
	troca(h3, h4);
	troca(h1, h2);
	troca(h2, h3);
	troca(h1, h2);
}

int main (void) {
	float h1, h2, h3, h4;
	scanf("%f %f %f %f", &h1, &h2, &h3, &h4);
	ordena(&h1, &h2, &h3, &h4);
	printf("%.2f\n%.2f\n%.2f\n%.2f\n", h1, h3, h4, h2);
	return 0;
}