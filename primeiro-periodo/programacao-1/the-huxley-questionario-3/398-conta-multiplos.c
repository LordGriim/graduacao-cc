#include <stdio.h>

int conta_multiplos(int n1, int n2, int j, int i, int cont) {
	if(n1 * j >= 0 && n2 * i >= 50) 
		return cont;
	if(j >= 50) 
		return conta_multiplos(n1, n2, 1, i+1, cont);
	if(n1*j == n2 * i)
		cont++;
	return conta_multiplos(n1, n2, j+1, i, cont);
}

int main(void) {
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	printf("%d\n", conta_multiplos(n1, n2, 1, 1, 0));
	return 0;
}
