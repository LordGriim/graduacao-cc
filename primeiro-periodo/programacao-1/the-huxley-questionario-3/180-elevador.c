#include <stdio.h>

int elevador(int n, int l, int soma, int flag) {
	int ps, pe;
	scanf("%d %d", &ps, &pe);
	if(soma > l)
		flag = 1;
	if(n > 0)
		return elevador(n-1, l, soma + (pe-ps), flag);
	return flag;
	
}

int main(void) {
	int n, l;
	scanf("%d %d", &n, &l);
	elevador(n, l, 0, 0) ? printf("S\n") : printf("N\n");
	return 0;
}