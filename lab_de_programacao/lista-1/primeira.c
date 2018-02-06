#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	// n / 10 -> unidade de n
	// n % 10 -> dezena de n
	// (n%10) * 10 -> dezena invertida
	// n/10 -> unidade
	printf("%d %d %d\n", n/10, (n%10), ((n%10 * 10) + (n/10))*((n%10 * 10) + (n/10)));	
	return 0;
}