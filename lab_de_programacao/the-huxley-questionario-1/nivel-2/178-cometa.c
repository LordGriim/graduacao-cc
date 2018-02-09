#include <stdio.h>

int main(void) {	
	int ano_atual, i = 1986;
	scanf("%d", &ano_atual);
	while(ano_atual >= i) {
		i+=76;
	}
	printf("%d\n", i);
	return 0;
}