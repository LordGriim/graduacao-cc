#include <stdio.h>

int main(void) {
	int num[5], i, j, aux;
	for(i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
	}
	for(i = 0; i < 5; i++) {
		for(j = 0; j < i; j++) {
			if(num[i] > num[j]) {
				aux = num[i];
				num[i] = num[j];
				num[j] = aux;
			}
		}
	}

	for(i = 0; i < 5; i++) {
		printf("%d - %d km/h\n", i+1, num[i]);
	}

	return 0;
}