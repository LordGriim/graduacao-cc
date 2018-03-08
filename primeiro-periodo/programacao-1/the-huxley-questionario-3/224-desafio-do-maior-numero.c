#include <stdio.h>

int maior(int m) {
	int a;
	scanf("%d", &a);
	if(a == 0) 
		return m;
	if(m < a)
		return maior(a);
	return maior(m);
}

int main(void) {
	int a;
	scanf("%d", &a);
	printf("%d\n", maior(a));
	return 0;
}