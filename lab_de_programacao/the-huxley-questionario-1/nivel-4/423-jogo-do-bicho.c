#include <stdio.h>

typedef struct Numero {
	int u, d, c, m;
} Numero;

Numero divide(int num){
	Numero n;
	n.u = num % 10;
	n.d = (num / 10) % 10;
	n.c = (num / 100) % 10;
	n.m = (num / 1000) % 10;
	return n;
}

int max(int num1, int num2) {
	return num1 > num2 ? num1 : num2;
}

int verifica_bicho(int n1, int n2) {
	int i;
	if((n1 == 0 && (n2 >= 97 && n2 < 100)) || (n2 == 0 && (n1 >= 97 && n1 < 100))) {
		return 1;
	}
	for(i = 1; i <= 100; i+=4) {
		if((n1 >= i && n1 < i+4) && (n2 >= i && n2 < i+4)){
			return 1;
		} 
	}
	return 0;
}

int main(void) {
	double aposta;
	int m, n, du1, du2;
	Numero n1, n2;
	scanf("%lf %d %d", &aposta, &m, &n);
	while(!(aposta == 0 && m == 0 && n == 0)) {
		n1 = divide(m);
		n2 = divide(n);
		du1 = (n1.u + (n1.d * 10));
		du2 = (n2.u + (n2.d * 10));
		if(n1.u == n2.u && n1.d == n2.d && n1.c == n2.c && n1.m == n2.m) {
			printf("%.2lf\n", aposta * 3000);
		} else if(n1.u == n2.u && n1.d == n2.d && n1.c == n2.c) {
			printf("%.2lf\n", aposta * 500);
		} else if(n1.u == n2.u && n1.d == n2.d) {
			printf("%.2lf\n", aposta*50);
		} else if(verifica_bicho(du1, du2)){
			printf("%.2lf\n", aposta * 16);
		} else {
			printf("0.00\n");
		}
		scanf("%lf %d %d", &aposta, &m, &n);
	}
	return 0;
}