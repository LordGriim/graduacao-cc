#include <stdio.h>

float expo(float expoente, float base) {
	if(expoente == 1) 
		return base;
	return base * expo(expoente-1, base);
}

float fat(float n) {
	if(n == 1) return n;
	return n * fat(n-1);
}

int main(void) {
	int t = 0;
	float x, sen, exp;
	scanf("%f", &x);
	while (t != -1) {
		sen = x;
		exp = 3;
		printf("-1 para encerrar\n");
		scanf("%d", &t);
		while(t/2 > 0) {
			sen -= (expo(exp, x)/fat(exp));
			exp += 2;
			sen += (expo(exp, x)/fat(exp));
			t -= 2;
		}
		if(t != -1)
			printf("%.2f\n", sen);
	}
	return 0;
}