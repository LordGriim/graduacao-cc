#include <stdio.h>

int main(void) {
	float n1, n2, n3, aux;
	scanf("%f %f %f", &n1, &n2, &n3);
	if(n1 != n2 && n1 != n3 && n2 != n3) {
		if(n1 > n2 && n1 > n3) {
			aux = n1;
			n1 = n3;
			n3 = aux;
		} else if(n2 > n3) {
			aux = n2;
			n2 = n3;
			n3 = aux;
		}
		if(n1 > n2) {
			aux = n1;
			n1 = n2;
			n2 = aux;
		}
		printf("os tres sao diferentes\no numero do meio eh: %.2f\n", n2);
	} else if(n1 == n2 && n2 == n3) {
		printf("os tres lados sao iguais\n");
	} else {
		printf("apenas dois deles sao iguais\n");
	}
	return 0;
}