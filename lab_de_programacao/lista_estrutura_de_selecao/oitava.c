#include <stdio.h>

int main(void) {
	int valor;
	scanf("%d", &valor);
	if(valor >= 10 && valor <= 600){
		printf("NOTAS de R$ 100,00: %d\n", valor/100);
		valor %= 100;
		printf("NOTAS de R$ 50,00: %d\n", valor/50);
		valor %= 50;
		printf("NOTAS de R$ 10,00: %d\n", valor/10);
		valor %= 10;
		printf("NOTAS de R$ 5,00: %d\n", valor/5);
		valor %= 5;
		printf("NOTA de R$ 1,00: %d\n", valor);
		return 0;
	} else {
		printf("valor invalido! (min 10, max 600\n");
	}
	return 0;
}