#include <stdio.h>
int main(void) {
	int i, n, saldo, valor, menor;
	scanf("%d %d", &n, &saldo);
	for(i = 0; i < n; i++) {
		scanf("%d", &valor);
		saldo += valor;
		if(i==0 || menor > saldo) {
			menor = saldo;
		}
	}
	printf("%d\n", menor);
	return 0;
}