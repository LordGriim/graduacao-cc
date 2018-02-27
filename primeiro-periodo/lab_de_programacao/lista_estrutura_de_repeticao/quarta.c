#include <stdio.h>

int main(void) {
	float a, b, c;
	do {
		scanf("%f %f %f", &a, &b, &c);
		if(a < (b + c) && b < (a + c) && c < (a + b)){
			if(a == b && b == c) {
				printf("triangulo equilatero\n");
			} else{
				if((a*a) == (b*b)+(c*c) || (b*b) == (a*a) + (c*c) || (c * c) == (a*a) + (b*b)){
					printf("triangulo retangulo\n");
				} else {
					printf("nao forma triangulo retangulo\n");
				}
				if(a != b && b != c && a != c) {
					printf("triangulo escaleno\n");
				} else {
					printf("triangulo isosceles\n");
				}
			}
		}
	} while(a != 0 && b != 0 && c != 0);
	return 0;
}