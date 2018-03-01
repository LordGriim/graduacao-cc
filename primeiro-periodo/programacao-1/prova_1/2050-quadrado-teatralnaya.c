#include <stdio.h>

// calcula a largura
int calc_l(int m, int a){
	return ((m/(a*1.0)) == (m/a) ? (m/a) : ((m/a) + 1));
}

// calcula a alura
int calc_h(int n, int a) {
	return ((n/(a*1.0)) == (n/a) ? (n/a) : ((n/a) + 1));
}

int main(void) {
	int m, n, a;
	scanf("%d %d %d", &m, &n, &a);
	printf("%d\n", calc_l(m, a)*calc_h(n, a));
	return 0;
}