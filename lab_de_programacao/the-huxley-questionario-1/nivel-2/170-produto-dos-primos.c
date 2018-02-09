#include <stdio.h>
#include <math.h>

int verifica_primo(int num) {
	int i;

	if((num % 2 == 0 && num > 2) || num < 2) return 0;
	for(i = 3; i < sqrt(num); i+=2) {
		if(num % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main(void) {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if(verifica_primo(a) && verifica_primo(b) && verifica_primo(c) && verifica_primo(d)) {
		printf("%d\n", a*b*c*d);
	} else {
		printf("SEM PRODUTO\n");
	}
	return 0;
}